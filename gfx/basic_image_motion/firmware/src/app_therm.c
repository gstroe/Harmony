/* ************************************************************************** */
#include "app.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
extern const GFX_RESOURCE_HDR fan_1;
extern const GFX_RESOURCE_HDR fan_2;
extern const GFX_RESOURCE_HDR fan_3;
extern const GFX_RESOURCE_HDR fan_4;
extern const GFX_RESOURCE_HDR therm_1;
extern const GFX_RESOURCE_HDR green_temp_70;
extern const GFX_RESOURCE_HDR red_temp_70;
extern const GFX_RESOURCE_HDR blue_temp_70;
extern const GFX_RESOURCE_HDR orange_temp_70;
extern const GFX_RESOURCE_HDR Up_Grey_80;
extern const GFX_RESOURCE_HDR Up_Magenta_80;
extern const GFX_RESOURCE_HDR Down_Grey_80;
extern const GFX_RESOURCE_HDR Down_Magenta_80;
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

APP_THERMMENU_DATA appData_thermmenu;

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_thermmenu_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData_thermmenu.fan_on = 0;
    appData_thermmenu.fanspeed = 120; // Not pressed - no rotation
    appData_thermmenu.thermometer_state = TEMP_RED;

    appData_thermmenu.thermmenu_state = TIMER_INIT;
    appData_thermmenu.uparrow = 0;
    appData_thermmenu.downarrow = 0;
    //appData_thermmenu.temperature_timedelay = 2000;
    appData_thermmenu.fan_timedelay = 150;
    appData_thermmenu.fan_state = 1;
    appData_thermmenu.buttonGrayed = 0;
    
    if(appData_thermmenu.sysTmrHandle_fan != SYS_TMR_HANDLE_INVALID)
    {
        SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_fan);
    }
    if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
    {
        appData_thermmenu.sysTmrHandle_fan = SYS_TMR_DelayMS(appData_thermmenu.fan_timedelay);

    }
    
    

    /* TODO: Initialize your application's state machine and other
     * parameters.
     */
}

//void fan_off(void)
//{
//    
//    appData_thermmenu.fan_off_pressed =  1;
//    
//    if(appData_thermmenu.fan_on == 0) // fan is off, button press cant do anything
//    {
//        return;
//    }
//    else if(appData_thermmenu.fan_on == 1) //fan was on, so button press needs to do action
//    {
////        SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_thermometer);
////
////        if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
////        {
////            appData_thermmenu.sysTmrHandle_thermometer = SYS_TMR_DelayMS(appData_thermmenu.temperature_timedelay);
////
////        }
//       
//    
//        SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_fan);
//    }
//}


void uparrow_pressed(void)
{
    appData_thermmenu.uparrow = 1;
}

void downarrow_pressed(void)
{
    appData_thermmenu.downarrow = 1;
    
       
    
                
}


