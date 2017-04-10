/*******************************************************************************
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
*******************************************************************************/

//DOM-IGNORE-BEGIN
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
//DOM-IGNORE-END

#ifndef _APP_H
#define _APP_H


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "system_config.h"
#include "system_definitions.h"

// Custom header added to make sure references to SYS_INPUT_DEVICE_TYPE enum are handled
#include "system/touch/sys_touch.h"

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
/* APP_MODES

  Summary:
    Application modes enumeration

  Description:
    This enumeration defines the valid application modes enumerations.  There are 
    five modes supported: Main Menu, Touch Test, Settings and Feature List

  Remarks:
    See inline comments for specifics.
*/
typedef enum
{
    /* Main Menu */
    APP_MODE_MAIN_MENU,
            
    /* Touch Test */
    APP_MODE_TOUCH_TEST,
            
    /* Slideshow */
    APP_MODE_SLIDES,
            
    /* Settings */
    APP_MODE_SETTINGS,
            
    /* Feature List */
    APP_MODE_FEATURE_LIST

} APP_MODES;

// *****************************************************************************
/* APP_STATES

  Summary:
    Application states enumeration

  Description:
    This enumeration defines the valid application states.  These states
    determine the behaviour of the application at various times.

  Remarks:
    See inline comments for specifics.
*/

typedef enum
{
    /* Initial state */
    APP_STATE_INIT=0,
            
    /* Main menu state */
    APP_STATE_MAIN_MENU,
    
    /* Slideshow state */
    APP_STATE_SLIDE_SHOW,

    /* Touch test state */
    APP_STATE_TOUCH_TEST,
            
    /* Settings state */
    APP_STATE_SETTINGS,

    /* Feature list state */
    APP_STATE_FEATURE_LIST,

} APP_STATES;


// *****************************************************************************
/* APP_LANGUAGES

  Summary:
    Enumeration of the languages supported in this application

  Description:
    This enum is to help track the three languages supported in this application:
    English, Chinese Traditional, and Chinese Simplified.
*/

typedef enum
{
    APP_LANG_ENGLISH,
            
    APP_LANG_CHINESE_TRAD,
            
    APP_LANG_CHINESE_SIMP
            
} APP_LANGUAGES;


// *****************************************************************************
/* APP_DATA

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    See inline comments for specifics.
*/

typedef struct
{
    /* Timer System Service handle, used to track the delay between
    slides while the application is in the Slideshow mode */
    SYS_TMR_HANDLE sysTmrHandle;

    /* Application's current state*/
    APP_STATES state;

    /* Application's current mode */
    APP_MODES mode;

    /* This is used to track whethere the current touch event is
    PRESS, MOVE, STILLPRESS, RELEASE, or INVALID (touchless) */
    int16_t currentTouchBehavior;
    
    /* Most recent valid touch position x-Coordinate */
    int16_t mostRecentTouchX;
    
    /* Most recent valid touch position y-Coordinate */
    int16_t mostRecentTouchY;

    /* Keeps track of the pause interval time between slides, per how the user 
    wishes to set it via the Settings screen */
    int slidePauseTime;
    
    /* Keeps track of whether the instruction screen for the Slideshow needs 
    to be displayed or not, when in Slideshow mode */
    bool hasTipsBeenRead;
    
    /* This displays the value of the pause interval time in GFX_XCHAR format 
    for the Settings screen */
    GFX_XCHAR secondString[2];

    /* Keeps track of the current language set by the user via the 
    Settings screen */
    APP_LANGUAGES language;

} APP_DATA;

extern APP_DATA appData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
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
void APP_TouchMessageCallback ( SYS_MSG_OBJECT *pMsg );
	
// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************


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
void APP_ChangeMode(APP_MODES mode);


/*******************************************************************************
  Function:
    void APP_ProcessModeState( void );

  Summary:
    Changes the currnet application state base on the current selected mode

  Description:
    This is function is called to handle transitioning to a new state if
    a mode change has been requested by the user.
*/
void APP_ProcessModeState( void );


/*******************************************************************************
  Function:
    void APP_HandleTouchTest( void );

  Summary:
    Sends current x/y touch values to the digital meter in the Touch Test screen

  Description:
    Handles the reporting of the euclidean coordinate values to the 
    digital meter in the Touch Test screen
*/
void APP_HandleTouchTest( void );


/*******************************************************************************
  Function:
    void APP_SetSlidePauseTime( int timeInSec );

  Summary:
    Sets Slide Pause Interval Time

  Description:
    This is function is setup to be called on a touch event by the slider bar
    in the Settings menu.
*/
void APP_SetSlidePauseTime( int timeInSec );


/*******************************************************************************
  Function:
    void APP_GoToNextSlide( void );

  Summary:
    Set the slideshow to the next slide

  Description:
    When called, this function sets up any necessary steps to switch to 
    the next slide.
*/
void APP_GoToNextSlide( void );


/*******************************************************************************
  Function:
    void APP_RedrawRectangle( void );

  Summary:
    Set the redraw the rectangle in the touch test screen

  Description:
    When called, this function clears the touch screen test area by repainting
    a rectangle in the test area.
*/
void APP_RedrawRectangle( void );


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
void APP_HandleLanguageSetting(APP_LANGUAGES language);


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
void APP_UpdateFeatureList( void );


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
void APP_UpdateLanguageTexts( void );


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
void APP_UpdateMainMenu( void );


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
void APP_UpdateSlideShowTips( void );


/*******************************************************************************
  Function:
    void APP_SelectNewSlide (  bool userTiggered  )

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
void APP_SelectNewSlide( void );


/*******************************************************************************
  Function:
    bool APP_GenerateSysMsgGet( void )

  Summary:
     Generate Sys Msg Touch Data

  Description:
    This function is called in APP_Tasks() every cycle to determine 
    press/still press/release situations and then send out the result
    via SYS MSG, the recipient of the message should be the GOL library
    where it uses the data to handle widget behavior.

  Returns:
    true if touch event is processed.

  Remark:
    This function is here because the MTCH6303 driver has not been integrated
    to SYS Touch.  This function is doing normally what SYS Touch should be 
    doing
 
 */
bool APP_GenerateSysMsgGet( void );


/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
     MPLAB Harmony Demo application initialization routine

  Description:
    This routine initializes Harmony Demo application.  This function opens
    the necessary drivers, initializes the timer and registers the application
    callback with the USART driver.

  Precondition:
    All other system initialization routines should be called before calling
    this routine (in "SYS_Initialize").

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Initialize();
    </code>

  Remarks:
    This routine must be called from the SYS_Initialize function.
*/
void APP_Initialize ( void );


/*******************************************************************************
  Function:
    void APP_Tasks ( void )

  Summary:
    MPLAB Harmony Demo application tasks function

  Description:
    This routine is the Harmony Demo application's tasks function.  It
    defines the application's state machine and core logic.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Tasks();
    </code>

  Remarks:
    This routine must be called from SYS_Tasks() routine.
 */

void APP_Tasks ( void );

#endif /* _APP_H */
/*******************************************************************************
 End of File
 */

