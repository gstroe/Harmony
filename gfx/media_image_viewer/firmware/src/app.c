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
#include "gfx/gfx_types_resource.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
extern uint16_t IMG_bDownScalingFactor;
bool lastMetaDataEnable = false; 
bool lastDoubleBufferEnable = false; 

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
*/
void APP_TouchMessageCallback ( SYS_MSG_OBJECT *pMsg )
{
    if (pMsg == NULL)
        return;

    if (pMsg->param0 != EVENT_INVALID)
    {
        appData.mostRecentTouchX = pMsg->param1;
        appData.mostRecentTouchY = pMsg->param2;
    }
    
    appData.currentTouchBehavior = pMsg->param0;

//    This is test code to try to stop an animated GIF midway thru    
//    if (hgcObj.screenState < HGC_SCREEN_STATE_SETUP_SCREEN_SlideScreen
//            || hgcObj.screenState > HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideScreen)
//        return;
//
//    if (appData.imageReadyToDraw == true
//            && (appData.imageResourceHeader.type & GFX_TYPE_MASK) == GFX_RESOURCE_TYPE_GIF)
//    {
//        if (appData.currentTouchBehavior == EVENT_RELEASE)
//        {
//            appData.animationStopRequested = true;
//        }
//    }
}

/*******************************************************************************
  Function:
    void APP_MetaDataEnable(bool enable)

  Summary:
    API to from the UI to application to enable/disable meta data display

  Description:
    When called, this function updates the meta data display flag in 
    the application
*/
void APP_MetaDataEnable(bool enable)
{
    appData.metaDataEnable = enable;    
}

