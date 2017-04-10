///*******************************************************************************
//  MPLAB Harmony Application Source File
//  
//  Company:
//    Microchip Technology Inc.
//  
//  File Name:
//    app.c
//
//  Summary:
//    This file contains the source code for the MPLAB Harmony application.
//
//  Description:
//    This file contains the source code for the MPLAB Harmony application.  It 
//    implements the logic of the application's state machine and it may call 
//    API routines of other MPLAB Harmony modules in the system, such as drivers,
//    system services, and middleware.  However, it does not call any of the
//    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
//    the modules in the system or make any assumptions about when those functions
//    are called.  That is the responsibility of the configuration-specific system
//    files.
// *******************************************************************************/
//
//// DOM-IGNORE-BEGIN
///*******************************************************************************
//Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.
//
//Microchip licenses to you the right to use, modify, copy and distribute
//Software only when embedded on a Microchip microcontroller or digital signal
//controller that is integrated into your product or third party product
//(pursuant to the sublicense terms in the accompanying license agreement).
//
//You should refer to the license agreement accompanying this Software for
//additional information regarding your rights and obligations.
//
//SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
//EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
//MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
//IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
//CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
//OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
//INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
//CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
//SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
//(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
// *******************************************************************************/
//// DOM-IGNORE-END
//
//
//// *****************************************************************************
//// *****************************************************************************
//// Section: Included Files 
//// *****************************************************************************
//// *****************************************************************************
//
#include "app.h"
//
//// *****************************************************************************
//// *****************************************************************************
//// Section: Global Data Definitions
//// *****************************************************************************
//// *****************************************************************************
extern const GFX_RESOURCE_HDR flash_logo_logo0002;
extern const GFX_RESOURCE_HDR flash_logo_logo0003;
extern const GFX_RESOURCE_HDR flash_logo_logo0004;
extern const GFX_RESOURCE_HDR flash_logo_logo0005;
extern const GFX_RESOURCE_HDR flash_logo_logo0006;
extern const GFX_RESOURCE_HDR flash_logo_logo0007;
extern const GFX_RESOURCE_HDR flash_logo_logo0008;
extern const GFX_RESOURCE_HDR flash_logo_logo0009;
extern const GFX_RESOURCE_HDR flash_logo_logo0010;
extern const GFX_RESOURCE_HDR flash_logo_logo0011;
extern const GFX_RESOURCE_HDR flash_logo_logo0012;
extern const GFX_RESOURCE_HDR flash_logo_logo0013;
extern const GFX_RESOURCE_HDR flash_logo_logo0014;
extern const GFX_RESOURCE_HDR flash_logo_logo0015;
extern const GFX_RESOURCE_HDR flash_logo_logo0016;
extern const GFX_RESOURCE_HDR flash_logo_logo0017;
extern const GFX_RESOURCE_HDR flash_logo_logo0018;
extern const GFX_RESOURCE_HDR flash_logo_logo0019;
extern const GFX_RESOURCE_HDR flash_logo_logo0020;
extern const GFX_RESOURCE_HDR flash_logo_logo0021;
extern const GFX_RESOURCE_HDR flash_logo_logo0022;
extern const GFX_RESOURCE_HDR flash_logo_logo0023;
extern const GFX_RESOURCE_HDR flash_logo_logo0024;
extern const GFX_RESOURCE_HDR flash_logo_logo0025;
extern const GFX_RESOURCE_HDR flash_logo_logo0026;
extern const GFX_RESOURCE_HDR flash_logo_logo0027;
extern const GFX_RESOURCE_HDR flash_logo_logo0028;
extern const GFX_RESOURCE_HDR flash_logo_logo0029;
extern const GFX_RESOURCE_HDR flash_logo_logo0030;
extern const GFX_RESOURCE_HDR flash_logo_logo0031;
extern const GFX_RESOURCE_HDR flash_logo_logo0032;



