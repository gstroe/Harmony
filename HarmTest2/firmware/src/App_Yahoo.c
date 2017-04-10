#include "system_config.h"

// Include all headers for any enabled tcpip functions
#include "tcpip/tcpip.h"
#include "system/tmr/sys_tmr.h"


//#include "cyassl_glue.h"
#include "certs.h"
#include "config.h"
#include <cyassl/ssl.h>
#include <cyassl/internal.h>
#include <cyassl/ctaocrypt/logging.h>

#include "system_definitions.h"
#include "system_config.h"
#include "tcpip/src/system/system_debug_private.h"

static void SendCommandMessage(const void* cmdIoParam, const char* message);

uint8_t cityTemperature[4];
uint8_t woeid[10] = {'2', '4', '7', '1', '3', '9', '0'}; //  Default WOEID for Phoenix AZ USA
uint8_t city[20] = {'?', 0};
uint8_t code[20] = {'3', '2', '0', '0', 0};
TCPIP_NET_HANDLE netH;
char myCDCBuffer[50];

static enum _yahooClientState {
    SM_YAHOO_HOME = 0,
    SM_YAHOO_WAIT_ON_DNS,
    SM_YAHOO_IS_CONNECTED,
    SM_YAHOO_IS_SSL_CONNECTED,
    SM_YAHOO_GET_CLOUD,
    SM_YAHOO_GET_CLOUD_RESPONSE_CODE,
    SM_YAHOO_GET_CLOUD_RESPONSE_TEMPERATURE,
    SM_YAHOO_GET_CLOUD_RESPONSE_CITY,
    SM_YAHOO_POST_CLOUD,
    SM_YAHOO_POST_CLOUD_RESPONSE,
    SM_YAHOO_UPDATE_CLOUD_DATABASE,
    SM_YAHOO_UPDATE_CLOUD_DATABASE_RESPONSE,
    SM_YAHOO_CLOSE,
    SM_YAHOO_WAIT,
    SM_YAHOO_DONE
} yahooClientState = SM_YAHOO_HOME;

typedef enum {
    CYASSL_GLUE_ERROR = -1,
    CYASSL_GLUE_UNKNOWN = 0,
    CYASSL_GLUE_TCP_OPEN,
    CYASSL_GLUE_CONNECTED,
    CYASSL_GLUE_CLOSING,
    CYASSL_GLUE_CLOSED
} CYASSL_GLUE_CONNECTION_STATE;

typedef struct {
    TCP_SOCKET socket;
    TCP_PORT port;
    void* ctx;
    void* ssl;
} SSL_CONNECTION;

#define WEBSITE "weather.yahooapis.com"
#define GETREQUEST "forecastrss?w=%s&u=f"

int8_t TCPIP_TLS_CloseConnection(SSL_CONNECTION *info)
{
    CyaSSL_free(info->ssl);
    CyaSSL_CTX_free(info->ctx);
    TCPIP_TCP_Close(info->socket);
    info->socket = INVALID_SOCKET;
    return 1;
}

int TCPIP_TLS_Receive_cb(void *sslin, char *buf, int sz, void *ctx)
{
    CYASSL *ssl = (CYASSL*) sslin;
    TCP_SOCKET socket = ssl->rfd;
    uint16_t bufferSize;

    bufferSize = TCPIP_TCP_GetIsReady(socket);
    //SYS_CONSOLE_PRINT("    Number of bytes ready: %d\r\n", bufferSize);
    if (bufferSize == 0)
    {
        return CYASSL_CBIO_ERR_WANT_READ;
    }

    bufferSize = TCPIP_TCP_ArrayGet(socket, (uint8_t*) buf, sz);
    //SYS_CONSOLE_PRINT("    Number of bytes received: %d\r\n", bufferSize);
    return bufferSize;
}

int TCPIP_TLS_Send_cb(void *sslin, char *buf, int sz, void *ctx)
{
    CYASSL *ssl = (CYASSL*) sslin;
    register TCP_SOCKET socket = (TCP_SOCKET) ssl->rfd;

    uint16_t bufferSize;

    bufferSize = TCPIP_TCP_PutIsReady(socket);
    if (bufferSize == 0)
    {
        return CYASSL_CBIO_ERR_WANT_WRITE;
    }

    bufferSize = TCPIP_TCP_ArrayPut(socket, (uint8_t*) buf, (uint16_t) sz);

    return bufferSize;
}

