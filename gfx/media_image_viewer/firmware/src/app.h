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

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END 

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

#define APP_DISK_MAX_DIRS   100
#define APP_DISK_MAX_FILES  1000

    typedef struct{
    SYS_FS_FSTAT fstat;
    char path[255];
}APP_DISK_FILE_NODE;

typedef struct{
    char path[255];
}APP_DISK_FILE_PATH;

// *****************************************************************************
/* Application States

  Summary:
    Application states enumeration

  Description:
    This enumeration defines the valid application states.  These states
    determine the behavior of the application at various times.
*/

typedef enum
{
	/* Application's state machine's initial state. */
	APP_STATE_INIT=0,

	/* State when the media is unmounted. The application remains 
	in this state until a SYS_FS mount event occurs */
	APP_STATE_MEDIA_UNMOUNTED,
            
	/* State when the media is mounted. The application retrieves
	the mounted drive for image files. */
	APP_STATE_MEDIA_MOUNTED,
    
	/* Idle state - the state the application is in while in 
	main menu, settings and the feature lists screens */
	APP_STATE_IDLE,
    
	/* The state when the next image's header data is scanned
	to determine image format type and set to the slide screen */
    APP_STATE_DRAW_NEXT_SLIDE,
            
	/* The state handles the wait time between slides as well 
	as teardowns to occur if the user wants to fast-forward to the
	next image. */
	APP_STATE_WAIT_BETWEEN_SLIDE,
            
} APP_STATES;


// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    Application strings and buffers are be defined outside this structure.
 */

typedef struct
{
    /* The application's current state */
    APP_STATES state;

    /* Keeps track of the pause interval time between slides, per how the user 
    wants to set it via the Settings screen */
    int slidePauseTime;
    
    /* SYS_FS File handle for directory */
    SYS_FS_HANDLE dirHandle;

    /* SYS_FS stat for dir read */
    SYS_FS_FSTAT dirstat;

    /* SYS_FS File handle for current image file */
    SYS_FS_HANDLE fileHandle;

    /* SYS_FS File status for current image file */
    SYS_FS_FSTAT fileStatus;

    /* Keeps track of the file size */
    uint32_t           fileSize;
    
    /* Resource Header for the slide image */
    GFX_RESOURCE_HDR    imageResourceHeader;

    /* rootNode of the media volume */
    APP_DISK_FILE_NODE  rootNode;

    /* table contain file names for the volume */
    APP_DISK_FILE_PATH  fileNameTable[APP_DISK_MAX_DIRS];
    
    /* Name of the current file */
    char                fileName[255];
    
    /* total files in the volume */
    uint32_t totalFiles;
    
    /* tracks the current image to show */
    uint32_t imageIndex;

    /* flag to track if an image is ready */
    bool imageReadyToDraw;
    
    /* flag to track if the user requested a slideExitRequest */    
    bool animationStopRequested;
    
    /* Timer System Service handle, used to track the delay between
    slides while the application is in the Slideshow mode */
    SYS_TMR_HANDLE sysTmrHandle;

    /* Keeps track of whether to image meta data to be displayed or not, 
    when in Slideshow mode */
    bool metaDataEnable;
        
    /* Keeps track of whether to enable double buffering for the the Slideshow */
    bool doubleBufferingEnable;
    
    /* This is used to track whether the current touch event is
    PRESS, MOVE, STILLPRESS, RELEASE, or INVALID (touchless) */
    int16_t currentTouchBehavior;
    
    /* Most recent valid touch position x-Coordinate */
    int16_t mostRecentTouchX;
    
    /* Most recent valid touch position y-Coordinate */
    int16_t mostRecentTouchY;

    /* Keeps track of the number of frames in an animated GIF */
    uint16_t imageFrameCount;
    
    /* This displays the value of the pause interval time in GFX_XCHAR format 
    for the Settings screen */
    GFX_XCHAR secondString[2];

} APP_DATA;

extern APP_DATA appData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_MetaDataEnable(bool enable)

  Summary:
    API from the UI to application to enable/disable meta data display.

  Description:
    When called, this function updates the meta data display flag in 
    the application.
*/
void APP_MetaDataEnable(bool enable);


/*******************************************************************************
  Function:
    void APP_DoubleBufferingEnable(bool enable)

  Summary:
    API from the UI to application to enable/disable double buffering.

  Description:
    When called, this function updates the double buffering flag in 
    the application.
*/
void APP_DoubleBufferingEnable(bool enable);


/*******************************************************************************
  Function:
    bool APP_ReadNextImageHeader( void )

  Summary:
    Read and prepare the next image header.

  Description:
    This function is set up to the next image resource header.
*/
bool APP_ReadNextImageHeader( void );

/*******************************************************************************
  Function:
    void APP_IsSupportedFile(char *name)

  Summary:
    Callback handler to check if the file is supported.

  Description:
    This function confirms if the files are supported by the application.
*/
bool APP_IsSupportedFile(char *name);

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_SetSlidePauseTime( int timeInSec );

  Summary:
    Sets Slide Pause Interval Time.

  Description:
    This function is set up to be called on a touch event by the slider bar
    in the Settings menu.
*/
void APP_SetSlidePauseTime( int timeInSec );


/*******************************************************************************
  Function:
    void APP_GoToNextSlide( void );

  Summary:
    Set the slideshow to the next slide.

  Description:
    When called, this function sets up any necessary steps to switch to 
    the next slide.
*/
void APP_GoToNextSlide( void );


/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
    MPLAB Harmony application initialization function.

  Description:
    This function initializes the MPLAB Harmony application.  It places the 
    application in its initial state and prepares it to run so that its 
    APP_Tasks function can be called.

  Precondition:
    All other system initialization functions should be called before calling
    this function (in "SYS_Initialize").

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Initialize();
    </code>

  Remarks:
    This function must be called from the SYS_Initialize function.
*/

void APP_Initialize ( void );


/*******************************************************************************
  Function:
    void APP_Tasks ( void )

  Summary:
    MPLAB Harmony Demonstration application tasks function.

  Description:
    This function is the MPLAB Harmony Demonstration application's tasks function. 
    It defines the application's state machine and core logic.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this function.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Tasks();
    </code>

  Remarks:
    This function must be called from SYS_Tasks function.
 */

void APP_Tasks( void );


#endif /* _APP_H */

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

/*******************************************************************************
 End of File
 */