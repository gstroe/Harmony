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

bool mainmenu_on = true;
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
    appData.menu = APP_FLASH_SCREEN;
    APP_flashmenu_Initialize();
    
    
    if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
    {
        appData.sysTmrHandle = SYS_TMR_DelayMS(20000);

    }
    //Transparency for the rounded edge of the Home button
            GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xFF));
            
    
        
}

void Load_3D_screen(void){
    appData.menu = APP_3D_MENU;
    APP_3Dmenu_Initialize();
    
}


void Load_thermo_screen(void){
    appData.menu = APP_THERM_MENU;
    APP_thermmenu_Initialize();
    
}

void Load_mainmenu()
{
//    if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//    {
//        appData.sysTmrHandle = SYS_TMR_DelayMS(20000);
//
//    }
    if(appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID)
    {
        SYS_TMR_ObjectDelete(appData.sysTmrHandle);
    }
    appData.menu = APP_MAIN_MENU;
}

void Load_flash_screen(void)
{
    APP_flashmenu_Initialize();
    APP_flashscreen_wallpaper();
    appData.menu = APP_FLASH_SCREEN;
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{

    if(appData.menu == APP_FLASH_SCREEN)
    {
        
        APP_flashmenu_Tasks();
    }
    if(appData.menu == APP_MAIN_MENU)
    {
//        if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID
//                            && SYS_TMR_DelayStatusGet(appData.sysTmrHandle))
//        {
//                //When the timer is expired the SM will come into this if - at the end of the delay time
//                //We want to initiate motion here after deleting the timer and re-setting it
//
//                SYS_TMR_ObjectDelete(appData.sysTmrHandle);
//                
//                GFX_HGC_ChangeScreen(flash_screen);
//                
//                APP_flashmenu_Initialize();
//                APP_flashscreen_wallpaper();
//                appData.menu = APP_FLASH_SCREEN;
//                
//        }
                
        GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xFF));
        return;
    }
    
    if(appData.menu == APP_THERM_MENU)
    {
        
        APP_thermmenu_Tasks();
    }
    
    if(appData.menu == APP_3D_MENU)
    {
       
        APP_3Dmenu_Tasks();
    }
   
}

 

/*******************************************************************************
 End of File
 */

