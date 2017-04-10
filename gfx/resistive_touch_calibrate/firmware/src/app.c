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
Copyright (c) 2016 released Microchip Technology Inc.  All rights reserved.

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

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

/* Calibration Inset
 defines  the  expected position of the calibration points, inset 
 from the perimeter of the touch sensor?s active area, by a percentage
 of the full scale dimension of the display area
 */
#define CAL_X_INSET    (48) //5% of Horizontal Width
#define CAL_Y_INSET    (27) //5% of Veritical Height

/* 
 Diameter of the touch target to draw
 */
#define TOUCH_DIAMETER	10

/*
 User start calibration input button
 */
#if defined (__PIC32MX__)
#define CALIBRATE_SWITCH BSP_SWITCH_1
#define CALIBRATE_SWITCH_PORT PORT_CHANNEL_D
#else
#define CALIBRATE_SWITCH BSP_SWITCH_SW100
#define CALIBRATE_SWITCH_PORT PORT_CHANNEL_D
#endif

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

void AR1021_FirstCalibrationPrompt(void);
void AR1021_SecondCalibrationPrompt(void);
void AR1021_ThirdCalibrationPrompt(void);
void AR1021_FourthCalibrationPrompt(void);
void AR1021_CalibrationComplete(void);
        
const DRV_TOUCH_AR1021_CALIBRATION_PROMPT_CALLBACK ar1021PromptCallbacks =
{
    .firstPromptCallback        = AR1021_FirstCalibrationPrompt,
    .secondPromptCallback       = AR1021_SecondCalibrationPrompt,
    .thirdPromptCallback        = AR1021_ThirdCalibrationPrompt,
    .fourthPromptCallback       = AR1021_FourthCalibrationPrompt,
    .completeCallback           = AR1021_CalibrationComplete,
};

/* Four point touch target enumerations */
typedef enum
{

    TOUCH_TARGET_ONE = 0,
    TOUCH_TARGET_TWO,
    TOUCH_TARGET_THREE,
    TOUCH_TARGET_FOUR,
    TOUCH_TARGETS,

} TOUCH_TARGET;

/* Array of touch targets */
uint16_t    dx[TOUCH_TARGETS], dy[TOUCH_TARGETS];

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

void AR1021_FirstCalibrationPrompt(void)
{
    /* prompt user to touch first calibration point */
    GFX_ColorSet(GFX_INDEX_0, BRIGHTRED);
    while((GFX_CircleFillDraw(GFX_INDEX_0, dx[TOUCH_TARGET_ONE], dy[TOUCH_TARGET_ONE], TOUCH_DIAMETER-3)) == GFX_STATUS_FAILURE);

}

void AR1021_SecondCalibrationPrompt(void)
{
    /* show first calibration point successful */
    GFX_ColorSet(GFX_INDEX_0, GREEN);
    while((GFX_CircleFillDraw(GFX_INDEX_0, dx[TOUCH_TARGET_ONE], dy[TOUCH_TARGET_ONE], TOUCH_DIAMETER-3)) == GFX_STATUS_FAILURE);
    
    /* prompt user to touch second calibration point */
    GFX_ColorSet(GFX_INDEX_0, BRIGHTRED);
    while((GFX_CircleFillDraw(GFX_INDEX_0, dx[TOUCH_TARGET_TWO], dy[TOUCH_TARGET_TWO], TOUCH_DIAMETER-3)) == GFX_STATUS_FAILURE);   
}

void AR1021_ThirdCalibrationPrompt(void)
{
    /* show second calibration point successful */
    GFX_ColorSet(GFX_INDEX_0, GREEN);
    while((GFX_CircleFillDraw(GFX_INDEX_0, dx[TOUCH_TARGET_TWO], dy[TOUCH_TARGET_TWO], TOUCH_DIAMETER-3)) == GFX_STATUS_FAILURE); 
    
    /* prompt user to touch third calibration point */
    GFX_ColorSet(GFX_INDEX_0, BRIGHTRED);
    while((GFX_CircleFillDraw(GFX_INDEX_0, dx[TOUCH_TARGET_THREE], dy[TOUCH_TARGET_THREE], TOUCH_DIAMETER-3)) == GFX_STATUS_FAILURE);
}

