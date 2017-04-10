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
#include "gfx_hgc_definitions.h"
#include "system/touch/sys_touch.h"

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

// *****************************************************************************
// *****************************************************************************
// Section: MACROS
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Global Variable Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Routines
// *****************************************************************************
int touchRange = 3000;
int circleRadius = 30;

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

/*******************************************************************************
  Function:
    void APP_TouchMessageCallback ( SYS_MSG_OBJECT *pMsg );

  Summary:
    Touch event callback routine.

  Description:
    This is the callback from the GFX_HGC layer to inform the application of a
    touch event.  pMsg includes the current touch behavior and the touch position is 
    reported via the Touch System Service

  Remarks:
    This function is registered via GFX_HGC_RegisterAppTouchCallback in APP_Initialize().
    This function is only included in the build when not using MTCH6303 touch driver.
    This is because the Touch System Service is not supported by MTCH6303 touch driver
    for Harmony v1.07.    
*/
void APP_TouchMessageCallback ( SYS_MSG_OBJECT *pMsg )
{
    if (pMsg == NULL)
        return;

    if (pMsg->param0 != EVENT_INVALID)
    {
        appData.mostRecentTouchX = pMsg->param1;
        appData.mostRecentTouchY = pMsg->param2;
        SYS_PRINT("\n\rX: %d Y: %d", appData.mostRecentTouchX, appData.mostRecentTouchY);

        if (hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_TouchTest)
        {
            APP_HandleTouchTest();
        }
        else if (pMsg->param0 == EVENT_RELEASE && hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_Settings)
        {
            APP_UpdateLanguageTexts();                                    
        }
    }
    
    appData.currentTouchBehavior = pMsg->param0;    
}

/*******************************************************************************
  Function:
    void APP_HandleTouchTest( void );

  Summary:
    Sends current x/y touch values to the digital meter in the Touch Test screen

  Description:
    Handles the reporting of the euclidean coordinate values to the 
    digital meter in the Touch Test screen
*/
void APP_HandleTouchTest( void )
{
    if (appData.currentTouchBehavior != EVENT_INVALID)
    {        
        GFX_GOL_DigitalMeterValueSet(hgcObj.pXPosObj, appData.mostRecentTouchX);
        GFX_GOL_ObjectStateSet(hgcObj.pXPosObj, GFX_GOL_DIGITALMETER_UPDATE_STATE);
        
        GFX_GOL_DigitalMeterValueSet(hgcObj.pYPosObj, appData.mostRecentTouchY);
        GFX_GOL_ObjectStateSet(hgcObj.pYPosObj, GFX_GOL_DIGITALMETER_UPDATE_STATE);
    }    
}

/*******************************************************************************
  Function:
    void APP_HandleLanguageSetting(APP_LANGUAGES language);

  Summary:
    Changes the current application language settings

  Description:
    This is function is setup to be called on a select event by a radio button
    to select the language.  When called, this function sets up any 
    necessary steps to switch to the requested language.
*/
void APP_HandleLanguageSetting(APP_LANGUAGES language)
{
    appData.language = language;
}