void fan_rotation(void)
{
    int i = 0;
        if(appData_thermmenu.fan_state == 1)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pfanObj, &fan_1);
            GFX_GOL_PictureControlPartialSet(hgcObj.pfanObj, 0, 0, 
                    (hgcObj.pfanObj->imageRight - hgcObj.pfanObj->imageLeft), 
                    (hgcObj.pfanObj->imageBottom - hgcObj.pfanObj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pfanObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            appData_thermmenu.fan_state = 2;
        }
        else if(appData_thermmenu.fan_state == 2)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pfanObj, &fan_2);
            GFX_GOL_PictureControlPartialSet(hgcObj.pfanObj, 0, 0, 
                    (hgcObj.pfanObj->imageRight - hgcObj.pfanObj->imageLeft), 
                    (hgcObj.pfanObj->imageBottom - hgcObj.pfanObj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pfanObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            
            appData_thermmenu.fan_state = 3;
            i++;
            
        }
        else if(appData_thermmenu.fan_state == 3)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pfanObj, &fan_3);
            GFX_GOL_PictureControlPartialSet(hgcObj.pfanObj, 0, 0, 
                    (hgcObj.pfanObj->imageRight - hgcObj.pfanObj->imageLeft), 
                    (hgcObj.pfanObj->imageBottom - hgcObj.pfanObj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pfanObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
            appData_thermmenu.fan_state = 4;
        }
        else if(appData_thermmenu.fan_state == 4)
        {
            GFX_GOL_PictureControlImageSet(hgcObj.pfanObj, &fan_4);
            GFX_GOL_PictureControlPartialSet(hgcObj.pfanObj, 0, 0, 
                    (hgcObj.pfanObj->imageRight - hgcObj.pfanObj->imageLeft), 
                    (hgcObj.pfanObj->imageBottom - hgcObj.pfanObj->imageTop));
            GFX_GOL_ObjectStateSet(hgcObj.pfanObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
                appData_thermmenu.fan_state = 1;
        }
        else
        {
            appData_thermmenu.fan_state = 1; 
        }
}

void APP_thermmenu_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData_thermmenu.thermmenu_state )
    {
        /* Application's initial state. */
        case TIMER_INIT:
        {
//                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                {
//                    appData_thermmenu.sysTmrHandle_thermometer = SYS_TMR_DelayMS(appData_thermmenu.temperature_timedelay);
                    appData_thermmenu.thermmenu_state = TEMPSTATE_RED;
                    break;
//                }
        }
        
        case TEMPSTATE_BLUE:
        {

            if(appData_thermmenu.tempString_update)
            {
                strcpy(appData_thermmenu.tempstring, "25");
                GFX_GOL_StaticTextSet(hgcObj.ptemp_stringObj, appData_thermmenu.tempstring);
                GFX_GOL_ObjectStateSet(hgcObj.ptemp_stringObj, GFX_GOL_STATICTEXT_DRAW_STATE);
                appData_thermmenu.tempString_update = 0;
            }
            appData_thermmenu.fan_timedelay = 25;
            if(appData_thermmenu.buttonGrayed == false )
            {
                               
                GFX_GOL_ButtonReleaseStateImageSet(hgcObj.ptemp_dec_fan_fastObj, (GFX_RESOURCE_HDR*)&Down_Grey_80);
                GFX_GOL_ObjectStateSet(hgcObj.ptemp_dec_fan_fastObj, GFX_GOL_BUTTON_DRAW_STATE);        

                appData_thermmenu.buttonGrayed = 1;
            } 
            
            if (appData_thermmenu.sysTmrHandle_fan != SYS_TMR_HANDLE_INVALID
                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_fan))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it
                
                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_fan);
                
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_thermmenu.sysTmrHandle_fan = SYS_TMR_DelayMS(appData_thermmenu.fan_timedelay);

                }
                
                fan_rotation();
            }
                        
            if(appData_thermmenu.uparrow == 1 )
            {
                
//                if (appData_thermmenu.sysTmrHandle_thermometer != SYS_TMR_HANDLE_INVALID
//                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_thermometer))
//                {
//                //When the timer is expired the SM will come into this if - at the end of the delay time
//                //We want to initiate motion here after deleting the timer and re-setting it
//                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_thermometer);
//                
//               
//                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                {
//                    appData_thermmenu.sysTmrHandle_thermometer = SYS_TMR_DelayMS(appData_thermmenu.temperature_timedelay);
//
//                }
                appData_thermmenu.uparrow = 0;
                appData_thermmenu.tempString_update = 1; //Needs to update tempstring on the next temp state
                GFX_GOL_PictureControlImageSet(hgcObj.pthermometerObj, (GFX_RESOURCE_HDR*)&green_temp_70);
                GFX_GOL_PictureControlPartialSet(hgcObj.pthermometerObj, 0, 0, 
                    (hgcObj.pthermometerObj->imageRight - hgcObj.pthermometerObj->imageLeft), 
                    (hgcObj.pthermometerObj->imageBottom - hgcObj.pthermometerObj->imageTop));
                GFX_GOL_ObjectStateSet(hgcObj.pthermometerObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
                
                
                
                GFX_GOL_ButtonReleaseStateImageSet(hgcObj.ptemp_dec_fan_fastObj, (GFX_RESOURCE_HDR*)&Down_Magenta_80);
                GFX_GOL_ObjectStateSet(hgcObj.ptemp_dec_fan_fastObj, GFX_GOL_BUTTON_DRAW_STATE);        

                appData_thermmenu.buttonGrayed = 0;
                
                appData_thermmenu.thermometer_state = TEMP_YELLOW;
                appData_thermmenu.thermmenu_state = TEMPSTATE_YELLOW;
//                }
                
            }
            break;
        }
        case TEMPSTATE_YELLOW:
        {

            if(appData_thermmenu.tempString_update)
            {
                strcpy(appData_thermmenu.tempstring, "50");
                GFX_GOL_StaticTextSet(hgcObj.ptemp_stringObj, appData_thermmenu.tempstring);
                GFX_GOL_ObjectStateSet(hgcObj.ptemp_stringObj, GFX_GOL_STATICTEXT_DRAW_STATE);
                appData_thermmenu.tempString_update = 0;
            }
            appData_thermmenu.fan_timedelay = 50;
            
            if (appData_thermmenu.sysTmrHandle_fan != SYS_TMR_HANDLE_INVALID
                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_fan))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it
                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_fan);
                
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_thermmenu.sysTmrHandle_fan = SYS_TMR_DelayMS(appData_thermmenu.fan_timedelay);

                }
                
                fan_rotation();
            }
            
            if(appData_thermmenu.uparrow == 1 )
            {
                                               
//                if (appData_thermmenu.sysTmrHandle_thermometer != SYS_TMR_HANDLE_INVALID
//                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_thermometer))
//                {
//                //When the timer is expired the SM will come into this if - at the end of the delay time
//                //We want to initiate motion here after deleting the timer and re-setting it
//                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_thermometer);
//                
//               
//                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                {
//                    appData_thermmenu.sysTmrHandle_thermometer = SYS_TMR_DelayMS(appData_thermmenu.temperature_timedelay);
//
//                }
                appData_thermmenu.uparrow = 0;
                appData_thermmenu.tempString_update = 1; //Needs to update tempstring on the next temp state
                GFX_GOL_PictureControlImageSet(hgcObj.pthermometerObj, (GFX_RESOURCE_HDR*)&orange_temp_70);
                GFX_GOL_PictureControlPartialSet(hgcObj.pthermometerObj, 0, 0, 
                    (hgcObj.pthermometerObj->imageRight - hgcObj.pthermometerObj->imageLeft), 
                    (hgcObj.pthermometerObj->imageBottom - hgcObj.pthermometerObj->imageTop));
                GFX_GOL_ObjectStateSet(hgcObj.pthermometerObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
                
                
                
                appData_thermmenu.thermometer_state = TEMP_ORANGE;
                appData_thermmenu.thermmenu_state = TEMPSTATE_ORANGE;
                
                
//                }   
                break;
            }
            
            if(appData_thermmenu.downarrow ==1)
            {
                               
//                if (appData_thermmenu.sysTmrHandle_thermometer != SYS_TMR_HANDLE_INVALID
//                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_thermometer))
//                {
//                //When the timer is expired the SM will come into this if - at the end of the delay time
//                //We want to initiate motion here after deleting the timer and re-setting it
//                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_thermometer);
//                
//               
//                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                {
//                    appData_thermmenu.sysTmrHandle_thermometer = SYS_TMR_DelayMS(appData_thermmenu.temperature_timedelay);
//
//                }
                appData_thermmenu.downarrow = 0;
                appData_thermmenu.tempString_update = 1; //Needs to update tempstring on the next temp state
                GFX_GOL_PictureControlImageSet(hgcObj.pthermometerObj, (GFX_RESOURCE_HDR*)&blue_temp_70);
                GFX_GOL_PictureControlPartialSet(hgcObj.pthermometerObj, 0, 0, 
                    (hgcObj.pthermometerObj->imageRight - hgcObj.pthermometerObj->imageLeft), 
                    (hgcObj.pthermometerObj->imageBottom - hgcObj.pthermometerObj->imageTop));
                GFX_GOL_ObjectStateSet(hgcObj.pthermometerObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
                
                               
                appData_thermmenu.thermometer_state = TEMP_BLUE;
                appData_thermmenu.thermmenu_state = TEMPSTATE_BLUE;
                
                
//                }   
                break;
            }
        }
        
        case TEMPSTATE_ORANGE:
        {

            if(appData_thermmenu.tempString_update)
            {
                strcpy(appData_thermmenu.tempstring, "75");
                GFX_GOL_StaticTextSet(hgcObj.ptemp_stringObj, appData_thermmenu.tempstring);
                GFX_GOL_ObjectStateSet(hgcObj.ptemp_stringObj, GFX_GOL_STATICTEXT_DRAW_STATE);
                appData_thermmenu.tempString_update = 0;
            }
            
            appData_thermmenu.fan_timedelay = 75;
            
            if (appData_thermmenu.sysTmrHandle_fan != SYS_TMR_HANDLE_INVALID
                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_fan))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it
                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_fan);

               
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_thermmenu.sysTmrHandle_fan = SYS_TMR_DelayMS(appData_thermmenu.fan_timedelay);

                }
                
                fan_rotation();
            }
                
            
            if(appData_thermmenu.uparrow == 1 )
            {
                        
//                if (appData_thermmenu.sysTmrHandle_thermometer != SYS_TMR_HANDLE_INVALID
//                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_thermometer))
//                {
//                //When the timer is expired the SM will come into this if - at the end of the delay time
//                //We want to initiate motion here after deleting the timer and re-setting it
//                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_thermometer);
//                
//               
//                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                {
//                    appData_thermmenu.sysTmrHandle_thermometer = SYS_TMR_DelayMS(appData_thermmenu.temperature_timedelay);
//
//                }
                
                appData_thermmenu.uparrow = 0;
                appData_thermmenu.tempString_update = 1; //Needs to update tempstring on the next temp state
                GFX_GOL_PictureControlImageSet(hgcObj.pthermometerObj, (GFX_RESOURCE_HDR*)&red_temp_70);
                GFX_GOL_PictureControlPartialSet(hgcObj.pthermometerObj, 0, 0, 
                    (hgcObj.pthermometerObj->imageRight - hgcObj.pthermometerObj->imageLeft), 
                    (hgcObj.pthermometerObj->imageBottom - hgcObj.pthermometerObj->imageTop));
                GFX_GOL_ObjectStateSet(hgcObj.pthermometerObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
          
                
                appData_thermmenu.thermometer_state = TEMP_RED;
                appData_thermmenu.thermmenu_state = TEMPSTATE_RED;
                
                
//                }   
                break;
            }
            
            if(appData_thermmenu.downarrow ==1)
            {
                                
//                if (appData_thermmenu.sysTmrHandle_thermometer != SYS_TMR_HANDLE_INVALID
//                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_thermometer))
//                {
//                //When the timer is expired the SM will come into this if - at the end of the delay time
//                //We want to initiate motion here after deleting the timer and re-setting it
//                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_thermometer);
//                
//               
//                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                {
//                    appData_thermmenu.sysTmrHandle_thermometer = SYS_TMR_DelayMS(appData_thermmenu.temperature_timedelay);
//
//                }
                
                appData_thermmenu.downarrow = 0;
                appData_thermmenu.tempString_update = 1; //Needs to update tempstring on the next temp state
                GFX_GOL_PictureControlImageSet(hgcObj.pthermometerObj, (GFX_RESOURCE_HDR*)&green_temp_70);
                GFX_GOL_PictureControlPartialSet(hgcObj.pthermometerObj, 0, 0, 
                    (hgcObj.pthermometerObj->imageRight - hgcObj.pthermometerObj->imageLeft), 
                    (hgcObj.pthermometerObj->imageBottom - hgcObj.pthermometerObj->imageTop));
                GFX_GOL_ObjectStateSet(hgcObj.pthermometerObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
  
                
                appData_thermmenu.thermometer_state = TEMP_YELLOW;
                appData_thermmenu.thermmenu_state = TEMPSTATE_YELLOW;
                
                
//                }   
                break;
            }
            break;
        }
            
        case TEMPSTATE_RED:
        {
            
            appData_thermmenu.fan_on = 0; //fan turns off on red
            //SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_fan);

            appData_thermmenu.fan_timedelay = 150;
            if (appData_thermmenu.sysTmrHandle_fan != SYS_TMR_HANDLE_INVALID
                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_fan))
            {
                //When the timer is expired the SM will come into this if - at the end of the delay time
                //We want to initiate motion here after deleting the timer and re-setting it
                
                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_fan);
                
                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
                {
                    appData_thermmenu.sysTmrHandle_fan = SYS_TMR_DelayMS(appData_thermmenu.fan_timedelay);

                }
                
                fan_rotation();
            }
            
            if(appData_thermmenu.buttonGrayed == false && hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_thermostat)
            {
                GFX_GOL_ButtonReleaseStateImageSet(hgcObj.ptemp_inc_fan_slowObj, (GFX_RESOURCE_HDR*)&Up_Grey_80);
                GFX_GOL_ObjectStateSet(hgcObj.ptemp_inc_fan_slowObj, GFX_GOL_BUTTON_DRAW_STATE);        
//                GFX_ImageDraw(
//                                hgcObj.ptemp_inc_fan_slowObj->hdr.gfxIndex,
//                            ((hgcObj.ptemp_inc_fan_slowObj->hdr.right + hgcObj.ptemp_inc_fan_slowObj->hdr.left -
//                                GFX_ImageWidthGet((void *)pImage))  >> 1) + 1,
//                            ((hgcObj.ptemp_inc_fan_slowObj->hdr.top + hgcObj.ptemp_inc_fan_slowObj->hdr.bottom -
//                                GFX_ImageHeightGet((void *)pImage)) >> 1) + 1,
//                            pImage);
                appData_thermmenu.buttonGrayed = 1;
            }        
            if(appData_thermmenu.tempString_update)
            {
                strcpy(appData_thermmenu.tempstring, "100");
                GFX_GOL_StaticTextSet(hgcObj.ptemp_stringObj, appData_thermmenu.tempstring);
                GFX_GOL_ObjectStateSet(hgcObj.ptemp_stringObj, GFX_GOL_STATICTEXT_DRAW_STATE);
                appData_thermmenu.tempString_update = 0;
            }
            
            if(appData_thermmenu.downarrow == 1)
            {
                appData_thermmenu.fan_off_pressed = 0; //fan button press has been serviced
                
                     
//                if (appData_thermmenu.sysTmrHandle_thermometer != SYS_TMR_HANDLE_INVALID
//                    && SYS_TMR_DelayStatusGet(appData_thermmenu.sysTmrHandle_thermometer))
//                {
//                //When the timer is expired the SM will come into this if - at the end of the delay time
//                //We want to initiate motion here after deleting the timer and re-setting it
//                SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_thermometer);
//                
//               
//                if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                {
//                    appData_thermmenu.sysTmrHandle_thermometer = SYS_TMR_DelayMS(appData_thermmenu.temperature_timedelay);
//
//                }

//                if (appData_thermmenu.sysTmrHandle_fan != SYS_TMR_HANDLE_INVALID)                    
//                {
//    //                //When the timer is expired the SM will come into this if - at the end of the delay time
//    //                //We want to initiate motion here after deleting the timer and re-setting it
//                    SYS_TMR_ObjectDelete(appData_thermmenu.sysTmrHandle_fan);
//                    if(SYS_TMR_Status ( sysObj.sysTmr ) == SYS_STATUS_READY)
//                    {
//                        appData_thermmenu.sysTmrHandle_fan = SYS_TMR_DelayMS(appData_thermmenu.fan_timedelay);
//
//                    }
//                }
                appData_thermmenu.downarrow = 0; //downarrow has been serviced
                appData_thermmenu.tempString_update = 1; //Needs to update tempstring on the next temp state
                GFX_GOL_PictureControlImageSet(hgcObj.pthermometerObj, (GFX_RESOURCE_HDR*)&orange_temp_70);
                GFX_GOL_PictureControlPartialSet(hgcObj.pthermometerObj, 0, 0, 
                    (hgcObj.pthermometerObj->imageRight - hgcObj.pthermometerObj->imageLeft), 
                    (hgcObj.pthermometerObj->imageBottom - hgcObj.pthermometerObj->imageTop));
                GFX_GOL_ObjectStateSet(hgcObj.pthermometerObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);
                
                GFX_GOL_ButtonReleaseStateImageSet(hgcObj.ptemp_inc_fan_slowObj, (GFX_RESOURCE_HDR*)&Up_Magenta_80);
                GFX_GOL_ObjectStateSet(hgcObj.ptemp_inc_fan_slowObj, GFX_GOL_BUTTON_DRAW_STATE); 
                appData_thermmenu.buttonGrayed = 0;
                appData_thermmenu.thermometer_state = TEMP_ORANGE;
                appData_thermmenu.thermmenu_state = TEMPSTATE_ORANGE;
                
                
//                }   
                break;
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
/* *****************************************************************************
 End of File
 */