void AR1021_FourthCalibrationPrompt(void)
{
    /* show third calibration point successful */
    GFX_ColorSet(GFX_INDEX_0, GREEN);
    while((GFX_CircleFillDraw(GFX_INDEX_0, dx[TOUCH_TARGET_THREE], dy[TOUCH_TARGET_THREE], TOUCH_DIAMETER-3)) == GFX_STATUS_FAILURE);
    
    /* prompt user to touch fourth calibration point */
    GFX_ColorSet(GFX_INDEX_0, BRIGHTRED);
    while((GFX_CircleFillDraw(GFX_INDEX_0, dx[TOUCH_TARGET_FOUR], dy[TOUCH_TARGET_FOUR], TOUCH_DIAMETER-3)) == GFX_STATUS_FAILURE);
}

void AR1021_CalibrationComplete(void)
{
    /* show fourth calibration point successful */
    GFX_ColorSet(GFX_INDEX_0, GREEN);
    while((GFX_CircleFillDraw(GFX_INDEX_0, dx[TOUCH_TARGET_FOUR], dy[TOUCH_TARGET_FOUR], TOUCH_DIAMETER-3)) == GFX_STATUS_FAILURE);
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************


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
            /* make sure GFX UI library is ready - Library is used to prompt user */
            if (GFX_Status(sysObj.gfxObject0) == SYS_STATUS_READY)
            {
                /* set 4 calibration positions */
                dx[TOUCH_TARGET_ONE] = CAL_X_INSET;
                dy[TOUCH_TARGET_ONE] = CAL_Y_INSET;
                             
                dx[TOUCH_TARGET_TWO] = (GFX_MaxXGet(GFX_INDEX_0) - CAL_X_INSET);
                dy[TOUCH_TARGET_TWO] = CAL_Y_INSET;
                
                dx[TOUCH_TARGET_THREE] = (GFX_MaxXGet(GFX_INDEX_0) - CAL_X_INSET);
                dy[TOUCH_TARGET_THREE] = (GFX_MaxYGet(GFX_INDEX_0) - CAL_Y_INSET);

                dx[TOUCH_TARGET_FOUR] = CAL_X_INSET;
                dy[TOUCH_TARGET_FOUR] = (GFX_MaxYGet(GFX_INDEX_0) - CAL_Y_INSET);
    
                /* wait for user to depress switch */
                appData.state = APP_STATE_IDLE;
            }

            break;
        }
        
        /* Application's calibrate start state. */
        case APP_STATE_CALIBRATE_START:
        {  
            /* clear screen */
            GFX_ColorSet(GFX_INDEX_0, BLACK);
            while(GFX_ScreenClear(GFX_INDEX_0) == GFX_STATUS_FAILURE);
            
            /* call calibration providing prompt callbacks */
            DRV_TOUCH_AR1021_Calibrate(&ar1021PromptCallbacks);
            
            /* return to touch screen for inspection and testing */
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ButtonTest);

            appData.state = APP_STATE_IDLE;

            break;
        }
             
        /* Application's wait for calibrate state. */
        case APP_STATE_IDLE:
        {
            if (PLIB_PORTS_PinGet(PORTS_ID_0, CALIBRATE_SWITCH_PORT, CALIBRATE_SWITCH) == BSP_SWITCH_STATE_PRESSED)
            {
                /* start automatic cycling of images */
                appData.state = APP_STATE_CALIBRATE_START;
            }
        }

        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in 's state machine. */
            break;
        }
    }
}


/*******************************************************************************
 End of File
 */