GFX_RESOURCE_HDR flashfile_arr[32];
extern APP_DATA appData;
//
//// *****************************************************************************
///* Application Data
//
//  Summary:
//    Holds application data
//
//  Description:
//    This structure holds the application's data.
//
//  Remarks:
//    This structure should be initialized by the APP_Initialize function.
//    
//    Application strings and buffers are be defined outside this structure.
//*/
//
APP_FLASHMENU_DATA appData_flashmenu;
///*******************************************************************************
//  Function:
//    void APP_Initialize ( void )
//
//  Remarks:
//    See prototype in app.h.
// */
//
void APP_flashmenu_Initialize ( void )
{
    /* Place the App state machine in its initial state. */

    appData_flashmenu.states_flashmenu = FLASH_INIT;
    appData_flashmenu.angle_index = 0;
    appData_flashmenu.angle_max_index = 30;
    appData_flashmenu.angle_increment = 1;;
    appData_flashmenu.flash_speed = 160; //ms
    appData_flashmenu.wallpaper_mode = 0;

    if(appData_flashmenu.sysTmrHandle_flash != SYS_TMR_HANDLE_INVALID)
    {
        SYS_TMR_ObjectDelete(appData_flashmenu.sysTmrHandle_flash);
    }
    
    flashfile_arr[0]=flash_logo_logo0002;
    flashfile_arr[1]=flash_logo_logo0003;
    flashfile_arr[2]=flash_logo_logo0004;
    flashfile_arr[3]=flash_logo_logo0005;
    flashfile_arr[4]=flash_logo_logo0006;
    flashfile_arr[5]=flash_logo_logo0007;
    flashfile_arr[6]=flash_logo_logo0008;
    flashfile_arr[7]=flash_logo_logo0009;
    flashfile_arr[8]=flash_logo_logo0010;
    flashfile_arr[9]=flash_logo_logo0011;
    flashfile_arr[10]=flash_logo_logo0012;
    flashfile_arr[11]=flash_logo_logo0013;
    flashfile_arr[12]=flash_logo_logo0014;
    flashfile_arr[13]=flash_logo_logo0015;
    flashfile_arr[14]=flash_logo_logo0016;
    flashfile_arr[15]=flash_logo_logo0017;
    flashfile_arr[16]=flash_logo_logo0018;
    flashfile_arr[17]=flash_logo_logo0019;
    flashfile_arr[18]=flash_logo_logo0020;
    flashfile_arr[19]=flash_logo_logo0021;
    flashfile_arr[20]=flash_logo_logo0022;
    flashfile_arr[21]=flash_logo_logo0023;
    flashfile_arr[22]=flash_logo_logo0024;
    flashfile_arr[23]=flash_logo_logo0025;
    flashfile_arr[24]=flash_logo_logo0026;
    flashfile_arr[25]=flash_logo_logo0027;
    flashfile_arr[26]=flash_logo_logo0028;
    flashfile_arr[27]=flash_logo_logo0029;
    flashfile_arr[28]=flash_logo_logo0030;
    flashfile_arr[29]=flash_logo_logo0031;
    flashfile_arr[30]=flash_logo_logo0032;

}

void flash_image_cycle(uint8_t file_index)
{
        
    if(appData_flashmenu.wallpaper_mode == 0)
    {
        GFX_GOL_PictureControlImageSet(hgcObj.pflash_picObj, &flashfile_arr[file_index]);
        GFX_GOL_PictureControlPartialSet(hgcObj.pflash_picObj, 0, 0, 
                        (hgcObj.pflash_picObj->imageRight - hgcObj.pflash_picObj->imageLeft), 
                        (hgcObj.pflash_picObj->imageBottom - hgcObj.pflash_picObj->imageTop));
        GFX_GOL_ObjectStateSet(hgcObj.pflash_picObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);

        
        if(appData_flashmenu.angle_increment == 1)
        {
        
            file_index++;
            appData_flashmenu.angle_index = file_index;
        }
        else if(appData_flashmenu.angle_increment == 0)
        {
            file_index--;
            appData_flashmenu.angle_index = file_index;
        }
        
        
        
       
    }
    else if(appData_flashmenu.wallpaper_mode == 1)
    {
         GFX_GOL_PictureControlImageSet(hgcObj.pflash_picObj, &flashfile_arr[file_index]);
        GFX_GOL_PictureControlPartialSet(hgcObj.pflash_picObj, 0, 0, 
                        (hgcObj.pflash_picObj->imageRight - hgcObj.pflash_picObj->imageLeft), 
                        (hgcObj.pflash_picObj->imageBottom - hgcObj.pflash_picObj->imageTop));
        GFX_GOL_ObjectStateSet(hgcObj.pflash_picObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);



        if(appData_flashmenu.angle_increment == 1)
        {
        
            file_index += 5;
            appData_flashmenu.angle_index = file_index;
        }
        else if(appData_flashmenu.angle_increment == 0)
        {
            if(file_index < 4)
            {
                file_index -= 1;
            }
            else
            {
                file_index -= 4;
            }
            appData_flashmenu.angle_index = file_index;
        }
    }
        
}
    
    