/*******************************************************************************
  Function:
    void APP_DoubleBufferingEnable(bool enable)

  Summary:
    API to from the UI to application to enable/disable double buffering

  Description:
    When called, this function updates the double buffering flag in 
    the application
*/
void APP_DoubleBufferingEnable(bool enable)
{
    appData.doubleBufferingEnable = enable;    
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
    if (appData.state != APP_STATE_WAIT_BETWEEN_SLIDE)
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
    void APP_IsSupportedFile(char *name)

  Summary:
    Callback handler to check if file is supported

  Description:
    This function confirms if the files are supported by the application
*/
bool APP_IsSupportedFile(char *name)
{
    int i = 0;
    do
    {
       i++;
    }while(name[i]!= '.' && name[i] != '\0');
    
    if(name[i] == '\0')
        return false;
    
    if((name[i+1] == 'j' && name[i+2] == 'p' && name[i+3] == 'g') || (name[i+1] == 'J' && name[i+2] == 'P' && name[i+3] == 'G'))
         return true;
    else if ((name[i+1] == 'b' && name[i+2] == 'm' && name[i+3] == 'p') || (name[i+1] == 'B' && name[i+2] == 'M' && name[i+3] == 'P'))
         return true;
    else if ((name[i+1] == 'g' && name[i+2] == 'i' && name[i+3] == 'f') || (name[i+1] == 'G' && name[i+2] == 'I' && name[i+3] == 'F'))
         return true;
    else
         return false;
}


/*******************************************************************************
  Function:
    SYS_FS_RESULT APP_FS_ReadDirFlat(const char *fname, uint8_t *dir_count, SYS_FS_FSTAT * dir_table, bool isRoot)


  Summary:
    Read Directory and populate the valid file names

  Description:
    This function confirm reads a directory and populates valid file names
*/
SYS_FS_RESULT APP_FS_ReadDirFlat(const char *fname, uint8_t *dir_count, SYS_FS_FSTAT * dir_table, bool isRoot)
{
    SYS_FS_RESULT ret;
    appData.dirHandle = SYS_FS_DirOpen(fname);
    if(appData.dirHandle == SYS_FS_HANDLE_INVALID)
    {
        return SYS_FS_RES_FAILURE;
    }
    *dir_count = 0;
    
    do
    {
        if(appData.totalFiles < APP_DISK_MAX_FILES)
        {
            ret = SYS_FS_DirRead(appData.dirHandle,&appData.dirstat);

            // End of this directory
            if(appData.dirstat.fname[0] == '\0')
            {
                break;
            }

            if(ret!= SYS_FS_RES_FAILURE)
            {
                if(appData.dirstat.fattrib != SYS_FS_ATTR_DIR)
                {
                    if(APP_IsSupportedFile(appData.dirstat.fname))
                    {
                        strcpy(appData.fileNameTable[appData.totalFiles].path, fname);

                        strcat(appData.fileNameTable[appData.totalFiles].path, "/");

                        strcat(appData.fileNameTable[appData.totalFiles].path, appData.dirstat.fname);

                        (appData.totalFiles)++;
                    }
                }
                else if(appData.dirstat.fattrib == SYS_FS_ATTR_DIR && appData.dirstat.fname[0] != '.') // Skip ".\" and "..\" directories
                {
                    if(*dir_count < APP_DISK_MAX_DIRS)
                    {
                        dir_table[*dir_count]=appData.dirstat;
                        (*dir_count)++;
                    }
                }
            }
        }
        else
        {
            ret = SYS_FS_RES_FAILURE;
            break;
        }
    }while(ret==SYS_FS_RES_SUCCESS);
     
    SYS_FS_DirClose(appData.dirHandle);
    return ret;
}


/*******************************************************************************
  Function:
    void APP_TraverseAllFiles(APP_DISK_FILE_NODE node, bool isRoot)


  Summary:
    Recursively traverse a file structure

  Description:
    This function traverses a file structure
*/
void APP_TraverseAllFiles(APP_DISK_FILE_NODE node, bool isRoot)
{
    int i;
    SYS_FS_RESULT ret;

    uint8_t totalDir = 0;
    SYS_FS_FSTAT dirTable[APP_DISK_MAX_DIRS];

    ret = APP_FS_ReadDirFlat(node.path, &totalDir, dirTable, isRoot);

    if(ret == SYS_FS_RES_FAILURE)
    {
        return;
    }

    APP_DISK_FILE_NODE child_node;

    isRoot = false;
    for(i = 0; i < totalDir; i++)
    {

        child_node.fstat = dirTable[i];

        strcpy(child_node.path, node.path);
        if(!isRoot)
        {
            strcat(child_node.path, "/");
        }
        strcat(child_node.path, child_node.fstat.fname);

        APP_TraverseAllFiles(child_node, false);
    }     
    return;
 }

/*******************************************************************************
  Function:
    void APP_IncrementImageIndex()

  Summary:
    Increment the image index to the next one, wrap to 0 if it is beyond the limit

  Description:
    This is function increments the image index so that the next image can be
    read
*/
void APP_IncrementImageIndex()
{
    appData.imageIndex++;
    if(appData.imageIndex >= appData.totalFiles)
    {
        appData.imageIndex = 0;                
    }
}

/*******************************************************************************
  Function:
    void APP_ManageSettingsButtons()

  Summary:
    Handles the displaying of button state in the settings menu

  Description:
    This is function handles the button states in the settings menu
*/
void APP_ManageSettingsButtons()
{ 
    if (appData.metaDataEnable)
    {
        GFX_GOL_RadioButtonCheckSet(hgcObj.prb_ImageMetaDataOnObj, rb_ImageMetaDataOn);
    }
    else
    {
        GFX_GOL_RadioButtonCheckSet(hgcObj.prb_ImageMetaDataOffObj, rb_ImageMetaDataOff);
    }                
    
#ifndef GFX_CONFIG_DOUBLE_BUFFERING_DISABLE
    if (appData.doubleBufferingEnable)
    {
        GFX_GOL_RadioButtonCheckSet(hgcObj.prb_DoubleBufferingOnObj, rb_DoubleBufferingOn);
    }
    else
    {
        GFX_GOL_RadioButtonCheckSet(hgcObj.prb_DoubleBufferingOffObj, rb_DoubleBufferingOff);
    }
#endif
}
/*******************************************************************************
  Function:
    void APP_ManageMetaData()

  Summary:
    Handles the displaying of image meta data

  Description:
    This is function handles the display the image meta data
*/
void APP_ManageMetaData()
{
    static char metaDataText[512] = "\n";
    static char tempStr[64];
    
    if (hgcObj.pe_st_MetaDataTextObj != NULL)
    {
        if (appData.metaDataEnable)
        {
            strcpy(metaDataText, "Filename: ");
            strcat(metaDataText, appData.fileStatus.fname);
            strcat(metaDataText, "\n");
            sprintf(tempStr, "File size: %d kBytes", (appData.fileSize / 1024));
            strcat(metaDataText, tempStr);
            strcat(metaDataText, "\n");
            strcat(metaDataText, "Image Format: ");
            if ((appData.imageResourceHeader.type & GFX_TYPE_MASK) == GFX_RESOURCE_TYPE_JPEG)
            {
                strcat(metaDataText, "JPEG\n");                
            }
            else if ((appData.imageResourceHeader.type & GFX_TYPE_MASK) == GFX_RESOURCE_TYPE_BMP)
            {
                strcat(metaDataText, "Windows BMP\n");                
            }
            else if ((appData.imageResourceHeader.type & GFX_TYPE_MASK) == GFX_RESOURCE_TYPE_GIF)
            {
                if (appData.imageFrameCount <= 1)
                {
                    strcat(metaDataText, "GIF\n");
                }
                else
                {
                    strcat(metaDataText, "Animated GIF\n");
                    sprintf(tempStr, "Number of frames: %d\n", 
                            appData.imageFrameCount);
                    strcat(metaDataText, tempStr);                    
                }
            }
            if (IMG_bDownScalingFactor > 1)
            {
                strcat(metaDataText, "Image Resized: Yes\n");              
                sprintf(tempStr, "Original Resolution: %d x %d\n", 
                        appData.imageResourceHeader.resource.image.width,
                        appData.imageResourceHeader.resource.image.height);
                strcat(metaDataText, tempStr);
                sprintf(tempStr, "Resized Resolution: %d x %d\n", 
                        (appData.imageResourceHeader.resource.image.width / IMG_bDownScalingFactor),
                        (appData.imageResourceHeader.resource.image.height / IMG_bDownScalingFactor));
                strcat(metaDataText, tempStr);
            }
            else
            {
                sprintf(tempStr, "Original Resolution: %d x %d\n", 
                        appData.imageResourceHeader.resource.image.width,
                        appData.imageResourceHeader.resource.image.height);
                strcat(metaDataText, tempStr);
                strcat(metaDataText, "Image Resized: No");                                
            }
            
            GFX_GOL_StaticTextSet(hgcObj.pe_st_MetaDataTextObj, metaDataText);
            GFX_GOL_ObjectStateSet(hgcObj.pe_st_MetaDataTextObj, GFX_GOL_STATICTEXT_DRAW_STATE);
        }
    }
}

/*******************************************************************************
  Function:
    bool APP_ImageFrameComplete(uint16_t frame)

  Summary:
    Callback handler for a frame completion in an animated GIF image 

  Description:
    If double buffering is enabled, this frame completion handler will call
    a buffer swap to reveal the current frame
*/
bool APP_ImageFrameComplete(uint16_t frameCount)
{
    if ((appData.imageResourceHeader.type & GFX_TYPE_MASK) != GFX_RESOURCE_TYPE_GIF)
    {
        return false;
    }
    
    if (frameCount == 1)
    {
#ifndef GFX_CONFIG_DOUBLE_BUFFERING_DISABLE
        GFX_DoubleBufferAreaMark(GFX_INDEX_0, 0, 0, GFX_MaxXGet(GFX_INDEX_0), GFX_MaxYGet(GFX_INDEX_0));        
#endif
    }
    
    if (appData.doubleBufferingEnable == true)
    {
#ifndef GFX_CONFIG_DOUBLE_BUFFERING_DISABLE
        //GFX_DoubleBufferAreaMark(GFX_INDEX_0, 0, 0, GFX_MaxXGet(GFX_INDEX_0), GFX_MaxYGet(GFX_INDEX_0));

#ifdef GFX_CONFIG_VSYNC_ENABLE
        while(DRV_GFX_LCC_VSYNC_GetState() == LCC_VSYNC_FALSE);
#endif
        GFX_DoubleBufferSynchronize(GFX_INDEX_0);
#endif
    }

    appData.imageFrameCount = frameCount;
    
    if (appData.animationStopRequested == true)
    {
        appData.animationStopRequested = false;
        return true;
    }
    
    return false;
}

/*******************************************************************************
  Function:
    void APP_ImageDrawFail()

  Summary:
    Callback handler for image draw fail

  Description:
    This is function handles the image draw fail
*/
void APP_ImageDrawFail()
{   
    if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID)
    {
        SYS_TMR_ObjectDelete(appData.sysTmrHandle);        
        appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
    }

    APP_IncrementImageIndex();
    
    appData.imageReadyToDraw = false;
    appData.state = APP_STATE_WAIT_BETWEEN_SLIDE;    
}