/*******************************************************************************
  Function:
    void APP_UpdateMainMenu( void );

  Summary:
    Updates the Main Menu text to be displayed, base on the language setting

  Description:
    This is called in APP_Tasks() during the Main Menu mode to draw the 
    correct set of text to display, base on the language setting 
    (English, Chinese Traditional, and Chinese Simplified)
*/
void APP_UpdateMainMenu()
{
    GFX_ColorSet(GFX_INDEX_0, hgcObj.pe_st_SlideshowObj->hdr.pGolScheme->CommonBkColor);
    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_SlideshowObj->hdr.left,
                hgcObj.pe_st_SlideshowObj->hdr.top,
                hgcObj.pe_st_SlideshowObj->hdr.right,
                hgcObj.pe_st_SlideshowObj->hdr.bottom);
    
    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_TouchTestObj->hdr.left,
                hgcObj.pe_st_TouchTestObj->hdr.top,
                hgcObj.pe_st_TouchTestObj->hdr.right,
                hgcObj.pe_st_TouchTestObj->hdr.bottom);

    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_SettingsObj->hdr.left,
                hgcObj.pe_st_SettingsObj->hdr.top,
                hgcObj.pe_st_SettingsObj->hdr.right,
                hgcObj.pe_st_SettingsObj->hdr.bottom);
    
    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_FeaturesObj->hdr.left,
                hgcObj.pe_st_FeaturesObj->hdr.top,
                hgcObj.pe_st_FeaturesObj->hdr.right,
                hgcObj.pe_st_FeaturesObj->hdr.bottom);

    if (appData.language == APP_LANG_ENGLISH)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_SlideshowObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_TouchTestObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_SettingsObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_FeaturesObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }
    else if (appData.language == APP_LANG_CHINESE_TRAD)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pct_st_SlideShowObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pct_st_TouchTestObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pct_st_SettingsObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pc_st_FeaturesObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }
    else if (appData.language == APP_LANG_CHINESE_SIMP)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pcs_st_SlideShowObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pcs_st_TouchTestObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pcs_st_SettingsObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pc_st_FeaturesObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }        
}

/*******************************************************************************
  Function:
    void APP_UpdateSlideShowTips( void );

  Summary:
    Updates the Slideshow instructrion text to be displayed, base on the 
    language setting

  Description:
    This is called in APP_Tasks() during the Slideshow mode to draw the 
    correct set of text to display, base on the language setting 
    (English, Chinese Traditional, and Chinese Simplified)
*/
void APP_UpdateSlideShowTips( void )
{
    GFX_ColorSet(GFX_INDEX_0, hgcObj.pe_st_SlideShowTipsObj->hdr.pGolScheme->CommonBkColor);
    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_SlideShowTipsObj->hdr.left,
                hgcObj.pe_st_SlideShowTipsObj->hdr.top,
                hgcObj.pe_st_SlideShowTipsObj->hdr.right,
                hgcObj.pe_st_SlideShowTipsObj->hdr.bottom);
    
    if (appData.language == APP_LANG_ENGLISH)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_SlideShowTipsObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pSlideShowTipIconObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }
    else if (appData.language == APP_LANG_CHINESE_TRAD)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pct_p_SlideShowTipsObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }
    else if (appData.language == APP_LANG_CHINESE_SIMP)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pcs_p_SlideShowTipsObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }    
}

/*******************************************************************************
  Function:
    void APP_UpdateFeatureList( void );

  Summary:
    Updates the Feature List to be displayed, base on the language setting

  Description:
    This is called in APP_Tasks() during the Feature List mode to draw the 
    correct set of feature list to display, base on the language setting 
    (English, Chinese Traditional, and Chinese Simplified)
*/
void APP_UpdateFeatureList()
{
    GFX_ColorSet(GFX_INDEX_0, hgcObj.pe_st_DemonstratedFeaturesObj->hdr.pGolScheme->CommonBkColor);
    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_DemonstratedFeaturesObj->hdr.left,
                hgcObj.pe_st_DemonstratedFeaturesObj->hdr.top,
                hgcObj.pe_st_DemonstratedFeaturesObj->hdr.right,
                hgcObj.pe_st_DemonstratedFeaturesObj->hdr.bottom);
    
    if (appData.language == APP_LANG_ENGLISH)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_DemonstratedFeaturesObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }
    else if (appData.language == APP_LANG_CHINESE_TRAD)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pct_p_FeatureListObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }
    else if (appData.language == APP_LANG_CHINESE_SIMP)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pcs_p_FeatureListObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }    

    GFX_GOL_ObjectStateSet(hgcObj.pButton6Obj, GFX_GOL_BUTTON_DRAW_STATE);
}