void APP_flashscreen_wallpaper(void)
{
    appData_flashmenu.wallpaper_mode = 1;
    appData_flashmenu.angle_increment = 1;
    appData_flashmenu.angle_index = 2;
}
//
//
//void motion_speed(uint16_t sliderInput)
//{
//
//    appData_3Dmenu.states_3dmenu = SPEED_CHANGE;
//
//}
//
void APP_flashmenu_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData_flashmenu.states_flashmenu )
    {
        /* Application's initial state. */
        case FLASH_INIT:
        {
            
                /* Place the App state machine in its initial state. */
           
            if(hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_flash_screen)
            {
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_flashmenu.sysTmrHandle_flash = SYS_TMR_DelayMS(appData_flashmenu.flash_speed);
//                    if(appData_flashmenu.wallpaper_mode == 0)
//                    {
                        appData_flashmenu.states_flashmenu = FLASH_CYCLE;
//                    }
//                    else if(appData_flashmenu.wallpaper_mode == 1)
//                    {
//                        appData_flashmenu.states_flashmenu = FLASH_WALLPAPER;
//                    }
                
                    break;
                }
                    
                
            }
            appData_flashmenu.states_flashmenu = FLASH_INIT;
            break; 
        }
        
        case FLASH_CYCLE:
        {
            
            if (appData_flashmenu.sysTmrHandle_flash != SYS_TMR_HANDLE_INVALID
                            && SYS_TMR_DelayStatusGet(appData_flashmenu.sysTmrHandle_flash))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it

                SYS_TMR_ObjectDelete(appData_flashmenu.sysTmrHandle_flash);

                
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_flashmenu.sysTmrHandle_flash = SYS_TMR_DelayMS(appData_flashmenu.flash_speed);

                }

                flash_image_cycle(appData_flashmenu.angle_index);
                appData_flashmenu.angle_max_index = 30;
                if(appData_flashmenu.angle_index > appData_flashmenu.angle_max_index && appData_flashmenu.angle_increment == 1)
                {
                      appData_flashmenu.angle_increment =0;
                      appData_flashmenu.angle_index = 30;
//                    SYS_TMR_ObjectDelete(appData_flashmenu.sysTmrHandle_flash);
//                    appData_flashmenu.angle_index = 0;
//                    
//                    Load_mainmenu();
//                    GFX_HGC_ChangeScreen(mainmenu);
                    
                }
                if(appData_flashmenu.angle_index == 0 && appData_flashmenu.angle_increment == 0)
                {
                    appData_flashmenu.angle_index = 0;
                    appData_flashmenu.angle_increment = 1;
                    SYS_TMR_ObjectDelete(appData_flashmenu.sysTmrHandle_flash);
                    appData_flashmenu.states_flashmenu = FLASH_INIT;

                    Load_mainmenu();
                    GFX_HGC_ChangeScreen(mainmenu);
                    break;
                }
                appData_flashmenu.states_flashmenu = FLASH_CYCLE;
            }
            appData_flashmenu.states_flashmenu = FLASH_CYCLE;
            break;
        }
               
//        case FLASH_WALLPAPER:
//        {
//            if (appData_flashmenu.sysTmrHandle_flash != SYS_TMR_HANDLE_INVALID
//                            && SYS_TMR_DelayStatusGet(appData_flashmenu.sysTmrHandle_flash))
//            {
//                //When the timer is expired the SM will come into this if - at the end of the delay time
//                //We want to initiate motion here after deleting the timer and re-setting it
//
//                SYS_TMR_ObjectDelete(appData_flashmenu.sysTmrHandle_flash);
//
//                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                {
//                    appData_flashmenu.sysTmrHandle_flash = SYS_TMR_DelayMS(appData_flashmenu.flash_speed);
//
//                }
//
//                flash_image_cycle(appData_flashmenu.angle_index);
//                appData_flashmenu.angle_max_index = 30;
//                if(appData_flashmenu.angle_index > appData_flashmenu.angle_max_index && appData_flashmenu.angle_increment == 1)
//                {
//                      appData_flashmenu.angle_increment =0;
//                      appData_flashmenu.angle_index = 30;
////                    SYS_TMR_ObjectDelete(appData_flashmenu.sysTmrHandle_flash);
////                    appData_flashmenu.angle_index = 0;
////                    
////                    Load_mainmenu();
////                    GFX_HGC_ChangeScreen(mainmenu);
//                    
//                }
//                if(appData_flashmenu.angle_index ==0 && appData_flashmenu.angle_increment == 0)
//                {
//                    appData_flashmenu.angle_index == 0;
//                    appData_flashmenu.angle_increment = 1;
//                    
//                    SYS_TMR_ObjectDelete(appData_flashmenu.sysTmrHandle_flash);
//                    appData_flashmenu.states_flashmenu = FLASH_INIT;
//                    Load_mainmenu();
//                    GFX_HGC_ChangeScreen(mainmenu);
//                    break;
//                }
//
//                    
//                appData_flashmenu.states_flashmenu = FLASH_WALLPAPER;
//            }
//            appData_flashmenu.states_flashmenu = FLASH_WALLPAPER;
//            break;
//        }
        default:
        {
            break;
        }
    }
}