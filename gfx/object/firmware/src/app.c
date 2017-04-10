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
#include "gfx/gfx_types_font.h"

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

METER_RUN_STATE meterState;

static uint32_t tick = 0; // keeps previous value of tick

GFX_XCHAR  initText[41] = "Hello ";

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

void APP_ResetVotesPolled() 
{
    appData.totalVotes = 10;
    appData.votesA = 1;
    appData.votesB = 4;
    appData.votesC = 5;
}

void APP_resetMeterValues()
{
    meterState = METER_RUN_STATE_IDLE;       
}


void APP_doScreenTasks(void){
    if (tick < 10000) 
    {
        tick++;
        return;
    } else 
    {
        tick = 0;
    }
        
    uint16_t value;
    bool valueChanged = false;

    value = GFX_GOL_MeterValueGet(hgcObj.pMeter1Obj); // get current value
    
    if (value  == MINMETERVALUE && meterState == METER_RUN_STATE_DEACCELERATE) 
    {
        meterState = METER_RUN_STATE_IDLE;
        GFX_GOL_ButtonTextSet(hgcObj.pButton12Obj, (GFX_XCHAR *) "Accelerate"); // set text to decelerate
        GFX_GOL_ObjectStateSet(hgcObj.pButton12Obj, GFX_GOL_BUTTON_DRAW_STATE);
    } 
    else if (value == MAXMETERVALUE && meterState == METER_RUN_STATE_ACCELERATE) 
    { 
        meterState = METER_RUN_STATE_IDLE;
        GFX_GOL_ButtonTextSet(hgcObj.pButton12Obj, (GFX_XCHAR *) "Deaccelerate"); // set text to accelerate
        GFX_GOL_ObjectStateSet(hgcObj.pButton12Obj, GFX_GOL_BUTTON_DRAW_STATE);
    } 
    else 
    {
        if (meterState == METER_RUN_STATE_ACCELERATE) 
        {
            value += 1; // is pressed
            valueChanged = true;
            
        }

        if (meterState == METER_RUN_STATE_DEACCELERATE)
        {
            value -= 1;
            valueChanged = true;
        }
    }
    
    if (valueChanged == true) 
    {
        GFX_GOL_MeterValueSet(hgcObj.pMeter1Obj, value);
        GFX_GOL_MeterValueSet(hgcObj.pMeter2Obj, value);
        GFX_GOL_DigitalMeterValueSet(hgcObj.pDigitalMeter1Obj, value);
    
        GFX_GOL_ObjectStateSet(hgcObj.pMeter1Obj, GFX_GOL_METER_UPDATE_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pMeter2Obj, GFX_GOL_METER_UPDATE_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pDigitalMeter1Obj, GFX_GOL_DIGITALMETER_UPDATE_STATE);    
    }
        
}

void changeMeterState() {
    if (meterState == METER_RUN_STATE_IDLE) {
        uint16_t value = GFX_GOL_MeterValueGet(hgcObj.pMeter1Obj); // get current value
        if (value == MINMETERVALUE) {
            meterState = METER_RUN_STATE_ACCELERATE;
        } 
        if (value == MAXMETERVALUE) {
            meterState = METER_RUN_STATE_DEACCELERATE;
        }
    }
}
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
    
    appData.hAlign = GFX_ALIGN_HCENTER;
    appData.vAlign = GFX_ALIGN_VCENTER;

    appData.tempText = (GFX_XCHAR*)&initText[0];
    
    APP_ResetVotesPolled();
    APP_resetMeterValues();
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{
    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            
            if (hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_MeterScreen)
            {
                APP_doScreenTasks();
            }

            break;
        }

        /* TODO: implement your application state machine.*/

        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