int8_t TCPIP_TLS_CreateConnection(SSL_CONNECTION *info)
{
    // Create a new context
    info->ctx = CyaSSL_CTX_new(CyaSSLv23_client_method());
    if (info->ctx == 0)
    {
        goto TERM_0;
    }

    // hook up the send/receive callbacks
    CyaSSL_SetIORecv(info->ctx, (CallbackIORecv) & TCPIP_TLS_Receive_cb);
    CyaSSL_SetIOSend(info->ctx, (CallbackIOSend) & TCPIP_TLS_Send_cb);

    // Load the certificates
    if (CyaSSL_CTX_load_verify_buffer(info->ctx,
            caCert,
            caCert_len,
            SSL_FILETYPE_PEM) != SSL_SUCCESS)
    {
        // Couldn't load the certificates
        //SYS_CONSOLE_MESSAGE("Something went wrong loading the certificates\r\n");
        goto TERM_1;
    }

    // Turn off verification, because SNTP is usually blocked by a firewall
    CyaSSL_CTX_set_verify(info->ctx, SSL_VERIFY_NONE, 0); //SSL_VERIFY_PEER, 0); //SSL_VERIFY_NONE, 0);

    //Create a new SSL structure
    info->ssl = CyaSSL_new(info->ctx);
    if (info->ssl == 0)
    {
        goto TERM_1;
    }

    //SEt the file descriptors
    if (CyaSSL_set_fd(info->ssl, info->socket) != SSL_SUCCESS)
    {
        // Could not set the file descriptor
        goto TERM_2;
    }

    return CYASSL_GLUE_TCP_OPEN;

TERM_2:
    CyaSSL_free(info->ssl);

TERM_1:
    CyaSSL_CTX_free(info->ctx);
    info->ctx = 0;
TERM_0:
    return CYASSL_GLUE_ERROR;
}

