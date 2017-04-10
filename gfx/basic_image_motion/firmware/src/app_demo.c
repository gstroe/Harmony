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

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
extern const GFX_RESOURCE_HDR cyclerotation_100_1;
extern const GFX_RESOURCE_HDR cyclerotation_100_2;
extern const GFX_RESOURCE_HDR cyclerotation_100_3;
extern const GFX_RESOURCE_HDR cyclerotation_100_4;
extern const GFX_RESOURCE_HDR arrows_1;
extern const GFX_RESOURCE_HDR arrows_2;
extern const GFX_RESOURCE_HDR arrows_3;

extern mainmenu_on;
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

APP_DEMOMENU_DATA appData_demomenu;

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Demomenu_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData_demomenu.rotation_state = 0;
    appData_demomenu.rotation_on = 0; // Not pressed - no rotation
    appData_demomenu.sliderTimerValue = 120;

    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
}

void Arrows_start_stop()
{
    //No rotation
    appData_demomenu.arrows_on = !appData_demomenu.arrows_on;
    
    if(appData_demomenu.arrows_on == 0) // Rotation off
    {
        GFX_GOL_ButtonTextSet(hgcObj.pButton3Obj, "Go!");
        if(appData_demomenu.rotation_on == 0)
        {
            
            if (appData_demomenu.sysTmrHandle != SYS_TMR_HANDLE_INVALID)
            {
                SYS_TMR_ObjectDelete(appData_demomenu.sysTmrHandle);
            }
            appData_demomenu.demomenu_state = WAIT;
        }
        
        
    }
    else if(appData_demomenu.arrows_on == 1) // Rotation on
    {
        GFX_GOL_ButtonTextSet(hgcObj.pButton3Obj, "Stop");  
        if(appData_demomenu.rotation_on == 0)
        {
            if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
            {
                appData_demomenu.motionTimer = appData_demomenu.sliderTimerValue;
                appData_demomenu.sysTmrHandle = SYS_TMR_DelayMS(appData_demomenu.motionTimer);
            }
        }
        appData_demomenu.demomenu_state = MOTION;
        
    }
}
void Start_stop_cycle()
{
    //No rotation
    appData_demomenu.rotation_on = !appData_demomenu.rotation_on;
    
    if(appData_demomenu.rotation_on == 0) // Rotation off
    {
        GFX_GOL_ButtonTextSet(hgcObj.pButton1Obj, "Go!");  
        if(appData_demomenu.arrows_on == 0)
        {
            if (appData_demomenu.sysTmrHandle != SYS_TMR_HANDLE_INVALID)
            {
                SYS_TMR_ObjectDelete(appData_demomenu.sysTmrHandle);
            }
            
            appData_demomenu.demomenu_state = WAIT;
        }
    }
    else if(appData_demomenu.rotation_on == 1) // Rotation on
    {
        GFX_GOL_ButtonTextSet(hgcObj.pButton1Obj, "Stop");
        if(appData_demomenu.arrows_on == 0)
        {
            if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
            {
                appData_demomenu.motionTimer = appData_demomenu.sliderTimerValue;
                appData_demomenu.sysTmrHandle = SYS_TMR_DelayMS(appData_demomenu.motionTimer);
            }
        }
        appData_demomenu.demomenu_state = MOTION;
        
    }
    
}