/*******************************************************************************
  Function:
    void APP_ImageDrawComplete()

  Summary:
    Callback handler for image draw completion

  Description:
    This is function handles the image draw completion
*/
void APP_ImageDrawComplete()
{
    //Do not process unless this is the slide screen
    if (hgcObj.screenState < HGC_SCREEN_STATE_SETUP_SCREEN_SlideScreen
            || hgcObj.screenState > HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideScreen)
        return;
    
    if (hgcObj.pButtonSlideToHomeObj != NULL)
    {
        //Make sure the button draws on top of the slide image
        GFX_GOL_ObjectStateSet(hgcObj.pButtonSlideToHomeObj, GFX_GOL_BUTTON_DRAW_STATE);
    }
    
    APP_ManageMetaData();
    
    if (appData.doubleBufferingEnable == true)
    {
#ifndef GFX_CONFIG_DOUBLE_BUFFERING_DISABLE
        GFX_DoubleBufferResume(GFX_INDEX_0);                                       
#endif
    }

    if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID)
    {
        SYS_TMR_ObjectDelete(appData.sysTmrHandle);        
        appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
    }

    APP_IncrementImageIndex();
    
    //This is a work-around due to the File System being blocking and it affects SYS Timer
    if(appData.fileSize >= 0x30000)
    {
        appData.sysTmrHandle = SYS_TMR_DelayMS((appData.fileSize / 1024) * 20
                + appData.slidePauseTime);
    }
    else 
    {
        appData.sysTmrHandle = SYS_TMR_DelayMS(appData.slidePauseTime + 1000);
    }

    appData.imageReadyToDraw = false;
    appData.state = APP_STATE_WAIT_BETWEEN_SLIDE;
}


