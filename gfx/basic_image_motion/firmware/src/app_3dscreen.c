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
extern const GFX_RESOURCE_HDR mchip_logo_1;
extern const GFX_RESOURCE_HDR mchip_logo_2;
extern const GFX_RESOURCE_HDR mchip_logo_3;
extern const GFX_RESOURCE_HDR mchip_logo_4;
extern const GFX_RESOURCE_HDR mchip_logo_5;
extern const GFX_RESOURCE_HDR mchip_logo_6;
extern const GFX_RESOURCE_HDR mchip_logo_7;
extern const GFX_RESOURCE_HDR mchip_logo_8;
extern const GFX_RESOURCE_HDR mchip_logo_9;
extern const GFX_RESOURCE_HDR mchip_logo_10;
extern const GFX_RESOURCE_HDR mchip_logo_11;
extern const GFX_RESOURCE_HDR mchip_logo_12;
extern const GFX_RESOURCE_HDR mchip_logo_13;
extern const GFX_RESOURCE_HDR mchip_logo_14;
extern const GFX_RESOURCE_HDR mchip_logo_15;
extern const GFX_RESOURCE_HDR mchip_logo_16;
extern const GFX_RESOURCE_HDR mchip_logo_17;
extern const GFX_RESOURCE_HDR mchip_logo_18;
extern const GFX_RESOURCE_HDR mchip_logo_19;
extern const GFX_RESOURCE_HDR mchip_logo_20;    
extern const GFX_RESOURCE_HDR mchip_logo_21;
extern const GFX_RESOURCE_HDR mchip_logo_22;
extern const GFX_RESOURCE_HDR mchip_logo_23;   
extern const GFX_RESOURCE_HDR mchip_logo_24;
extern const GFX_RESOURCE_HDR mchip_logo_25;

extern const GFX_RESOURCE_HDR fan_1;
extern const GFX_RESOURCE_HDR fan_2;
extern const GFX_RESOURCE_HDR fan_3;
extern const GFX_RESOURCE_HDR fan_4;

GFX_RESOURCE_HDR file_arr[25];
extern APP_DATA appData;

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

APP_3DMENU_DATA appData_3Dmenu;
/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_3Dmenu_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData_3Dmenu.angle_index = 0;
    appData_3Dmenu.angle_max_index = 24;
    appData_3Dmenu.rotation_speed = 170; //ms
    appData_3Dmenu.states_3dmenu = INIT;
    appData_3Dmenu.sliderTimerValue = appData_3Dmenu.rotation_speed;
    if(appData_3Dmenu.sysTmrHandle_3D != SYS_TMR_HANDLE_INVALID)
    {
        SYS_TMR_ObjectDelete(appData_3Dmenu.sysTmrHandle_3D);
    }

    
    file_arr[0]=mchip_logo_1;
    file_arr[1]=mchip_logo_2;
    file_arr[2]=mchip_logo_3;
    file_arr[3]=mchip_logo_4;
    file_arr[4]=mchip_logo_5;
    file_arr[5]=mchip_logo_6;
    file_arr[6]=mchip_logo_7;
    file_arr[7]=mchip_logo_8;
    file_arr[8]=mchip_logo_9;
    file_arr[9]=mchip_logo_10;
    file_arr[10]=mchip_logo_11;
    file_arr[11]=mchip_logo_12;
    file_arr[12]=mchip_logo_13;
    file_arr[13]=mchip_logo_14;
    file_arr[14]=mchip_logo_15;
    file_arr[15]=mchip_logo_16;
    file_arr[16]=mchip_logo_17;
    file_arr[17]=mchip_logo_18;
    file_arr[18]=mchip_logo_19;
    file_arr[19]=mchip_logo_20;
    file_arr[20]=mchip_logo_21;
    file_arr[21]=mchip_logo_22;
    file_arr[22]=mchip_logo_23;
    file_arr[23]=mchip_logo_24;
    file_arr[24]=mchip_logo_25;
   
    
}

void icon_rotation(uint8_t file_index)
{
    
  
        GFX_GOL_PictureControlImageSet(hgcObj.ppicture3DObj, &file_arr[file_index]);
        GFX_GOL_PictureControlPartialSet(hgcObj.ppicture3DObj, 0, 0, 
                        (hgcObj.ppicture3DObj->imageRight - hgcObj.ppicture3DObj->imageLeft), 
                        (hgcObj.ppicture3DObj->imageBottom - hgcObj.ppicture3DObj->imageTop));
        GFX_GOL_ObjectStateSet(hgcObj.ppicture3DObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);


        if(file_index == appData_3Dmenu.angle_max_index)
        {
            appData_3Dmenu.angle_index = 1;
        }
        else
        {
            file_index++;
            appData_3Dmenu.angle_index = file_index;
        }
    
    
}