void motion_speed(uint16_t sliderValue)
{

    if(sliderValue == 0)
    {appData_demomenu.sliderTimerValue = 50;}
    else
    {appData_demomenu.sliderTimerValue = sliderValue*100;}
    
    //When the timer is expired the SM will come into this if - at the end of the delay time
    //We want to initiate motion here after deleting the timer and re-setting it
    //SYS_TMR_ObjectDelete(appData.sysTmrHandle);
    
    
//    if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//    {
//        appData.motionTimer = appData.sliderTimerValue;
//        appData.sysTmrHandle = SYS_TMR_DelayMS(appData.motionTimer);
//
//    }
    appData_demomenu.speedstring[0] = (GFX_XCHAR)(0x30 + sliderValue );   
    appData_demomenu.speedstring[1] = (GFX_XCHAR)(0x0);                   
    GFX_GOL_StaticTextSet(hgcObj.ppsecondsObj, appData_demomenu.speedstring);
    GFX_GOL_ObjectStateSet(hgcObj.ppsecondsObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    
    GFX_GOL_ScrollBarPositionSet(hgcObj.pSlider1Obj, appData_demomenu.sliderTimerValue / 100);
    GFX_GOL_ObjectStateSet(hgcObj.pSlider1Obj, GFX_GOL_SCROLLBAR_DRAW_STATE); 
}

//void slower_motion(uint16_t sliderValue)
//{
//    appData.sliderTimerValue = sliderValue * 100;
//    
//     //We want to initiate motion here after deleting the timer and re-setting it
//    SYS_TMR_ObjectDelete(appData.sysTmrHandle);
//
//    
//    if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//    {
//        appData.motionTimer = appData.sliderTimerValue;
//        appData.sysTmrHandle = SYS_TMR_DelayMS(appData.motionTimer);
//
//    }
//   
//    GFX_GOL_ScrollBarPositionSet(hgcObj.pSlider1Obj, appData.sliderTimerValue / 100);
//    GFX_GOL_ObjectStateSet(hgcObj.pSlider1Obj, GFX_GOL_SCROLLBAR_DRAW_STATE); 
//}


void cycle_rotation()
{         
    int i = 0;
        if(appData_demomenu.rotation_state == 0)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pPicture2Obj, &cyclerotation_100_1);
            GFX_GOL_PictureControlPartialSet(hgcObj.pPicture2Obj, 0, 0, 
                    (hgcObj.pPicture2Obj->imageRight - hgcObj.pPicture2Obj->imageLeft), 
                    (hgcObj.pPicture2Obj->imageBottom - hgcObj.pPicture2Obj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pPicture2Obj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            appData_demomenu.rotation_state = 1;
        }
        else if(appData_demomenu.rotation_state == 1)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pPicture2Obj, &cyclerotation_100_2);
            GFX_GOL_PictureControlPartialSet(hgcObj.pPicture2Obj, 0, 0, 
                    (hgcObj.pPicture2Obj->imageRight - hgcObj.pPicture2Obj->imageLeft), 
                    (hgcObj.pPicture2Obj->imageBottom - hgcObj.pPicture2Obj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pPicture2Obj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            
            appData_demomenu.rotation_state = 2;
            i++;
            
        }
        else if(appData_demomenu.rotation_state == 2)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pPicture2Obj, &cyclerotation_100_3);
            GFX_GOL_PictureControlPartialSet(hgcObj.pPicture2Obj, 0, 0, 
                    (hgcObj.pPicture2Obj->imageRight - hgcObj.pPicture2Obj->imageLeft), 
                    (hgcObj.pPicture2Obj->imageBottom - hgcObj.pPicture2Obj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pPicture2Obj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            appData_demomenu.rotation_state = 3;
        }
        else if(appData_demomenu.rotation_state == 3)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pPicture2Obj, &cyclerotation_100_4);
            GFX_GOL_PictureControlPartialSet(hgcObj.pPicture2Obj, 0, 0, 
                    (hgcObj.pPicture2Obj->imageRight - hgcObj.pPicture2Obj->imageLeft), 
                    (hgcObj.pPicture2Obj->imageBottom - hgcObj.pPicture2Obj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pPicture2Obj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            appData_demomenu.rotation_state = 0;
        }
        else
        {
            appData_demomenu.rotation_state = 0; 
        }
   
}

void cycle_arrows()
{         
    int i = 0;
        if(appData_demomenu.arrows_state == 0)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pPicture3Obj, &arrows_1);
            GFX_GOL_PictureControlPartialSet(hgcObj.pPicture3Obj, 0, 0, 
                    (hgcObj.pPicture3Obj->imageRight - hgcObj.pPicture3Obj->imageLeft), 
                    (hgcObj.pPicture3Obj->imageBottom - hgcObj.pPicture3Obj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pPicture3Obj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            appData_demomenu.arrows_state = 1;
        }
        else if(appData_demomenu.arrows_state == 1)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pPicture3Obj, &arrows_2);
            GFX_GOL_PictureControlPartialSet(hgcObj.pPicture3Obj, 0, 0, 
                    (hgcObj.pPicture3Obj->imageRight - hgcObj.pPicture3Obj->imageLeft), 
                    (hgcObj.pPicture3Obj->imageBottom - hgcObj.pPicture3Obj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pPicture3Obj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            
            appData_demomenu.arrows_state = 2;
            i++;
            
        }
        else if(appData_demomenu.arrows_state == 2)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pPicture3Obj, &arrows_3);
            GFX_GOL_PictureControlPartialSet(hgcObj.pPicture3Obj, 0, 0, 
                    (hgcObj.pPicture3Obj->imageRight - hgcObj.pPicture3Obj->imageLeft), 
                    (hgcObj.pPicture3Obj->imageBottom - hgcObj.pPicture3Obj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pPicture3Obj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            appData_demomenu.arrows_state = 0;
        }
        
        else
        {
            appData_demomenu.arrows_state = 0; 
        }
   
}


void APP_demomenu_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData_demomenu.demomenu_state )
    {
        /* Application's initial state. */
        case INIT:
        {
            appData_demomenu.demomenu_state = WAIT;
          
                 
            break;
        }

        case MOTION:
        {
          
            if (appData_demomenu.sysTmrHandle != SYS_TMR_HANDLE_INVALID
                    && SYS_TMR_DelayStatusGet(appData_demomenu.sysTmrHandle))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it
                SYS_TMR_ObjectDelete(appData_demomenu.sysTmrHandle);
                
                //Start motion - means change the image in the picture
                if(appData_demomenu.rotation_on == 1)
                {
                    cycle_rotation();
                }

                if(appData_demomenu.arrows_on == 1)
                {
                    cycle_arrows();
                }
            
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_demomenu.motionTimer = appData_demomenu.sliderTimerValue;
                    appData_demomenu.sysTmrHandle = SYS_TMR_DelayMS(appData_demomenu.motionTimer);

                }
            }
            
            break;
        }

        /* TODO: implement your application state machine.*/
        case WAIT:
        {
            if (appData_demomenu.sysTmrHandle != SYS_TMR_HANDLE_INVALID
                    && SYS_TMR_DelayStatusGet(appData_demomenu.sysTmrHandle))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it
                SYS_TMR_ObjectDelete(appData_demomenu.sysTmrHandle);
            }

        }
        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}

void Load_main_screen(void){
    
    if (appData_demomenu.sysTmrHandle != SYS_TMR_HANDLE_INVALID
                    && SYS_TMR_DelayStatusGet(appData_demomenu.sysTmrHandle))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it
                SYS_TMR_ObjectDelete(appData_demomenu.sysTmrHandle);
            }
    appData_demomenu.rotation_state = 0;
    appData_demomenu.rotation_on = 0; // Not pressed - no rotation
    appData_demomenu.sliderTimerValue = 120;
    
    mainmenu_on = true; 
}