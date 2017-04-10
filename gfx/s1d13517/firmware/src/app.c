/*******************************************************************************
  MPLAB Harmony Application Source File
  
  Company:
    Microchip Technology Inc.
  
  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It 
    implements the logic of the application's state machine and it may call 
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
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

#include "gfx_schemes.h"
#include "gfx_strings.h"
#include "gfx_screens.h"
#include "gol_ids.h"
#include "driver/spi/drv_spi.h"
#include "system/touch/sys_touch.h"

#define GFX_DEFAULT_FOREGROUND_PAGE	GFX_PAGE9
#define GFX_DEFAULT_BACKGROUND_PAGE 	GFX_PAGE10
#define GFX_DEFAULT_DESTINATION_PAGE 	GFX_PAGE4

int16_t tick = 0;

/////////////////////////////////////////////////////////////////////////////
//                            LOCAL PROTOTYPES
/////////////////////////////////////////////////////////////////////////////
void  TickInit(void);
bool GFX_GOL_DrawCallback (void);
bool GFX_GOL_MessageCallback (GFX_GOL_TRANSLATED_ACTION translatedMsg,
                              GFX_GOL_OBJ_HEADER *pObj,
                              GFX_GOL_MESSAGE * pMsg);

extern const GFX_GOL_OBJ_SCHEME GOLSchemeDefault;

GFX_GOL_OBJ_SCHEME *GFX_GOL_SchemeCreate(void)
{
    GFX_GOL_OBJ_SCHEME  *pTemp;

    pTemp = (GFX_GOL_OBJ_SCHEME *)GFX_malloc(sizeof(GFX_GOL_OBJ_SCHEME));

    if(pTemp != NULL)
    {
        memcpy(pTemp, &GOLSchemeDefault, sizeof(GFX_GOL_OBJ_SCHEME));
    }

    return (pTemp);
}

/////////////////////////////////////////////////////////////////////////////
//                       GLOBAL VARIABLES FOR DEMO
/////////////////////////////////////////////////////////////////////////////
SCREEN_STATES   screenState = CREATE_BACKGROUND;			// current state of main demo state machine

/////////////////////////////////////////////////////////////////////////////


// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.
    
    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

SYS_MSG_INSTANCE iSysMsg = SYS_MSG_0;
SYS_OBJ_HANDLE hSysMsg, hMsgType, hMailbox;

SYS_MSG_INIT sSysMsgInit =
{
    .nMaxMsgsDelivered  = SYS_MSG_MAX_MSGS_DELIVERED,
    .nMessagePriorities = SYS_MSG_MAX_PRIORITY+1,
};

SYS_MODULE_OBJ   oSpiObject;

DRV_SPI_INIT     spiInit =
{
    .moduleInit.value   = SYS_MODULE_POWER_RUN_FULL,
    .spiId              = SPI_ID_2,
    .spiMode            = DRV_SPI_MODE_MASTER,
    .taskMode           = DRV_SPI_TASK_MODE_POLLED,
    .numTrfsSmPolled    = 0,
    .jobQueueReserveSize = 10,
    .queueSize           = 20,
    .spiProtocolType    = DRV_SPI_PROTOCOL_TYPE_STANDARD,
    .commWidth          = SPI_COMMUNICATION_WIDTH_8BITS,
    .baudRate           = 1,
    .bufferType         = DRV_SPI_BUFFER_TYPE_STANDARD,
    .clockMode          = DRV_SPI_CLOCK_MODE_IDLE_LOW_EDGE_FALL,
    .inputSamplePhase   = SPI_INPUT_SAMPLING_PHASE_AT_END,
    .txInterruptSource  = INT_SOURCE_SPI_2_TRANSMIT,
    .rxInterruptSource  = INT_SOURCE_SPI_2_RECEIVE,
    .errInterruptSource = INT_SOURCE_SPI_2_ERROR
};

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary local functions.
*/

void            TouchMessageCallback(SYS_MSG_OBJECT *pMsg);

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;
    
    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
    hMsgType = SYS_MSG_TypeCreate(SYS_MSG_0, TYPE_TOUCHSCREEN , 0);
    hMailbox = SYS_MSG_MailboxOpen( iSysMsg, (SYS_MSG_RECEIVE_CALLBACK)&TouchMessageCallback );
    SYS_MSG_MailboxMsgAdd(hMailbox, hMsgType);

    appData.samplePoints.touchCalUlx = TOUCHCAL_ULX;
    appData.samplePoints.touchCalUly = TOUCHCAL_ULY;

    appData.samplePoints.touchCalUrx = TOUCHCAL_URX;
    appData.samplePoints.touchCalUry = TOUCHCAL_URY;

    appData.samplePoints.touchCalLrx = TOUCHCAL_LRX;
    appData.samplePoints.touchCalLry = TOUCHCAL_LRY;

    appData.samplePoints.touchCalLlx = TOUCHCAL_LLX;
    appData.samplePoints.touchCalLly = TOUCHCAL_LLY;

}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{

    tick++;

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            if ( GFX_Status (sysObj.gfxObject0) == SYS_STATUS_READY )
                appData.state = APP_STATE_TOUCH_INIT;

            break;

        case APP_STATE_TOUCH_INIT:
            SYS_TOUCH_Open(SYS_TOUCH_INDEX_0);
            SYS_TOUCH_CalibrationSet(SYS_TOUCH_INDEX_0, &appData.samplePoints);
            appData.state = APP_STATE_GFX_INIT;
            break;

        case APP_STATE_GFX_INIT:

            GFX_GOL_MessageCallbackSet(GFX_INDEX_0, &GFX_GOL_MessageCallback);
            GFX_GOL_DrawCallbackSet(GFX_INDEX_0, &GFX_GOL_DrawCallback);

            while(GFX_PageSet(GFX_INDEX_0, BACKGROUND_PAGE, GFX_DEFAULT_BACKGROUND_PAGE) == GFX_STATUS_FAILURE);
            while(GFX_PageSet(GFX_INDEX_0, TRANSITION_PAGE, GFX_PAGE5) == GFX_STATUS_FAILURE);

            GFX_SchemeInit();

            GFX_DoubleBufferEnable(GFX_INDEX_0);

            appData.state = APP_STATE_DONE;
            break;
            
        case APP_STATE_DONE:
            break;

        }

    }
}
 
void TouchMessageCallback(SYS_MSG_OBJECT *pMsg)
{
    static GFX_GOL_MESSAGE gMsg;

    gMsg.type = pMsg->nMessageTypeID;
    gMsg.uiEvent = pMsg->param0;
    gMsg.param1 = pMsg->param1;
    gMsg.param2 = pMsg->param2;

    GFX_GOL_ObjectMessage(GFX_INDEX_0, &gMsg);
}

void GFX_TMR_DelayMS ( unsigned int delayMs )
{
    if(delayMs)
    {
        uint32_t sysClk = SYS_CLK_FREQ;
        uint32_t t0;
        t0 = _CP0_GET_COUNT();
        while (_CP0_GET_COUNT() - t0 < (sysClk/2000)*delayMs);
    }
}


/*******************************************************************************
 End of File
 */