void motion_speed(uint16_t sliderInput)
{

    appData_3Dmenu.states_3dmenu = SPEED_CHANGE;

}

void APP_3Dmenu_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData_3Dmenu.states_3dmenu )
    {
        /* Application's initial state. */
        case INIT:
        {
                /* Place the App state machine in its initial state. */
            appData_3Dmenu.angle_index = 0;
            appData_3Dmenu.rotation_speed = 170; //ms
            
            if(hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_screen_3D)
            {
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_3Dmenu.sysTmrHandle_3D = SYS_TMR_DelayMS(appData_3Dmenu.rotation_speed);
                    appData_3Dmenu.states_3dmenu = MOTION;
                }
                    
                
            }
            break; 
        }
        
        case MOTION:
        {
            
            if (appData_3Dmenu.sysTmrHandle_3D != SYS_TMR_HANDLE_INVALID
                            && SYS_TMR_DelayStatusGet(appData_3Dmenu.sysTmrHandle_3D))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it

                SYS_TMR_ObjectDelete(appData_3Dmenu.sysTmrHandle_3D);

                appData_3Dmenu.rotation_speed = appData_3Dmenu.sliderTimerValue;
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_3Dmenu.sysTmrHandle_3D = SYS_TMR_DelayMS(appData_3Dmenu.rotation_speed);

                }

                icon_rotation(appData_3Dmenu.angle_index);

            }
            
            break;
        }
        
        case SPEED_CHANGE:
        {
            
            uint8_t sliderInput = GFX_GOL_ScrollBarPositionGet(hgcObj.pspeedSliderObj);
            if(sliderInput == 0)
            {appData_3Dmenu.sliderTimerValue = 250;}
            else if(sliderInput > 0 && sliderInput < 5)
            {appData_3Dmenu.sliderTimerValue =  250 - (sliderInput * 40);}// 
            else if(sliderInput == 5)
            {appData_3Dmenu.sliderTimerValue = 80;}
            //When the timer is expired the SM will come into this if - at the end of the delay time
            //We want to initiate motion here after deleting the timer and re-setting it
            SYS_TMR_ObjectDelete(appData_3Dmenu.sysTmrHandle_3D);


            if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
            {
                appData_3Dmenu.sysTmrHandle_3D = SYS_TMR_DelayMS(appData_3Dmenu.sliderTimerValue);

            }
            
            uint32_t rpm = ((1000/appData_3Dmenu.sliderTimerValue) * 60 )/appData_3Dmenu.angle_max_index ;
            if(sliderInput == 0)
                rpm = 9;
            appData_3Dmenu.speedstring[0] = (GFX_XCHAR)(0x30 + rpm/10 );
            appData_3Dmenu.speedstring[1] = (GFX_XCHAR)(0x30 + rpm%10);
            appData_3Dmenu.speedstring[2] = (GFX_XCHAR)(0x0);
//            appData_3Dmenu.speedstring[0] = (GFX_XCHAR)(0x30 + ((sliderInput * 40) + 50)/100 ); 
//            uint8_t temp = ((sliderInput * 40) + 50) / 10;
//            appData_3Dmenu.speedstring[1] = (GFX_XCHAR)(0x30 + temp%10);
//            appData_3Dmenu.speedstring[2] = (GFX_XCHAR)(0x30 + 0);
//            appData_3Dmenu.speedstring[3] = (GFX_XCHAR)(0x0);                   
            GFX_GOL_StaticTextSet(hgcObj.pspeedStringObj, appData_3Dmenu.speedstring);
            GFX_GOL_ObjectStateSet(hgcObj.pspeedStringObj, GFX_GOL_STATICTEXT_DRAW_STATE);

            GFX_GOL_ScrollBarPositionSet(hgcObj.pspeedSliderObj, sliderInput);
            GFX_GOL_ObjectStateSet(hgcObj.pspeedSliderObj, GFX_GOL_SCROLLBAR_DRAW_STATE);
            appData_3Dmenu.states_3dmenu = MOTION;
        }
        default:
        {
            break;
        }
    }
}