void APP_YahooTasks()
{
    unsigned char i;
    static uint32_t Timer, YahooPollTime, UpDatePeriod = 0;
    static TCP_SOCKET MySocket = INVALID_SOCKET;
    static unsigned char needActivation = false, isCity = true;
    unsigned char buffer[600];

    static SSL_CONNECTION mySSL;

    static uint32_t yahooTimeOut;

    static IPV4_ADDR addr;

    switch (yahooClientState) {
        case SM_YAHOO_HOME:
        {

            TCPIP_DNS_RESULT result;

            netH = TCPIP_STACK_IndexToNet(0);
            if (!TCPIP_DHCP_IsBound(netH))
            {
                return; // wait some more
            }

            result = TCPIP_DNS_Resolve(WEBSITE, DNS_TYPE_A);
            if (result != DNS_RES_OK)
            {
                //SYS_CONSOLE_MESSAGE("Error in DNS aborting\r\n");

                break;
            }
            //SYS_CONSOLE_MESSAGE("Starting DNS Lookup\r\n");
            yahooClientState = SM_YAHOO_WAIT_ON_DNS;


        }

            break;

        case SM_YAHOO_WAIT_ON_DNS:
        {
            TCPIP_DNS_RESULT result = TCPIP_DNS_IsResolved(WEBSITE, &addr);
            switch (result) {
                case DNS_RES_OK:
                {
                    mySSL.socket = TCPIP_TCP_ClientOpen(IP_ADDRESS_TYPE_IPV4,
                            443,
                            (IP_MULTI_ADDRESS*) & addr);
                    if (mySSL.socket == INVALID_SOCKET)
                    {
                        //SYS_CONSOLE_MESSAGE("Could not start connection\r\n");
                        yahooClientState--;
                        ;
                    }
                    //SYS_CONSOLE_MESSAGE("Starting connection\r\n");

                    Timer = SYS_TMR_TickCountGet();
                    yahooClientState = SM_YAHOO_IS_CONNECTED;
                    break;

                }
                case DNS_RES_PENDING:
                {
                    // Still waiting
                    if (SYS_TMR_TickCountGet() >= Timer)
                    {

                        Timer = SYS_TMR_TickCountGet() + SYS_TMR_TickCounterFrequencyGet();
                        //SYS_CONSOLE_MESSAGE(".");
                    }
                    break;

                }
                case DNS_RES_SERVER_TMO:
                case DNS_RES_NO_ENTRY:
                default:
                {
                    // Some sort of error, already reported
                    yahooClientState--;
                    //SYS_CONSOLE_MESSAGE("ReStarting DNS Lookup\r\n");
                    break;
                }

            }
            break;
        }

        case SM_YAHOO_IS_CONNECTED:
        {
            if (!TCPIP_TCP_IsConnected(mySSL.socket))
            {
                if (SYS_TMR_TickCountGet() > Timer + (5 * SYS_TMR_TickCounterFrequencyGet()))
                {
                    TCPIP_TCP_Close(mySSL.socket);
                    mySSL.socket = INVALID_SOCKET;
                    yahooClientState = SM_YAHOO_HOME;


                }
                break;
            }
            if (TCPIP_TLS_CreateConnection(&mySSL) != CYASSL_GLUE_TCP_OPEN)
            {
                TCPIP_TLS_CloseConnection(&mySSL);
                yahooClientState = SM_YAHOO_HOME;
                break;
            }
            yahooClientState = SM_YAHOO_IS_SSL_CONNECTED;

        }
        case SM_YAHOO_IS_SSL_CONNECTED:
        {
            if (!TCPIP_TCP_IsConnected(mySSL.socket))
            {
                TCPIP_TLS_CloseConnection(&mySSL);
                yahooClientState = SM_YAHOO_HOME;
                break;
            }

            int result = CyaSSL_connect(mySSL.ssl);
            if (result == SSL_SUCCESS)
            {
                yahooClientState = SM_YAHOO_GET_CLOUD;
                break;
            } else if ((CyaSSL_get_error(mySSL.ssl, result) == SSL_ERROR_WANT_READ) ||
                    (CyaSSL_get_error(mySSL.ssl, result) == SSL_ERROR_WANT_READ))
                break;
            else
            {
                int err = CyaSSL_get_error(mySSL.ssl, result);
                TCPIP_TLS_CloseConnection(&mySSL);
                yahooClientState = SM_YAHOO_HOME;
            }


            break;
        }
        case SM_YAHOO_GET_CLOUD:
        {
            //char buffer[500];
            if (!TCPIP_TCP_IsConnected(mySSL.socket))
            {
                TCPIP_TLS_CloseConnection(&mySSL);
                yahooClientState = SM_YAHOO_HOME;
                break;
            }
            if (TCPIP_TCP_PutIsReady(mySSL.socket) == 0)
            {
                break;
            }
            sprintf(buffer, "GET /forecastrss?w=%s&u=f HTTP/1.1\r\n"
                    "Host: %s\r\n"
                    "Accept: text/xml\r\n"
                    "Connection : close\r\n\r\n",
                    woeid, WEBSITE);
            //SYS_CONSOLE_PRINT("\r\n\r\nSending data %s\r\n", buffer,woeid);
            if (CyaSSL_write(mySSL.ssl, buffer, strlen(buffer)) != strlen(buffer))
            {

            }

            yahooClientState = SM_YAHOO_GET_CLOUD_RESPONSE_CITY;

        }
            break;

        case SM_YAHOO_GET_CLOUD_RESPONSE_CITY:
        {
            //char buffer[180];
            memset(buffer, 0, sizeof (buffer));
            if (!TCPIP_TCP_IsConnected(mySSL.socket))
            {
                //SYS_CONSOLE_MESSAGE("\r\nConnection Closed by SERVER\r\n\r\n\r\n\r\n");
                TCPIP_TLS_CloseConnection(&mySSL);
                yahooClientState = SM_YAHOO_WAIT;
                YahooPollTime = SYS_TMR_TickCountGet();
                break;
            }

            uint16_t lenA, lenB, w;

            int ret = CyaSSL_peek(mySSL.ssl, buffer, sizeof (buffer)-1);
            if (ret < 0)
            {
                int error = CyaSSL_get_error(mySSL.ssl, ret);
                if ((error == SSL_ERROR_WANT_READ) ||
                        (error == SSL_ERROR_WANT_WRITE))
                {
                    //This is fine go along
                }


            } else
            {
                // Found it, take a peek at the value of city
                char *ptr;
                ptr = strstr(buffer, "city=\"");
                if (ptr)
                {

                    ptr += sizeof ("city=\"") -1;
                    memset(city, 0, sizeof (city));
                    
                    //Remove end double quote...  city="Phoenix"
                    for (i = 0; i<sizeof (city); i++)
                    {
                        if ((*ptr != '\"') 
                            && ptr < (char*)&buffer[ret]) //Ensure ptr is not beyond buffer last value
                            city[i] = *ptr++;
                    }
                    //if we did not find the closing double quote,  we only receive
                    //part of a packet.  We could get the rest in the next packet,
                    //but for the sake of this demo,  we will just disregard this packet
                    //and close the socket
                    if (*ptr != '\"'){
                        yahooClientState = SM_YAHOO_WAIT;
                        break;
                    }

                    
                    //Now find the value for temp="xx"
                    yahooClientState = SM_YAHOO_GET_CLOUD_RESPONSE_TEMPERATURE; //SM_YAHOO_GET_CLOUD_RESPONSE_CODE;
                } else
                {//remove as much as possible
                    CyaSSL_read(mySSL.ssl, buffer, ret);
                    break;

                }
            }

        }
            break;

        case SM_YAHOO_GET_CLOUD_RESPONSE_TEMPERATURE:
                {
            //char buffer[180];
            memset(buffer, 0, sizeof (buffer));
            if (!TCPIP_TCP_IsConnected(mySSL.socket))
            {
                //SYS_CONSOLE_MESSAGE("\r\nConnection Closed by SERVER\r\n\r\n\r\n\r\n");
                TCPIP_TLS_CloseConnection(&mySSL);
                yahooClientState = SM_YAHOO_WAIT;
                YahooPollTime = SYS_TMR_TickCountGet();
                break;
            }

            uint16_t lenA, lenB, w;

            int ret = CyaSSL_peek(mySSL.ssl, buffer, sizeof (buffer)-1);
            if (ret < 0)
            {
                int error = CyaSSL_get_error(mySSL.ssl, ret);
                if ((error == SSL_ERROR_WANT_READ) ||
                        (error == SSL_ERROR_WANT_WRITE))
                {
                    //This is fine go along
                }


            } else
            {
                // Found it, take a peek at the value of city
                char *ptr;
                ptr = strstr(buffer, "temp=\"");
                if (ptr)
                {

                    ptr += sizeof ("temp=\"") -1;
                    
                    memset(cityTemperature, 0, sizeof (cityTemperature));
                    //Remove end double quote...  temp="75"
                    for (i = 0; i<sizeof (cityTemperature); i++)
                    {
                        if ((*ptr != '\"') 
                            && ptr < (char*)&buffer[ret]) //Ensure ptr is not beyond buffer last value
                            cityTemperature[i] = *ptr++;

                    }
                    
                    if (*ptr != '\"')
                    {
                        yahooClientState = SM_YAHOO_WAIT;
                        break;
                    }

                    sprintf(myCDCBuffer,"It is presently %s F in %s\r\n",cityTemperature,city);
                    SYS_CONSOLE_MESSAGE (myCDCBuffer);
                    
                    yahooClientState = SM_YAHOO_WAIT; //SM_YAHOO_GET_CLOUD_RESPONSE_CODE;
                    
                } else
                {//remove as much as possible
                    CyaSSL_read(mySSL.ssl, buffer, ret);
                    break;

                }
            }

        }
            break;

        case SM_YAHOO_WAIT:
        {
            uint32_t temp = SYS_TMR_TickCountGet();
            if (SYS_TMR_TickCountGet() >= YahooPollTime + (10*SYS_TMR_TickCounterFrequencyGet()))
            {
                YahooPollTime = SYS_TMR_TickCountGet();
                yahooClientState = SM_YAHOO_HOME;
            }
            if (mySSL.socket != INVALID_SOCKET)
            {
                TCPIP_TLS_CloseConnection(&mySSL);

            }
        }
            break;

        case SM_YAHOO_DONE:


            break;

        default:
            break;
    }
}