/*******************************************************************************
  Function:
    void APP_SYSFS_EventHandler(SYS_FS_EVENT event, void * eventData, uintptr_t context);

  Summary:
    Callback handler for SYS FS Events

  Description:
    This is function is setup to be called handle mount and unmount events
*/
void APP_SYSFS_EventHandler(SYS_FS_EVENT event, void * eventData, uintptr_t context)
{
    switch(event)
    {
        case SYS_FS_EVENT_MOUNT:
            GFX_HGC_ChangeScreen(ReadingMedia);
            appData.state =  APP_STATE_MEDIA_MOUNTED;  
            ImageRegisterImageCompleteCallback(APP_ImageDrawComplete);
            ImageRegisterImageFailCallback(APP_ImageDrawFail);
            ImageRegisterFrameCompleteCallback(APP_ImageFrameComplete);
            break;
            
        case SYS_FS_EVENT_UNMOUNT:
            GFX_HGC_ChangeScreen(WaitForMediaConnect);
            
            appData.state = APP_STATE_MEDIA_UNMOUNTED;            
            ImageRegisterImageCompleteCallback(NULL);
            ImageRegisterImageFailCallback(NULL);
            ImageRegisterFrameCompleteCallback(NULL);
            break;
            
        default:
            break;
    }

    appData.imageIndex = 0;
    appData.totalFiles = 0;
    appData.imageReadyToDraw = false;
    appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
    appData.fileHandle = SYS_FS_HANDLE_INVALID;
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

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

    APP_ManageSettingsButtons();

    appData.secondString[0] = (GFX_XCHAR)(0x30 + appData.slidePauseTime / 1000);   
    appData.secondString[1] = (GFX_XCHAR)(0x0);   
    GFX_GOL_StaticTextSet(hgcObj.pSecondsStringObj, appData.secondString);
    GFX_GOL_ObjectStateSet(hgcObj.pSecondsStringObj, GFX_GOL_STATICTEXT_DRAW_STATE);
    GFX_GOL_ScrollBarPositionSet(hgcObj.pSlider1Obj, appData.slidePauseTime / 1000);
    GFX_GOL_ObjectStateSet(hgcObj.pSlider1Obj, GFX_GOL_SCROLLBAR_DRAW_STATE);                
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    bool APP_ReadNextImageHeader()

  Summary:
    Read and prepare the next image header

  Description:
    This is function is setup to the next image resource header
*/
bool APP_ReadNextImageHeader()
{
    bool readSuccess = false;
    
    if (appData.fileHandle != SYS_FS_HANDLE_INVALID)
    {
        SYS_FS_FileClose(appData.fileHandle);
        appData.fileHandle = SYS_FS_HANDLE_INVALID;
    }
    
    if (appData.imageIndex >= 0 && appData.imageIndex < appData.totalFiles)
    {
        appData.fileHandle = SYS_FS_FileOpen(appData.fileNameTable[appData.imageIndex].path, (SYS_FS_FILE_OPEN_READ));

        if (appData.fileHandle != SYS_FS_HANDLE_INVALID)
        {
            readSuccess = true;            

            appData.fileSize = SYS_FS_FileSize(appData.fileHandle);

            if (SYS_FS_FileStat(appData.fileNameTable[appData.imageIndex].path, &(appData.fileStatus)) == SYS_FS_RES_FAILURE)
            {
                readSuccess = false;
            }
            else
            {
                readSuccess = SYS_FS_FileNameGet(appData.fileHandle, (uint8_t*)(appData.fileStatus.fname), 255);
            }            
        }
        else
        {
            readSuccess = false;
        }            
    }
    
    if (!readSuccess)
    {
        //Skip the bad file
        APP_IncrementImageIndex();
        return false;
    }
    
    appData.imageFrameCount = 0;
    appData.animationStopRequested = false;

    if (ImageDecoderParceHeader((IMG_FILE*)appData.fileHandle, &appData.imageResourceHeader, GFX_RESOURCE_MEMORY_FS) == 0)
    {
        return true;
    }
    
    return false;
}

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

    appData.fileHandle = SYS_FS_HANDLE_INVALID;
    appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
    appData.slidePauseTime = 2000;
    appData.totalFiles = 0;
    appData.imageIndex = 0;
    appData.imageReadyToDraw = false;

    appData.metaDataEnable = true;
    appData.doubleBufferingEnable = false;
    
    lastMetaDataEnable = appData.metaDataEnable;
    lastDoubleBufferEnable = appData.doubleBufferingEnable;
    
    appData.rootNode.fstat.fattrib = SYS_FS_ATTR_DIR;
    strcpy(appData.rootNode.path, SYS_FS_MEDIA_IDX0_MOUNT_NAME_VOLUME_IDX0);
    
    GFX_HGC_RegisterAppTouchCallback(APP_TouchMessageCallback);
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
            //Transparency for the rounded edge of the Home button
            GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xFF));
        
            SYS_FS_EventHandlerSet(APP_SYSFS_EventHandler, (uintptr_t)NULL);

            appData.state = APP_STATE_MEDIA_UNMOUNTED;
            break;
        }

        case APP_STATE_MEDIA_UNMOUNTED:
        {
            //Wait for media to mount
            if (hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_WaitForMediaConnect)
            {
                
            }
            break;
        }

        case APP_STATE_MEDIA_MOUNTED:
        {
            if (hgcObj.screenState == HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ReadingMedia)
            {
                APP_TraverseAllFiles(appData.rootNode, true);               
            }
            else if (hgcObj.screenState == HGC_SCREEN_STATE_DISPLAY_SCREEN_ReadingMedia)
            {
                if (appData.totalFiles > 0)
                {
                    GFX_HGC_ChangeScreen(MainMenu);
                    
                    appData.state = APP_STATE_IDLE;
                    
                    //Pre-read the file image header
                    appData.imageReadyToDraw = APP_ReadNextImageHeader();
                }
            }
            
            break;
        }
        
        case APP_STATE_DRAW_NEXT_SLIDE:
        {            
            if (appData.imageReadyToDraw)
            {
                //Only request slide draw after the slide screen has been populated
                if (hgcObj.screenState != HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SlideScreen)
                    break;

                GFX_GOL_PictureControlImageSet(hgcObj.pSlidePictureObj, &appData.imageResourceHeader);
                GFX_GOL_PictureControlPartialSet(hgcObj.pSlidePictureObj, 
                        0, 
                        0, 
                        DISP_HOR_RESOLUTION, 
                        DISP_VER_RESOLUTION);
                GFX_GOL_ObjectStateSet(hgcObj.pSlidePictureObj, GFX_GOL_PICTURECONTROL_DRAW_STATE);    
                GFX_GOL_ObjectStateSet(hgcObj.pButtonSlideToHomeObj, GFX_GOL_BUTTON_DRAW_STATE);
            }
            else
            {
                //Pre-read the file image header
                appData.imageReadyToDraw = APP_ReadNextImageHeader();                
            }
            break;
        }
        
        case APP_STATE_WAIT_BETWEEN_SLIDE:
        {
            if (appData.imageReadyToDraw == false)
            {
                //Pre-read the file image header
                appData.imageReadyToDraw = APP_ReadNextImageHeader();                
            }
            
            if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID
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
            
            appData.state = APP_STATE_DRAW_NEXT_SLIDE;
            GFX_HGC_ChangeScreen(SlideScreen);
            
            break;
        }

        case APP_STATE_IDLE:
        {
            if (hgcObj.screenState == HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Settings)
            {
                APP_ManageSettingsButtons();
                
                appData.secondString[0] = (GFX_XCHAR)(0x30 + appData.slidePauseTime / 1000);   
                appData.secondString[1] = (GFX_XCHAR)(0x0);   
                GFX_GOL_StaticTextSet(hgcObj.pSecondsStringObj, appData.secondString);
                GFX_GOL_ObjectStateSet(hgcObj.pSecondsStringObj, GFX_GOL_STATICTEXT_DRAW_STATE);
                GFX_GOL_ScrollBarPositionSet(hgcObj.pSlider1Obj, appData.slidePauseTime / 1000);
                GFX_GOL_ObjectStateSet(hgcObj.pSlider1Obj, GFX_GOL_SCROLLBAR_DRAW_STATE);                    
            }
            break;
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
