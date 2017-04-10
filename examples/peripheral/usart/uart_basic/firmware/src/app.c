/*******************************************************************************
  MPLAB Harmony Application 
  
  Company:
    Microchip Technology Inc.
  
  File Name:
    app.c

  Summary:
    Application Template

  Description:
    This file contains the application logic.
 *******************************************************************************/


// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files 
// *****************************************************************************
// *****************************************************************************

#include "app.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Variable Definitions
// *****************************************************************************
// *****************************************************************************

const char *string1 = "*** UART Interrupt-driven Application Example ***\r\n";
const char *string2 = "*** Type some characters and observe the LED turn ON ***\r\n";


/*****************************************************
 * Initialize the application data structure. All
 * application related variables are stored in this
 * data structure.
 *****************************************************/

APP_DATA appData = 
{
};
// *****************************************************************************
/* Driver objects.

  Summary:
    Contains driver objects.

  Description:
    This structure contains driver objects returned by the driver init routines
    to the application. These objects are passed to the driver tasks routines.
*/


APP_DRV_OBJECTS appDrvObject;

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Routines
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine
// *****************************************************************************
// *****************************************************************************

/******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* TODO: Initialize your application's state machine and other
     * parameters.
     */

    /* Place the App state machine in its initial state. */
    appData.state = USART_ENABLE;
    appData.InterruptFlag = false;
}


/*******************************************************************************
  Function:
    bool WriteString (void)

  Summary:
    Writes a string to the console
*/
bool WriteString(void)
{
    if(*appData.stringPointer == '\0')
    {
        return true;
    }

    /* Write a character at a time, only if transmitter is empty */
    while (PLIB_USART_TransmitterIsEmpty(USART_ID_2))
    {
        /* Send character */
        PLIB_USART_TransmitterByteSend(USART_ID_2, *appData.stringPointer);

        /* Increment to address of next character */
        appData.stringPointer++;

        if(*appData.stringPointer == '\0')
        {
            return true;
        }
    }
    return false;
}


/*******************************************************************************
  Function:
    bool PutCharacter (const char character)

  Summary:
    Sends a character to the console
*/
bool PutCharacter(const char character)
{
    /* Check if buffer is empty for a new transmission */
    if(PLIB_USART_TransmitterIsEmpty(USART_ID_2))
    {
        /* Send character */
        PLIB_USART_TransmitterByteSend(USART_ID_2, character);
        return true;
    }
    else
        return false;
}


/**********************************************************
 * Application tasks routine. This function implements the
 * application state machine.
 ***********************************************************/
void APP_Tasks ( void )
{
    /* check the application state*/
    switch ( appData.state )
    {
        case USART_ENABLE:
           
            /* Enable the UART module*/
            PLIB_USART_Enable(USART_ID_2);
            appData.stringPointer = string1;

            appData.state =  USART_TRANSMIT_FIRST_STRING;

            break;

        case USART_TRANSMIT_FIRST_STRING:
            if(true == WriteString())
            {
                appData.state = USART_TRANSMIT_SECOND_STRING;
                appData.stringPointer = string2;
            }

            break;

        case USART_TRANSMIT_SECOND_STRING:
            if(true == WriteString())
            {
                appData.state = USART_RECEIVE_DONE;
            }
            break;

        case USART_RECEIVE_DONE:
              if (appData.InterruptFlag)
              {
                  if(true == PutCharacter(appData.data))
                  {
                    BSP_LEDOn(BSP_LED_3);
                    appData.InterruptFlag = false;        
                  }
              }
            break;

        default:
            SYS_DEBUG (SYS_ERROR_FATAL,"ERROR! Invalid state\r\n");
            while (1);

    }

} 

/*******************************************************************************
 End of File
 */