/*******************************************************************************
  Function:
    void APP_UpdateLanguageTexts( void );

  Summary:
    Updates the Settings text to be displayed, base on the language setting

  Description:
    This is called in APP_Tasks() during the Settings mode to draw the 
    correct set of settings text to display, base on the language setting 
    (English, Chinese Traditional, and Chinese Simplified)
*/
void APP_UpdateLanguageTexts( void )
{
    switch(appData.language)
    {
        case APP_LANG_ENGLISH:
            GFX_GOL_RadioButtonCheckSet(hgcObj.pRadioButtonEnglishObj, RadioButtonEnglish);
            break;
        case APP_LANG_CHINESE_TRAD:
            GFX_GOL_RadioButtonCheckSet(hgcObj.pRadioButtonChineseTradObj, RadioButtonChineseTrad);
            break;
        case APP_LANG_CHINESE_SIMP:
            GFX_GOL_RadioButtonCheckSet(hgcObj.pRadioButtonChineseSimplObj, RadioButtonChineseSimpl);
            break;
    }

    appData.secondString[0] = (GFX_XCHAR)(0x30 + appData.slidePauseTime / 1000);   
    appData.secondString[1] = (GFX_XCHAR)(0x0);   
    GFX_GOL_StaticTextSet(hgcObj.pSecondsStringObj, appData.secondString);
    GFX_GOL_ObjectStateSet(hgcObj.pSecondsStringObj, GFX_GOL_STATICTEXT_DRAW_STATE);

    GFX_ColorSet(GFX_INDEX_0, hgcObj.pe_st_SelectLanguageObj->hdr.pGolScheme->CommonBkColor);
    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_SelectLanguageObj->hdr.left,
                hgcObj.pe_st_SelectLanguageObj->hdr.top,
                hgcObj.pe_st_SelectLanguageObj->hdr.right,
                hgcObj.pe_st_SelectLanguageObj->hdr.bottom);
    
    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_SlidePauseTimeObj->hdr.left,
                hgcObj.pe_st_SlidePauseTimeObj->hdr.top,
                hgcObj.pe_st_SlidePauseTimeObj->hdr.right,
                hgcObj.pe_st_SlidePauseTimeObj->hdr.bottom);    

    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_SecondObj->hdr.left,
                hgcObj.pe_st_SecondObj->hdr.top,
                hgcObj.pe_st_SecondObj->hdr.right,
                hgcObj.pe_st_SecondObj->hdr.bottom);    

    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_EnglishObj->hdr.left,
                hgcObj.pe_st_EnglishObj->hdr.top,
                hgcObj.pe_st_EnglishObj->hdr.right,
                hgcObj.pe_st_EnglishObj->hdr.bottom);    

    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_ChineseTraditionalObj->hdr.left,
                hgcObj.pe_st_ChineseTraditionalObj->hdr.top,
                hgcObj.pe_st_ChineseTraditionalObj->hdr.right,
                hgcObj.pe_st_ChineseTraditionalObj->hdr.bottom);    

    GFX_BarDraw(GFX_INDEX_0,
                hgcObj.pe_st_ChineseSimplifiedObj->hdr.left,
                hgcObj.pe_st_ChineseSimplifiedObj->hdr.top,
                hgcObj.pe_st_ChineseSimplifiedObj->hdr.right,
                hgcObj.pe_st_ChineseSimplifiedObj->hdr.bottom);    

    if (appData.language == APP_LANG_ENGLISH)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_SelectLanguageObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_SlidePauseTimeObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_SecondObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_EnglishObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_ChineseTraditionalObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pe_st_ChineseSimplifiedObj, GFX_GOL_STATICTEXT_DRAW_STATE);        
    }
    else if (appData.language == APP_LANG_CHINESE_TRAD)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pct_st_SelectLanguageObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pct_st_SlidePauseTimeObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        
        GFX_GOL_ObjectStateSet(hgcObj.pc_st_SecondObj, GFX_GOL_STATICTEXT_DRAW_STATE);

        GFX_GOL_ObjectStateSet(hgcObj.pe_st_EnglishObj, GFX_GOL_STATICTEXT_DRAW_STATE);

        GFX_GOL_ObjectStateSet(hgcObj.pcs_st_ChineseSimplifiedObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pct_st_ChineseTraditionalObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }
    else if (appData.language == APP_LANG_CHINESE_SIMP)
    {
        GFX_GOL_ObjectStateSet(hgcObj.pcs_st_SelectLanguageObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pcs_st_SlidePauseTimeObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        
        GFX_GOL_ObjectStateSet(hgcObj.pc_st_SecondObj, GFX_GOL_STATICTEXT_DRAW_STATE);

        GFX_GOL_ObjectStateSet(hgcObj.pe_st_EnglishObj, GFX_GOL_STATICTEXT_DRAW_STATE);

        GFX_GOL_ObjectStateSet(hgcObj.pcs_st_ChineseSimplifiedObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        GFX_GOL_ObjectStateSet(hgcObj.pct_st_ChineseTraditionalObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    }    
}

/*******************************************************************************
  Function:
    void APP_ChangeMode(APP_MODES mode);

  Summary:
    Changes the current application mode

  Description:
    This is function is setup to be called on a release event by a screen button
    to help navigate between modes.  When called, this function sets up any 
    necessary steps to switch to the requested mode.
*/
void APP_ChangeMode(APP_MODES mode)
{
    appData.mode = mode;
    
#ifndef GFX_CONFIG_DOUBLE_BUFFERING_DISABLE
    GFX_DoubleBufferDisable(GFX_INDEX_0);
#endif
    
    if (mode == APP_MODE_MAIN_MENU)
    {
        GFX_HGC_ChangeScreen(MainMenu);        
    }
    else if (mode == APP_MODE_SLIDES)
    {
        if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID
                || !SYS_TMR_DelayStatusGet(appData.sysTmrHandle))
        {
            SYS_TMR_ObjectDelete(appData.sysTmrHandle);
            appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
        } 
       
        appData.hasTipsBeenRead = false;
        GFX_HGC_ChangeScreen(SlideShowInstructions);
    }
    else if (mode == APP_MODE_TOUCH_TEST)
    {
        GFX_HGC_ChangeScreen(TouchTest);                
    }
    else if (mode == APP_MODE_SETTINGS)
    {
        GFX_HGC_ChangeScreen(Settings);                
    }
    else if (mode == APP_MODE_FEATURE_LIST)
    {
        GFX_HGC_ChangeScreen(FeatureList);                
    }
}

/*******************************************************************************
  Function:
    void APP_ProcessModeState( void );

  Summary:
    Changes the currnet application state base on the current selected mode

  Description:
    This is function is called to handle transitioning to a new state if
    a mode change has been requested by the user.
*/
void APP_ProcessModeState()
{
    switch(appData.mode)
    {
        case APP_MODE_MAIN_MENU:
            appData.state = APP_STATE_MAIN_MENU;            
            break;
        case APP_MODE_SLIDES:
            appData.state = APP_STATE_SLIDE_SHOW;            
            break;
        case APP_MODE_TOUCH_TEST:
            appData.state = APP_STATE_TOUCH_TEST;            
            break;
        case APP_MODE_SETTINGS:
            appData.state = APP_STATE_SETTINGS;            
            break;
        case APP_MODE_FEATURE_LIST:
            appData.state = APP_STATE_FEATURE_LIST;            
            break;
        default:
            break;
            
    }
    
}

/*******************************************************************************
  Function:
    void APP_GoToNextSlide( void );

  Summary:
    Set the slideshow to the next slide

  Description:
    When called, this function sets up any necessary steps to switch to 
    the next slide.
*/
void APP_GoToNextSlide( void )
{
    if (appData.mode != APP_MODE_SLIDES)
        return;

    if (GFX_HGC_HasCurrentScreenDrawn() == false)
        return;
    
    if (appData.currentTouchBehavior != EVENT_RELEASE
            &&  appData.currentTouchBehavior != EVENT_INVALID)
        return;

    //Ignore this event as the user is pressing the button at the bottom corner
    //to exit back to the menu
    if (appData.mostRecentTouchX > GFX_BUTTON_RIGHT_5 && 
            appData.mostRecentTouchY > GFX_BUTTON_BOTTOM_5)
    {
        return;
    }

    //Reset pause timer so the application logic can pick the next image
    if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID
            || !SYS_TMR_DelayStatusGet(appData.sysTmrHandle))
    {
        SYS_TMR_ObjectDelete(appData.sysTmrHandle);
        appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
    }    
}

/*******************************************************************************
  Function:
    void APP_SelectNewSlide ( void )

  Summary:
     Selects a new slide 

  Description:
     This function is called during Slide Mode to initiate a GFX_HGC_ChangeScreen
     call.  This triggers the code generated by Harmony Composer to change screen.
     The JPEG image selected for the slide is decoded in runtime in a double 
     buffering scheme.  Where the decode occurs to a draw buffer, that is swapped 
     with the render buffer at completion of the decode.  Wihtout this scheme,
     the image would be rendered with a curtain effect, due to the block-by-block
     decoding algorithm of the JPEG decoder.

     Double buffering is handled automatically by the GFX_Primitive layer.

  Parameters:
    None.

  Returns:
    None.
*/
void APP_SelectNewSlide( void )
{
    static uint8_t screenId = Microchip;
    
    if (GFX_HGC_HasCurrentScreenDrawn() == true)
    {
#ifndef GFX_CONFIG_DOUBLE_BUFFERING_DISABLE
        GFX_DoubleBufferEnable(GFX_INDEX_0);
#endif
        GFX_HGC_ChangeScreen(screenId++);        

        if (screenId > Harmony)
        {
            screenId = Microchip;
        }    
    }
    
    appData.hasTipsBeenRead = true;

    //Pause for a couple of seconds between slides
    appData.sysTmrHandle = SYS_TMR_DelayMS(appData.slidePauseTime);
}

/*******************************************************************************
  Function:
    void APP_SetSlidePauseTime( int timeInSec );

  Summary:
    Sets Slide Pause Interval Time

  Description:
    This is function is setup to be called on a touch event by the slider bar
    in the Settings menu.
*/
void APP_SetSlidePauseTime( int timeInSec )
{
    if (timeInSec <= 0)
    {
        appData.slidePauseTime = 200;        
    }
    else
    {
        appData.slidePauseTime = timeInSec * 1000;        
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
    appData.state = APP_STATE_INIT;
    appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
    
    appData.mode = APP_MODE_MAIN_MENU;
 
    appData.slidePauseTime = 2000;
    appData.language = APP_LANG_ENGLISH;
    
    GFX_HGC_RegisterAppTouchCallback(APP_TouchMessageCallback);
}

/*******************************************************************************
  Function:
    void APP_RedrawRectangle( void );

  Summary:
    Set the redraw the rectangle in the touch test screen

  Description:
    When called, this function clears the touch screen test area by repainting
    a rectangle in the test area.
*/

void APP_RedrawRectangle( void )
{
    GFX_GOL_ObjectStateSet(hgcObj.pTouchAreaObj, GFX_GOL_WINDOW_DRAW_STATE);
}

/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{
    GFX_COLOR verLine, horLine;
    uint32_t lerp = 0;
    
    if (appData.state != APP_STATE_INIT)
    {
        APP_ProcessModeState();
    }

    /* Check the application's current state. */
    switch ( appData.state )
    {
        case APP_STATE_INIT:
        {
            if (hgcObj.screenState == HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainMenu)
            {
                APP_UpdateMainMenu();
            }
            else if (hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_MainMenu)
            {
                //Transparency for the rounded edge of the Home button
                GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xFF));

                appData.state = APP_STATE_MAIN_MENU;
            }
            break;
        }
      
        case APP_STATE_SLIDE_SHOW:
        {
            if (appData.state != APP_STATE_SLIDE_SHOW)
            {
                appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
                break;
            }                

            if (appData.hasTipsBeenRead == false)
            {
                if (hgcObj.screenState == HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SlideShowInstructions)
                {
                    APP_UpdateSlideShowTips();
                }                
                break;
            }
            else if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID
                    && !SYS_TMR_DelayStatusGet(appData.sysTmrHandle))
            {
                break;
            }
            
            //Do not pick a new slide if the user is touching the screen
            if ( appData.currentTouchBehavior == EVENT_PRESS ||
                    appData.currentTouchBehavior == EVENT_STILLPRESS ||
                    appData.currentTouchBehavior == EVENT_MOVE )
            {
                break;
            }

            APP_SelectNewSlide();
            break;
        }
        
        case APP_STATE_TOUCH_TEST:
        {
            if (appData.state != APP_STATE_TOUCH_TEST)
                break;
            
            if (GFX_HGC_HasCurrentScreenDrawn() == false)
                break;
            
            //Only process touch event going into the window area
            if (appData.mostRecentTouchX < hgcObj.pTouchAreaObj->hdr.right &&
                    appData.mostRecentTouchX > hgcObj.pTouchAreaObj->hdr.left &&
                    appData.mostRecentTouchY > hgcObj.pTouchAreaObj->hdr.top &&
                    appData.mostRecentTouchY < hgcObj.pTouchAreaObj->hdr.bottom)
            {
                if (appData.currentTouchBehavior == EVENT_PRESS
                        || appData.currentTouchBehavior == EVENT_MOVE
                        || appData.currentTouchBehavior == EVENT_STILLPRESS)
                {
                    GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);

                    lerp = (appData.mostRecentTouchX - hgcObj.pTouchAreaObj->hdr.left) * 255 / hgcObj.pTouchAreaObj->hdr.right;                    
                    verLine = GFX_RGBConvert(255, lerp, 0);

                    lerp = (appData.mostRecentTouchY - hgcObj.pTouchAreaObj->hdr.top) * 255 / hgcObj.pTouchAreaObj->hdr.bottom;                    
                    horLine = GFX_RGBConvert(0, (255 - lerp), lerp);
                    
                    GFX_ColorSet(GFX_INDEX_0, verLine);                    
                    GFX_LineDraw(GFX_INDEX_0, appData.mostRecentTouchX, hgcObj.pTouchAreaObj->hdr.top, appData.mostRecentTouchX, hgcObj.pTouchAreaObj->hdr.bottom);

                    GFX_ColorSet(GFX_INDEX_0, horLine);
                    GFX_LineDraw(GFX_INDEX_0, hgcObj.pTouchAreaObj->hdr.left, appData.mostRecentTouchY, hgcObj.pTouchAreaObj->hdr.right, appData.mostRecentTouchY);
                }
            }

            if (appData.currentTouchBehavior == EVENT_RELEASE)
            {
                //Nullify the behavior to invalid to avoid further redraws
                appData.currentTouchBehavior = EVENT_INVALID;
                
                APP_RedrawRectangle();
            }

            break;
        }

        case APP_STATE_SETTINGS:
        {
            if (hgcObj.screenState == HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Settings)
            {
                GFX_GOL_ScrollBarPositionSet(hgcObj.pSlider1Obj, appData.slidePauseTime / 1000);
                GFX_GOL_ObjectStateSet(hgcObj.pSlider1Obj, GFX_GOL_SCROLLBAR_DRAW_STATE);                    

                APP_UpdateLanguageTexts();                    
            }
            break;
        }
        case APP_STATE_FEATURE_LIST:
        {
            if (hgcObj.screenState == HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FeatureList)
            {
                APP_UpdateFeatureList();
            }            
        }
        case APP_STATE_MAIN_MENU:
        {
            if (hgcObj.screenState == HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainMenu)
            {
                APP_UpdateMainMenu();
            }
        }
        default:
        {
            break;
        }
    }
}

/*******************************************************************************
 End of File
 */

