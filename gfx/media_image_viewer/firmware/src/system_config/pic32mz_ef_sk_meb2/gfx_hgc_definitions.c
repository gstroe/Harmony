/*******************************************************************************
  MPLAB Harmony Graphics Composer Generated Implementation File

  File Name:
    gfx_hgc_definitions.c

  Summary:
    Build-time generated implementation from the MPLAB Harmony
    Graphics Composer.

  Description:
    Build-time generated implementation from the MPLAB Harmony
    Graphics Composer.

    Created with MPLAB Harmony Version 1.10
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

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
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

#include "gfx_hgc_definitions.h"

/*** Default GFX GOL Scheme ***/
#define GFX_SCHEMEDEFAULT GOLSchemeDefault
extern GFX_GOL_OBJ_SCHEME GFX_SCHEMEDEFAULT;

/*** HGC-specified GFX GOL Scheme ***/
GFX_GOL_OBJ_SCHEME *gfxScheme0;
GFX_GOL_OBJ_SCHEME *gfxScheme1;
GFX_GOL_OBJ_SCHEME *gfxScheme2;
GFX_GOL_OBJ_SCHEME *gfxScheme3;

/*** Generated Asset References ***/
extern const GFX_RESOURCE_HDR cog;
extern const GFX_RESOURCE_HDR cog_outline;
extern const GFX_RESOURCE_HDR layers_image;
extern const GFX_RESOURCE_HDR layers_image_outline;
extern const GFX_RESOURCE_HDR script_invert;
extern const GFX_RESOURCE_HDR script_outline;
extern const GFX_RESOURCE_HDR NewHarmonyLogo_Small;
extern const GFX_RESOURCE_HDR RoundHomeButton_Outline;
extern const GFX_RESOURCE_HDR RoundHomeButton;
extern const GFX_RESOURCE_HDR microchipLogo_small;
extern const GFX_RESOURCE_HDR VeraMono;
extern const GFX_RESOURCE_HDR VeraMono14;
extern const GFX_RESOURCE_HDR VeraMono12;

/*** Generated ASCII Text Labels ***/
static const GFX_XCHAR buttonStr_0[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_1[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_2[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_3[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_4[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_5[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_6[] = { 0x0 }; //  
static const GFX_XCHAR radioButtonStr_0[] = { 0x4f, 0x4e, 0x0 }; // ON
static const GFX_XCHAR radioButtonStr_1[] = { 0x4f, 0x46, 0x46, 0x0 }; // OFF
static const GFX_XCHAR radioButtonStr_2[] = { 0x4f, 0x46, 0x46, 0x0 }; // OFF
static const GFX_XCHAR radioButtonStr_3[] = { 0x4f, 0x4e, 0x0 }; // ON
static const GFX_XCHAR staticTextStr_0[] = { 0x50, 0x49, 0x43, 0x33, 0x32, 0x4d, 0x5a, 0x20, 0x53, 0x44, 0x20, 0x43, 0x61, 0x72, 0x64, 0x20, 0x49, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x56, 0x69, 0x65, 0x77, 0x65, 0x72, 0x0 }; // PIC32MZ SD Card Image Viewer
static const GFX_XCHAR staticTextStr_1[] = { 0x53, 0x6c, 0x69, 0x64, 0x65, 0x73, 0x68, 0x6f, 0x77, 0x0 }; // Slideshow
static const GFX_XCHAR staticTextStr_2[] = { 0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0 }; // Settings
static const GFX_XCHAR staticTextStr_3[] = { 0x46, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x73, 0x0 }; // Features
static const GFX_XCHAR staticTextStr_4[] = { 0x53, 0x6c, 0x69, 0x64, 0x65, 0x73, 0x68, 0x6f, 0x77, 0x20, 0x54, 0x69, 0x70, 0x73, 0xA, 0xA, 0x31, 0x29, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x68, 0x6f, 0x6c, 0x64, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x63, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x74, 0xA, 0x20, 0x20, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0xA, 0xA, 0x32, 0x29, 0x20, 0x44, 0x6f, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x44, 0x20, 0x63, 0x61, 0x72, 0x64, 0x20, 0x77, 0x68, 0x69, 0x6c, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x20, 0xA, 0x20, 0x20, 0x20, 0x69, 0x73, 0x20, 0x6c, 0x6f, 0x61, 0x64, 0x69, 0x6e, 0x67, 0xA, 0xA, 0x33, 0x29, 0x20, 0x54, 0x61, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x73, 0x6b, 0x69, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6e, 0x65, 0x78, 0x74, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x0 }; // Slideshow Tips1) Press and hold to remain on the current   image2) Do not remove the SD card while the image    is loading3) Tap to skip to the next image
static const GFX_XCHAR staticTextStr_5[] = { 0x49, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x4d, 0x65, 0x74, 0x61, 0x20, 0x44, 0x61, 0x74, 0x61, 0x0 }; // Image Meta Data
static const GFX_XCHAR staticTextStr_6[] = { 0x44, 0x6f, 0x75, 0x62, 0x6c, 0x65, 0x20, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x69, 0x6e, 0x67, 0x0 }; // Double Buffering
static const GFX_XCHAR staticTextStr_7[] = { 0x29, 0x0 }; // )
static const GFX_XCHAR staticTextStr_8[] = { 0x73, 0x65, 0x63, 0x0 }; // sec
static const GFX_XCHAR staticTextStr_9[] = { 0x53, 0x6c, 0x69, 0x64, 0x65, 0x20, 0x50, 0x61, 0x75, 0x73, 0x65, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x0 }; // Slide Pause Time
static const GFX_XCHAR staticTextStr_10[] = { 0x28, 0x0 }; // (
static const GFX_XCHAR staticTextStr_11[] = { 0x32, 0x0 }; // 2
static const GFX_XCHAR staticTextStr_12[] = { 0x35, 0x0 }; // 5
static const GFX_XCHAR staticTextStr_13[] = { 0x30, 0x0 }; // 0
static const GFX_XCHAR staticTextStr_14[] = { 0x44, 0x65, 0x6d, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20, 0x46, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x73, 0xA, 0xA, 0x57, 0x51, 0x56, 0x47, 0x41, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0xA, 0x49, 0x6e, 0x74, 0x65, 0x67, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20, 0x4d, 0x54, 0x43, 0x48, 0x36, 0x33, 0x30, 0x31, 0x20, 0x50, 0x43, 0x41, 0x50, 0x20, 0x74, 0x6f, 0x75, 0x63, 0x68, 0x20, 0x69, 0x6e, 0x70, 0x75, 0x74, 0xA, 0x4c, 0x6f, 0x77, 0x2d, 0x43, 0x6f, 0x73, 0x74, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x2d, 0x6c, 0x65, 0x73, 0x73, 0x20, 0x47, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x72, 0xA, 0x52, 0x65, 0x61, 0x6c, 0x2d, 0x74, 0x69, 0x6d, 0x65, 0x20, 0x4a, 0x50, 0x45, 0x47, 0x2c, 0x20, 0x42, 0x4d, 0x50, 0x2c, 0x20, 0x47, 0x49, 0x46, 0x20, 0x64, 0x65, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0xA, 0x54, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x61, 0x72, 0x65, 0x6e, 0x74, 0x20, 0x47, 0x49, 0x46, 0x20, 0x73, 0x75, 0x70, 0x70, 0x6f, 0x72, 0x74, 0xA, 0x49, 0x6d, 0x61, 0x67, 0x65, 0x73, 0x20, 0x72, 0x65, 0x74, 0x72, 0x69, 0x65, 0x76, 0x65, 0x64, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x53, 0x44, 0x20, 0x63, 0x61, 0x72, 0x64, 0x20, 0xA, 0x46, 0x41, 0x54, 0x33, 0x32, 0x20, 0x46, 0x69, 0x6c, 0x65, 0x20, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0xA, 0x55, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x31, 0x36, 0x2d, 0x62, 0x69, 0x74, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x73, 0x75, 0x70, 0x70, 0x6f, 0x72, 0x74, 0xA, 0x0 }; // Demonstrated FeaturesWQVGA displayIntegrated MTCH6301 PCAP touch inputLow-Cost Controller-less Graphics driverReal-time JPEG, BMP, GIF decodingTransparent GIF supportImages retrieved from SD card FAT32 File SystemUp to 16-bit color depth support
static const GFX_XCHAR staticTextStr_15[] = { 0x4d, 0x65, 0x74, 0x61, 0x20, 0x44, 0x61, 0x74, 0x61, 0x20, 0x54, 0x65, 0x78, 0x74, 0x0 }; // Meta Data Text
static const GFX_XCHAR staticTextStr_16[] = { 0x50, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x20, 0x69, 0x6e, 0x73, 0x65, 0x72, 0x74, 0x20, 0x53, 0x44, 0x20, 0x63, 0x61, 0x72, 0x64, 0x0 }; // Please insert SD card
static const GFX_XCHAR staticTextStr_17[] = { 0x53, 0x65, 0x61, 0x72, 0x63, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x73, 0x0 }; // Searching for images
/*** HGC Object Global ***/
HGC_OBJECTS hgcObj;
static HGC_STATES hgcState;

/*** Message System Service Globals ***/
SYS_MSG_INSTANCE iSysMsg = SYS_MSG_0;
SYS_OBJ_HANDLE hSysMsg, hMsgType, hMailbox;

/******************************************************************************
  Function:
    void GFX_HGC_RegisterAppTouchCallback ( SYS_MSG_RECEIVE_CALLBACK msgCallBackFunction )

  Summary:
    This function allows the application to register a callback to allow access 
    to the current touch behavior
 */
void GFX_HGC_RegisterAppTouchCallback ( SYS_MSG_RECEIVE_CALLBACK msgCallBackFunction )
{
    hgcObj.msgCallBackFunction = msgCallBackFunction;
}


/******************************************************************************
  Function:
    void GFX_HGC_TouchMessageCallback ( SYS_MSG_OBJECT *pMsg )

  Summary:
    This function sets up the Message System Service to route touch callbacks
    to the GOL message system  
 */
void GFX_HGC_TouchMessageCallback ( SYS_MSG_OBJECT *pMsg )
{
    static GFX_GOL_MESSAGE gMsg;

    gMsg.type = pMsg->nMessageTypeID;
    gMsg.uiEvent = pMsg->param0;
    gMsg.param1 = pMsg->param1;
    gMsg.param2 = pMsg->param2;

    GFX_GOL_ObjectMessage(GFX_INDEX_0, &gMsg);

    if (hgcObj.msgCallBackFunction != NULL)
    {
        hgcObj.msgCallBackFunction(pMsg);
    }
}


/******************************************************************************
  Function:
    HGC_SCREEN_STATES GFX_HGC_GetScreenState ( void )

  Remarks:
    This function returns the screen state
 */
HGC_SCREEN_STATES GFX_HGC_GetScreenState ( void )
{
    return hgcObj.screenState;
}


/******************************************************************************
  Function:
    void GFX_HGC_SetScreenState ( HGC_SCREEN_STATES newState )

  Remarks:
    This function sets the screen state machine to a new state
 */
void GFX_HGC_SetScreenState ( HGC_SCREEN_STATES newState )
{
    hgcObj.prevRefreshState = hgcObj.screenState;
    hgcObj.screenState = newState;
}


/******************************************************************************
  Function:
    void GFX_HGC_Initialize ( void )

  Summary:
    This function initializes the HGC state machine.  
 */
void GFX_HGC_Initialize ( void )
{
    hgcState = HGC_STATE_INIT;
    hgcObj.screenState = HGC_SCREEN_STATE_INIT;
    hgcObj.msgCallBackFunction = NULL;
}


/******************************************************************************
  Function:
    void GFX_HGC_Setup ( void )

  Summary:
    This function sets up the GOL message callback and draw callbacks.  
 */
void GFX_HGC_Setup ( void )
{
    hMsgType = SYS_MSG_TypeCreate(SYS_MSG_0, TYPE_TOUCHSCREEN , 0);
    hMailbox = SYS_MSG_MailboxOpen(SYS_MSG_0, (SYS_MSG_RECEIVE_CALLBACK) &GFX_HGC_TouchMessageCallback );
    SYS_MSG_MailboxMsgAdd( hMailbox, hMsgType);

    GFX_GOL_MessageCallbackSet(GFX_INDEX_0, &GFX_HGC_MessageCallback);
    GFX_GOL_DrawCallbackSet(GFX_INDEX_0, &GFX_HGC_DrawCallback);

    GFX_HGC_InitializeSchemes();

}

/******************************************************************************
  Function:
    void GFX_HGC_Tasks (SYS_MODULE_OBJ gfxObject);

  Summary:
    This function is called in SYS_Tasks.  The intent wait until the GFX library
    is initialized before supplying items to draw
*/
void GFX_HGC_Tasks  (SYS_MODULE_OBJ gfxObject)
{
    switch ( hgcState )
    {
        case HGC_STATE_INIT:
            if (GFX_Status(gfxObject)==SYS_STATUS_READY)
            {
                GFX_HGC_Setup();
                hgcState = HGC_STATE_RUNNING;
            }
            break;

        case HGC_STATE_RUNNING:
            break;

        default:
            break;
    }
}

/******************************************************************************
  Function:
    void GFX_HGC_SchemeCreate ( void )

  Summary:
    Allocates memory for a new scheme
 */
GFX_GOL_OBJ_SCHEME *GFX_HGC_SchemeCreate(void)
{
    GFX_GOL_OBJ_SCHEME  *pTemp;

    pTemp = (GFX_GOL_OBJ_SCHEME *)GFX_malloc(sizeof(GFX_GOL_OBJ_SCHEME));

    if(pTemp != NULL)
    {
        memcpy(pTemp, &GFX_SCHEMEDEFAULT, sizeof(GFX_GOL_OBJ_SCHEME));
    }

    return (pTemp);
}

/******************************************************************************
  Function:
    void GFX_HGC_InitializeSchemes ( void )

  Summary:
    Initializes all HGC-specified schemes
 */
void GFX_HGC_InitializeSchemes( void )
{
    gfxScheme0 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme0->AlphaValue =        GFX_SCHEME_ALPHA_0;
#endif
    gfxScheme0->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_0, GFX_SCHEME_PRIMARY_COLOR_GREEN_0, GFX_SCHEME_PRIMARY_COLOR_BLUE_0);
    gfxScheme0->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_0, GFX_SCHEME_SECONDARY_COLOR_GREEN_0, GFX_SCHEME_SECONDARY_COLOR_BLUE_0);
    gfxScheme0->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_0, GFX_SCHEME_DISABLED_COLOR_GREEN_0, GFX_SCHEME_DISABLED_COLOR_BLUE_0);
    gfxScheme0->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_0, GFX_SCHEME_BACKGROUND_COLOR_GREEN_0, GFX_SCHEME_BACKGROUND_COLOR_BLUE_0);
	gfxScheme0->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_0;
    gfxScheme0->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_0, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_0, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_0);
    gfxScheme0->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_0, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_0, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_0);
	gfxScheme0->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_0, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_0, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_0);
    gfxScheme0->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_0, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_0, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_0);
    gfxScheme0->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_0, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_0, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_0);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme0->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_0, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_0, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_0);
	gfxScheme0->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_0, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_0, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_0);
#endif
    gfxScheme0->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_0;
    gfxScheme0->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_0;
    gfxScheme0->pFont =             (GFX_RESOURCE_HDR*)&VeraMono14;
    gfxScheme0->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme0->fillStyle =         GFX_SCHEME_FILL_STYLE_0;
	gfxScheme0->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_0;

    gfxScheme1 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme1->AlphaValue =        GFX_SCHEME_ALPHA_1;
#endif
    gfxScheme1->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_1, GFX_SCHEME_PRIMARY_COLOR_GREEN_1, GFX_SCHEME_PRIMARY_COLOR_BLUE_1);
    gfxScheme1->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_1, GFX_SCHEME_SECONDARY_COLOR_GREEN_1, GFX_SCHEME_SECONDARY_COLOR_BLUE_1);
    gfxScheme1->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_1, GFX_SCHEME_DISABLED_COLOR_GREEN_1, GFX_SCHEME_DISABLED_COLOR_BLUE_1);
    gfxScheme1->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_1, GFX_SCHEME_BACKGROUND_COLOR_GREEN_1, GFX_SCHEME_BACKGROUND_COLOR_BLUE_1);
	gfxScheme1->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_1;
    gfxScheme1->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_1, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_1, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_1);
    gfxScheme1->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_1, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_1, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_1);
	gfxScheme1->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_1, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_1, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_1);
    gfxScheme1->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_1, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_1, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_1);
    gfxScheme1->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_1, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_1, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_1);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme1->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_1, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_1, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_1);
	gfxScheme1->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_1, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_1, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_1);
#endif
    gfxScheme1->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_1;
    gfxScheme1->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_1;
    gfxScheme1->pFont =             (GFX_RESOURCE_HDR*)&VeraMono12;
    gfxScheme1->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme1->fillStyle =         GFX_SCHEME_FILL_STYLE_1;
	gfxScheme1->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_1;

    gfxScheme2 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme2->AlphaValue =        GFX_SCHEME_ALPHA_2;
#endif
    gfxScheme2->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_2, GFX_SCHEME_PRIMARY_COLOR_GREEN_2, GFX_SCHEME_PRIMARY_COLOR_BLUE_2);
    gfxScheme2->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_2, GFX_SCHEME_SECONDARY_COLOR_GREEN_2, GFX_SCHEME_SECONDARY_COLOR_BLUE_2);
    gfxScheme2->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_2, GFX_SCHEME_DISABLED_COLOR_GREEN_2, GFX_SCHEME_DISABLED_COLOR_BLUE_2);
    gfxScheme2->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_2, GFX_SCHEME_BACKGROUND_COLOR_GREEN_2, GFX_SCHEME_BACKGROUND_COLOR_BLUE_2);
	gfxScheme2->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_2;
    gfxScheme2->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_2, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_2, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_2);
    gfxScheme2->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_2, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_2, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_2);
	gfxScheme2->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_2, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_2, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_2);
    gfxScheme2->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_2, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_2, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_2);
    gfxScheme2->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_2, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_2, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_2);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme2->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_2, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_2, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_2);
	gfxScheme2->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_2, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_2, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_2);
#endif
    gfxScheme2->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_2;
    gfxScheme2->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_2;
    gfxScheme2->pFont =             (GFX_RESOURCE_HDR*)&VeraMono;
    gfxScheme2->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme2->fillStyle =         GFX_SCHEME_FILL_STYLE_2;
	gfxScheme2->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_2;

    gfxScheme3 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme3->AlphaValue =        GFX_SCHEME_ALPHA_3;
#endif
    gfxScheme3->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_3, GFX_SCHEME_PRIMARY_COLOR_GREEN_3, GFX_SCHEME_PRIMARY_COLOR_BLUE_3);
    gfxScheme3->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_3, GFX_SCHEME_SECONDARY_COLOR_GREEN_3, GFX_SCHEME_SECONDARY_COLOR_BLUE_3);
    gfxScheme3->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_3, GFX_SCHEME_DISABLED_COLOR_GREEN_3, GFX_SCHEME_DISABLED_COLOR_BLUE_3);
    gfxScheme3->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_3, GFX_SCHEME_BACKGROUND_COLOR_GREEN_3, GFX_SCHEME_BACKGROUND_COLOR_BLUE_3);
	gfxScheme3->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_3;
    gfxScheme3->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_3, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_3, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_3);
    gfxScheme3->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_3, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_3, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_3);
	gfxScheme3->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_3, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_3, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_3);
    gfxScheme3->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_3, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_3, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_3);
    gfxScheme3->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_3, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_3, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_3);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme3->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_3, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_3, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_3);
	gfxScheme3->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_3, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_3, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_3);
#endif
    gfxScheme3->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_3;
    gfxScheme3->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_3;
    gfxScheme3->pFont =             (GFX_RESOURCE_HDR*)&VeraMono;
    gfxScheme3->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme3->fillStyle =         GFX_SCHEME_FILL_STYLE_3;
	gfxScheme3->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_3;

}

/******************************************************************************
  Function: 
    bool GFX_HGC_MESSAGECallback(uint16_t objMsg, GFX_GOL_OBJ_HEADER* pObj, GFX_GOL_MESSAGE* pMsg)

  Input: 
    objMsg - translated message for the object,
    pObj - pointer to the object,
    pMsg - pointer to the non-translated, raw GOL message

  Output: 
    If the function returns non-zero the message will be processed by default

  Remarks: 
    GFX_GOL_MESSAGECallback() function calls it each time the valid message for the GOL object is received.
 */
bool GFX_HGC_MessageCallback(GFX_GOL_TRANSLATED_ACTION objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    // process messages for demo screens
    switch (hgcObj.screenState)
    {
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MainMenu:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideShowInstructions:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Settings:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FeatureList:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_WaitForMediaConnect:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ReadingMedia:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
      default:
            // process message by default
            return true;
    }
    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_DrawCallback( void )

  Output: 
    If the function returns non-zero the draw control will be passed to GOL

  Remarks: 
    GFX_GOL_Draw() function calls it each time when GOL objects drawing is 
    completed. HGC-specified draw data is grouped by screens states. It takes 
    two states to complete the drawing of each screen.  GFX GOL objects are drawn
    first and then GFX Primitives are drawn next to ensure primitives are not
    covered by GOL objects.
 */
bool GFX_HGC_DrawCallback( void )
{
    switch (hgcObj.screenState)
    {
        case HGC_SCREEN_STATE_INIT:
            //Draw the primary screen as selected in the Composer
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_WaitForMediaConnect);
            return true;
        case HGC_SCREEN_STATE_SETUP_SCREEN_MainMenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MainMenu);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MainMenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MainMenu);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MainMenu:
            GFX_HGC_SetupScreen(MainMenu);
            GFX_HGC_DrawScreen_GOL(MainMenu);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainMenu);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainMenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MainMenu);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MainMenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MainMenu);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MainMenu:
            GFX_HGC_DrawScreen_Primitives(MainMenu);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MainMenu);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MainMenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_MainMenu);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MainMenu:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SlideShowInstructions:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SlideShowInstructions);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SlideShowInstructions:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SlideShowInstructions);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SlideShowInstructions:
            GFX_HGC_SetupScreen(SlideShowInstructions);
            GFX_HGC_DrawScreen_GOL(SlideShowInstructions);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SlideShowInstructions);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SlideShowInstructions:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions:
            GFX_HGC_DrawScreen_Primitives(SlideShowInstructions);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideShowInstructions);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideShowInstructions:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Settings:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Settings);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Settings:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Settings);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Settings:
            GFX_HGC_SetupScreen(Settings);
            GFX_HGC_DrawScreen_GOL(Settings);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Settings);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Settings:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Settings);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Settings:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Settings);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Settings:
            GFX_HGC_DrawScreen_Primitives(Settings);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Settings);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Settings:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Settings);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Settings:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_FeatureList:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FeatureList);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FeatureList:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FeatureList);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FeatureList:
            GFX_HGC_SetupScreen(FeatureList);
            GFX_HGC_DrawScreen_GOL(FeatureList);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FeatureList);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FeatureList:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FeatureList);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FeatureList:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FeatureList);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FeatureList:
            GFX_HGC_DrawScreen_Primitives(FeatureList);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FeatureList);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FeatureList:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_FeatureList);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FeatureList:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SlideScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SlideScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SlideScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SlideScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SlideScreen:
            GFX_HGC_SetupScreen(SlideScreen);
            GFX_HGC_DrawScreen_GOL(SlideScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SlideScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SlideScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SlideScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SlideScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SlideScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SlideScreen:
            GFX_HGC_DrawScreen_Primitives(SlideScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SlideScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SlideScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_WaitForMediaConnect:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_WaitForMediaConnect);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_WaitForMediaConnect:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_WaitForMediaConnect);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_WaitForMediaConnect:
            GFX_HGC_SetupScreen(WaitForMediaConnect);
            GFX_HGC_DrawScreen_GOL(WaitForMediaConnect);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_WaitForMediaConnect);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_WaitForMediaConnect:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect:
            GFX_HGC_DrawScreen_Primitives(WaitForMediaConnect);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_WaitForMediaConnect);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_WaitForMediaConnect:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ReadingMedia:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ReadingMedia);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ReadingMedia:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ReadingMedia);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ReadingMedia:
            GFX_HGC_SetupScreen(ReadingMedia);
            GFX_HGC_DrawScreen_GOL(ReadingMedia);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ReadingMedia);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ReadingMedia:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ReadingMedia);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ReadingMedia:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ReadingMedia);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ReadingMedia:
            GFX_HGC_DrawScreen_Primitives(ReadingMedia);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ReadingMedia);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ReadingMedia:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ReadingMedia);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ReadingMedia:
            break;
        default:
            return true; // release drawing control to GOL by default
    }

    return true; // release drawing control to GOL
}

/******************************************************************************
  Function: 
    void GFX_HGC_SetupScreen( uint8_t  screenId )

  Remarks: 
    Clears current screen and starts a fresh screen with its background color
 */
void GFX_HGC_SetupScreen(uint8_t screenId)
{
    switch (screenId)
    {
        case MainMenu:
			// disable double buffering
            GFX_DoubleBufferDisable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SlideShowInstructions:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Settings:
			// disable double buffering
            GFX_DoubleBufferDisable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case FeatureList:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SlideScreen:
			// disable double buffering
                GFX_DoubleBufferDisable(GFX_INDEX_0);                    
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case WaitForMediaConnect:
			// disable double buffering
            GFX_DoubleBufferDisable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ReadingMedia:
			// disable double buffering
            GFX_DoubleBufferDisable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        default:
            break;
    }
}


/******************************************************************************
  Function: 
    bool GFX_HGC_HasCurrentScreenDrawn( void )

  Output: 
    Returns true if the current screen is completely drawn

  Remarks: 
    Allows application to know if the current screen is finished drawing
 */
bool GFX_HGC_HasCurrentScreenDrawn( void )
{
    switch (hgcObj.screenState)
    {
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MainMenu:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideShowInstructions:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Settings:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FeatureList:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideScreen:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_WaitForMediaConnect:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ReadingMedia:
            return true;
        default:
            return false;
    }

    return false;
}


/******************************************************************************
  Function: 
    bool GFX_HGC_ChangeScreen( uint8_t  screenId )

  Output: 
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    Can be called to initiate GFX Library to draw a new screen
 */
bool GFX_HGC_ChangeScreen(uint8_t screenId)
{
    switch (screenId)
    {
        case MainMenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MainMenu);
            break;
        case SlideShowInstructions:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SlideShowInstructions);
            break;
        case Settings:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Settings);
            break;
        case FeatureList:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_FeatureList);
            break;
        case SlideScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SlideScreen);
            break;
        case WaitForMediaConnect:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_WaitForMediaConnect);
            break;
        case ReadingMedia:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ReadingMedia);
            break;
        default:
            return false;
    }

    return true; // release drawing control to GOL
}

/******************************************************************************
  Function: 
    bool GFX_HGC_DrawScreen_GOL( uint8_t  screenId )

  Output: 
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    HGC-specified GFX GOL objects are drawn here, grouped by screen.
    The draw order is reverse Z-ordered.
 */
bool GFX_HGC_DrawScreen_GOL(uint8_t screenId)
{
    switch (screenId)
    {
        case MainMenu:
            GFX_HGC_DrawItem(ButtonSlides);
            GFX_HGC_DrawItem(ButtonSettings);
            GFX_HGC_DrawItem(ButtonFeatureList);
            GFX_HGC_DrawItem(e_st_Features);
            GFX_HGC_DrawItem(e_st_Settings);
            GFX_HGC_DrawItem(e_st_Slideshow);
            GFX_HGC_DrawItem(MainMenuHarmonyLogo);
            GFX_HGC_DrawItem(DemoName);
            GFX_HGC_DrawItem(MicrochipLogo);
            break;
        case SlideShowInstructions:
            GFX_HGC_DrawItem(e_st_SlideShowTips);
            GFX_HGC_DrawItem(ButtonProceedToSlide);
            break;
        case Settings:
            GFX_HGC_DrawItem(Slider1);
            GFX_HGC_DrawItem(e_st_0);
            GFX_HGC_DrawItem(e_st_5);
            GFX_HGC_DrawItem(SecondsString);
            GFX_HGC_DrawItem(e_st_OpenBracket);
            GFX_HGC_DrawItem(e_st_SlidePauseTime);
            GFX_HGC_DrawItem(e_st_Second);
            GFX_HGC_DrawItem(e_st_CloseBracket);
            GFX_HGC_DrawItem(ButtonSettingsToMain);
            GFX_HGC_DrawItem(e_st_DoubleBuffering);
            GFX_HGC_DrawItem(e_st_ImageMetaData);
            GFX_HGC_DrawItem(rb_DoubleBufferingOn);
            GFX_HGC_DrawItem(rb_DoubleBufferingOff);
            GFX_HGC_DrawItem(rb_ImageMetaDataOff);
            GFX_HGC_DrawItem(rb_ImageMetaDataOn);
            break;
        case FeatureList:
            GFX_HGC_DrawItem(e_st_DemonstratedFeatures);
            GFX_HGC_DrawItem(ButtonFeatureListToMain);
            break;
        case SlideScreen:
            GFX_HGC_DrawItem(SlidePicture);
            GFX_HGC_DrawItem(ButtonSlideToHome);
            GFX_HGC_DrawItem(e_st_MetaDataText);
            break;
        case WaitForMediaConnect:
            GFX_HGC_DrawItem(e_st_PleaseInsertSDCard);
            break;
        case ReadingMedia:
            GFX_HGC_DrawItem(e_st_LoadingMedia);
            break;
        default:
            return false;
    }

    return true; // release drawing control to GOL
}


/******************************************************************************
  Function: 
    bool GFX_HGC_DrawScreen_Primitives( uint8_t  screenId )

  Output:
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    HGC-specified GFX Primitives are drawn here, grouped by screen.
    GFX Primitives are drawn after GFX GOL Objects to make sure GFX GOL Objects
    do not cover GFX Primitives
 */
bool GFX_HGC_DrawScreen_Primitives(uint8_t screenId)
{
    switch (screenId)
    {
        case MainMenu:
            break;
        case SlideShowInstructions:
            break;
        case Settings:
            break;
        case FeatureList:
            break;
        case SlideScreen:
            break;
        case WaitForMediaConnect:
            break;
        case ReadingMedia:
            break;
        default:
            return true;
    }

    return true; // release drawing control to GOL
}


/******************************************************************************
  Function: 
    bool GFX_HGC_DrawItem(int itemId)

  Output:
    Returns true if a itemId matches an existing item identifier

  Remarks: 
    Every item specified in every screen in HGC is listed in this function
 */
bool GFX_HGC_DrawItem(int itemId)
{
    switch(itemId)
    {
    case ButtonFeatureList:
        hgcObj.pButtonFeatureListObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ButtonFeatureList,      // button ID
                 GFX_BUTTON_LEFT_0,    // left
                 GFX_BUTTON_TOP_0,     // top
                 GFX_BUTTON_RIGHT_0,   // right
                 GFX_BUTTON_BOTTOM_0,  // bottom
                 GFX_BUTTON_RADIUS_0,  // radius
                 GFX_BUTTON_STATE_0,   // state
                 GFX_BUTTON_PRESS_IMAGE_0,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_0,   // release image
                 (GFX_XCHAR*)buttonStr_0,    // text
                 GFX_BUTTON_ALIGNMENT_0,       //alignment
                 GFX_BUTTON_SCHEME_0
                 ); // use alternate scheme
        break;
    case ButtonSettings:
        hgcObj.pButtonSettingsObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ButtonSettings,      // button ID
                 GFX_BUTTON_LEFT_1,    // left
                 GFX_BUTTON_TOP_1,     // top
                 GFX_BUTTON_RIGHT_1,   // right
                 GFX_BUTTON_BOTTOM_1,  // bottom
                 GFX_BUTTON_RADIUS_1,  // radius
                 GFX_BUTTON_STATE_1,   // state
                 GFX_BUTTON_PRESS_IMAGE_1,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_1,   // release image
                 (GFX_XCHAR*)buttonStr_1,    // text
                 GFX_BUTTON_ALIGNMENT_1,       //alignment
                 GFX_BUTTON_SCHEME_1
                 ); // use alternate scheme
        break;
    case ButtonSlides:
        hgcObj.pButtonSlidesObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ButtonSlides,      // button ID
                 GFX_BUTTON_LEFT_2,    // left
                 GFX_BUTTON_TOP_2,     // top
                 GFX_BUTTON_RIGHT_2,   // right
                 GFX_BUTTON_BOTTOM_2,  // bottom
                 GFX_BUTTON_RADIUS_2,  // radius
                 GFX_BUTTON_STATE_2,   // state
                 GFX_BUTTON_PRESS_IMAGE_2,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_2,   // release image
                 (GFX_XCHAR*)buttonStr_2,    // text
                 GFX_BUTTON_ALIGNMENT_2,       //alignment
                 GFX_BUTTON_SCHEME_2
                 ); // use alternate scheme
        break;
    case ButtonProceedToSlide:
        hgcObj.pButtonProceedToSlideObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ButtonProceedToSlide,      // button ID
                 GFX_BUTTON_LEFT_3,    // left
                 GFX_BUTTON_TOP_3,     // top
                 GFX_BUTTON_RIGHT_3,   // right
                 GFX_BUTTON_BOTTOM_3,  // bottom
                 GFX_BUTTON_RADIUS_3,  // radius
                 GFX_BUTTON_STATE_3,   // state
                 GFX_BUTTON_PRESS_IMAGE_3,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_3,   // release image
                 (GFX_XCHAR*)buttonStr_3,    // text
                 GFX_BUTTON_ALIGNMENT_3,       //alignment
                 GFX_BUTTON_SCHEME_3
                 ); // use alternate scheme
        break;
    case ButtonSettingsToMain:
        hgcObj.pButtonSettingsToMainObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ButtonSettingsToMain,      // button ID
                 GFX_BUTTON_LEFT_4,    // left
                 GFX_BUTTON_TOP_4,     // top
                 GFX_BUTTON_RIGHT_4,   // right
                 GFX_BUTTON_BOTTOM_4,  // bottom
                 GFX_BUTTON_RADIUS_4,  // radius
                 GFX_BUTTON_STATE_4,   // state
                 GFX_BUTTON_PRESS_IMAGE_4,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_4,   // release image
                 (GFX_XCHAR*)buttonStr_4,    // text
                 GFX_BUTTON_ALIGNMENT_4,       //alignment
                 GFX_BUTTON_SCHEME_4
                 ); // use alternate scheme
        break;
    case ButtonFeatureListToMain:
        hgcObj.pButtonFeatureListToMainObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ButtonFeatureListToMain,      // button ID
                 GFX_BUTTON_LEFT_5,    // left
                 GFX_BUTTON_TOP_5,     // top
                 GFX_BUTTON_RIGHT_5,   // right
                 GFX_BUTTON_BOTTOM_5,  // bottom
                 GFX_BUTTON_RADIUS_5,  // radius
                 GFX_BUTTON_STATE_5,   // state
                 GFX_BUTTON_PRESS_IMAGE_5,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_5,   // release image
                 (GFX_XCHAR*)buttonStr_5,    // text
                 GFX_BUTTON_ALIGNMENT_5,       //alignment
                 GFX_BUTTON_SCHEME_5
                 ); // use alternate scheme
        break;
    case ButtonSlideToHome:
        hgcObj.pButtonSlideToHomeObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 ButtonSlideToHome,      // button ID
                 GFX_BUTTON_LEFT_6,    // left
                 GFX_BUTTON_TOP_6,     // top
                 GFX_BUTTON_RIGHT_6,   // right
                 GFX_BUTTON_BOTTOM_6,  // bottom
                 GFX_BUTTON_RADIUS_6,  // radius
                 GFX_BUTTON_STATE_6,   // state
                 GFX_BUTTON_PRESS_IMAGE_6,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_6,   // release image
                 (GFX_XCHAR*)buttonStr_6,    // text
                 GFX_BUTTON_ALIGNMENT_6,       //alignment
                 GFX_BUTTON_SCHEME_6
                 ); // use alternate scheme
        break;
    case rb_ImageMetaDataOn:
        hgcObj.prb_ImageMetaDataOnObj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 rb_ImageMetaDataOn,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_0,    // left
                 GFX_RADIOBUTTON_TOP_0,     // top
                 GFX_RADIOBUTTON_RIGHT_0,   // right
                 GFX_RADIOBUTTON_BOTTOM_0,  // bottom 
                 GFX_RADIOBUTTON_STATE_0,   // state
                 (GFX_XCHAR*)radioButtonStr_0,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_0,//alignment
                 GFX_RADIOBUTTON_SCHEME_0,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_0,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_0 //number of groups on screen
                 ); // use alternate scheme
        break;
    case rb_ImageMetaDataOff:
        hgcObj.prb_ImageMetaDataOffObj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 rb_ImageMetaDataOff,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_1,    // left
                 GFX_RADIOBUTTON_TOP_1,     // top
                 GFX_RADIOBUTTON_RIGHT_1,   // right
                 GFX_RADIOBUTTON_BOTTOM_1,  // bottom 
                 GFX_RADIOBUTTON_STATE_1,   // state
                 (GFX_XCHAR*)radioButtonStr_1,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_1,//alignment
                 GFX_RADIOBUTTON_SCHEME_1,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_1,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_1 //number of groups on screen
                 ); // use alternate scheme
        break;
    case rb_DoubleBufferingOff:
        hgcObj.prb_DoubleBufferingOffObj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 rb_DoubleBufferingOff,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_2,    // left
                 GFX_RADIOBUTTON_TOP_2,     // top
                 GFX_RADIOBUTTON_RIGHT_2,   // right
                 GFX_RADIOBUTTON_BOTTOM_2,  // bottom 
                 GFX_RADIOBUTTON_STATE_2,   // state
                 (GFX_XCHAR*)radioButtonStr_2,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_2,//alignment
                 GFX_RADIOBUTTON_SCHEME_2,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_2,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_2 //number of groups on screen
                 ); // use alternate scheme
        break;
    case rb_DoubleBufferingOn:
        hgcObj.prb_DoubleBufferingOnObj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 rb_DoubleBufferingOn,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_3,    // left
                 GFX_RADIOBUTTON_TOP_3,     // top
                 GFX_RADIOBUTTON_RIGHT_3,   // right
                 GFX_RADIOBUTTON_BOTTOM_3,  // bottom 
                 GFX_RADIOBUTTON_STATE_3,   // state
                 (GFX_XCHAR*)radioButtonStr_3,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_3,//alignment
                 GFX_RADIOBUTTON_SCHEME_3,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_3,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_3 //number of groups on screen
                 ); // use alternate scheme
        break;
    case Slider1:
        hgcObj.pSlider1Obj = GFX_GOL_ScrollBarCreate
                (
                 GFX_INDEX_0,
                 Slider1,           // Check Box ID
                 GFX_SCROLLBAR_LEFT_0,        // left
                 GFX_SCROLLBAR_TOP_0,        // top
                 GFX_SCROLLBAR_RIGHT_0,     // right
                 GFX_SCROLLBAR_BOTTOM_0,   // bottom 				 
                 GFX_SCROLLBAR_STATE_0,   //State
                 GFX_SCROLLBAR_RANGE_0,  // range
                 GFX_SCROLLBAR_PAGE_0,  // page 
                 GFX_SCROLLBAR_POS_0,  // pos 
                 GFX_SCROLLBAR_SCHEME_0	//scheme
                 ); // use alternate scheme
        break;
    case DemoName:
        hgcObj.pDemoNameObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 DemoName,      // button ID
                 GFX_STATICTEXT_LEFT_0,    // left
                 GFX_STATICTEXT_TOP_0,     // top
                 GFX_STATICTEXT_RIGHT_0,   // right
                 GFX_STATICTEXT_BOTTOM_0,  // bottom
                 GFX_STATICTEXT_STATE_0,   // state
                 (GFX_XCHAR*)staticTextStr_0,    // text
                 GFX_STATICTEXT_ALIGNMENT_0,       //alignment
                 GFX_STATICTEXT_SCHEME_0
                 ); // use alternate scheme
        break;
    case e_st_Slideshow:
        hgcObj.pe_st_SlideshowObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_Slideshow,      // button ID
                 GFX_STATICTEXT_LEFT_1,    // left
                 GFX_STATICTEXT_TOP_1,     // top
                 GFX_STATICTEXT_RIGHT_1,   // right
                 GFX_STATICTEXT_BOTTOM_1,  // bottom
                 GFX_STATICTEXT_STATE_1,   // state
                 (GFX_XCHAR*)staticTextStr_1,    // text
                 GFX_STATICTEXT_ALIGNMENT_1,       //alignment
                 GFX_STATICTEXT_SCHEME_1
                 ); // use alternate scheme
        break;
    case e_st_Settings:
        hgcObj.pe_st_SettingsObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_Settings,      // button ID
                 GFX_STATICTEXT_LEFT_2,    // left
                 GFX_STATICTEXT_TOP_2,     // top
                 GFX_STATICTEXT_RIGHT_2,   // right
                 GFX_STATICTEXT_BOTTOM_2,  // bottom
                 GFX_STATICTEXT_STATE_2,   // state
                 (GFX_XCHAR*)staticTextStr_2,    // text
                 GFX_STATICTEXT_ALIGNMENT_2,       //alignment
                 GFX_STATICTEXT_SCHEME_2
                 ); // use alternate scheme
        break;
    case e_st_Features:
        hgcObj.pe_st_FeaturesObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_Features,      // button ID
                 GFX_STATICTEXT_LEFT_3,    // left
                 GFX_STATICTEXT_TOP_3,     // top
                 GFX_STATICTEXT_RIGHT_3,   // right
                 GFX_STATICTEXT_BOTTOM_3,  // bottom
                 GFX_STATICTEXT_STATE_3,   // state
                 (GFX_XCHAR*)staticTextStr_3,    // text
                 GFX_STATICTEXT_ALIGNMENT_3,       //alignment
                 GFX_STATICTEXT_SCHEME_3
                 ); // use alternate scheme
        break;
    case e_st_SlideShowTips:
        hgcObj.pe_st_SlideShowTipsObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_SlideShowTips,      // button ID
                 GFX_STATICTEXT_LEFT_4,    // left
                 GFX_STATICTEXT_TOP_4,     // top
                 GFX_STATICTEXT_RIGHT_4,   // right
                 GFX_STATICTEXT_BOTTOM_4,  // bottom
                 GFX_STATICTEXT_STATE_4,   // state
                 (GFX_XCHAR*)staticTextStr_4,    // text
                 GFX_STATICTEXT_ALIGNMENT_4,       //alignment
                 GFX_STATICTEXT_SCHEME_4
                 ); // use alternate scheme
        break;
    case e_st_ImageMetaData:
        hgcObj.pe_st_ImageMetaDataObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_ImageMetaData,      // button ID
                 GFX_STATICTEXT_LEFT_5,    // left
                 GFX_STATICTEXT_TOP_5,     // top
                 GFX_STATICTEXT_RIGHT_5,   // right
                 GFX_STATICTEXT_BOTTOM_5,  // bottom
                 GFX_STATICTEXT_STATE_5,   // state
                 (GFX_XCHAR*)staticTextStr_5,    // text
                 GFX_STATICTEXT_ALIGNMENT_5,       //alignment
                 GFX_STATICTEXT_SCHEME_5
                 ); // use alternate scheme
        break;
    case e_st_DoubleBuffering:
        hgcObj.pe_st_DoubleBufferingObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_DoubleBuffering,      // button ID
                 GFX_STATICTEXT_LEFT_6,    // left
                 GFX_STATICTEXT_TOP_6,     // top
                 GFX_STATICTEXT_RIGHT_6,   // right
                 GFX_STATICTEXT_BOTTOM_6,  // bottom
                 GFX_STATICTEXT_STATE_6,   // state
                 (GFX_XCHAR*)staticTextStr_6,    // text
                 GFX_STATICTEXT_ALIGNMENT_6,       //alignment
                 GFX_STATICTEXT_SCHEME_6
                 ); // use alternate scheme
        break;
    case e_st_CloseBracket:
        hgcObj.pe_st_CloseBracketObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_CloseBracket,      // button ID
                 GFX_STATICTEXT_LEFT_7,    // left
                 GFX_STATICTEXT_TOP_7,     // top
                 GFX_STATICTEXT_RIGHT_7,   // right
                 GFX_STATICTEXT_BOTTOM_7,  // bottom
                 GFX_STATICTEXT_STATE_7,   // state
                 (GFX_XCHAR*)staticTextStr_7,    // text
                 GFX_STATICTEXT_ALIGNMENT_7,       //alignment
                 GFX_STATICTEXT_SCHEME_7
                 ); // use alternate scheme
        break;
    case e_st_Second:
        hgcObj.pe_st_SecondObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_Second,      // button ID
                 GFX_STATICTEXT_LEFT_8,    // left
                 GFX_STATICTEXT_TOP_8,     // top
                 GFX_STATICTEXT_RIGHT_8,   // right
                 GFX_STATICTEXT_BOTTOM_8,  // bottom
                 GFX_STATICTEXT_STATE_8,   // state
                 (GFX_XCHAR*)staticTextStr_8,    // text
                 GFX_STATICTEXT_ALIGNMENT_8,       //alignment
                 GFX_STATICTEXT_SCHEME_8
                 ); // use alternate scheme
        break;
    case e_st_SlidePauseTime:
        hgcObj.pe_st_SlidePauseTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_SlidePauseTime,      // button ID
                 GFX_STATICTEXT_LEFT_9,    // left
                 GFX_STATICTEXT_TOP_9,     // top
                 GFX_STATICTEXT_RIGHT_9,   // right
                 GFX_STATICTEXT_BOTTOM_9,  // bottom
                 GFX_STATICTEXT_STATE_9,   // state
                 (GFX_XCHAR*)staticTextStr_9,    // text
                 GFX_STATICTEXT_ALIGNMENT_9,       //alignment
                 GFX_STATICTEXT_SCHEME_9
                 ); // use alternate scheme
        break;
    case e_st_OpenBracket:
        hgcObj.pe_st_OpenBracketObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_OpenBracket,      // button ID
                 GFX_STATICTEXT_LEFT_10,    // left
                 GFX_STATICTEXT_TOP_10,     // top
                 GFX_STATICTEXT_RIGHT_10,   // right
                 GFX_STATICTEXT_BOTTOM_10,  // bottom
                 GFX_STATICTEXT_STATE_10,   // state
                 (GFX_XCHAR*)staticTextStr_10,    // text
                 GFX_STATICTEXT_ALIGNMENT_10,       //alignment
                 GFX_STATICTEXT_SCHEME_10
                 ); // use alternate scheme
        break;
    case SecondsString:
        hgcObj.pSecondsStringObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 SecondsString,      // button ID
                 GFX_STATICTEXT_LEFT_11,    // left
                 GFX_STATICTEXT_TOP_11,     // top
                 GFX_STATICTEXT_RIGHT_11,   // right
                 GFX_STATICTEXT_BOTTOM_11,  // bottom
                 GFX_STATICTEXT_STATE_11,   // state
                 (GFX_XCHAR*)staticTextStr_11,    // text
                 GFX_STATICTEXT_ALIGNMENT_11,       //alignment
                 GFX_STATICTEXT_SCHEME_11
                 ); // use alternate scheme
        break;
    case e_st_5:
        hgcObj.pe_st_5Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_5,      // button ID
                 GFX_STATICTEXT_LEFT_12,    // left
                 GFX_STATICTEXT_TOP_12,     // top
                 GFX_STATICTEXT_RIGHT_12,   // right
                 GFX_STATICTEXT_BOTTOM_12,  // bottom
                 GFX_STATICTEXT_STATE_12,   // state
                 (GFX_XCHAR*)staticTextStr_12,    // text
                 GFX_STATICTEXT_ALIGNMENT_12,       //alignment
                 GFX_STATICTEXT_SCHEME_12
                 ); // use alternate scheme
        break;
    case e_st_0:
        hgcObj.pe_st_0Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_0,      // button ID
                 GFX_STATICTEXT_LEFT_13,    // left
                 GFX_STATICTEXT_TOP_13,     // top
                 GFX_STATICTEXT_RIGHT_13,   // right
                 GFX_STATICTEXT_BOTTOM_13,  // bottom
                 GFX_STATICTEXT_STATE_13,   // state
                 (GFX_XCHAR*)staticTextStr_13,    // text
                 GFX_STATICTEXT_ALIGNMENT_13,       //alignment
                 GFX_STATICTEXT_SCHEME_13
                 ); // use alternate scheme
        break;
    case e_st_DemonstratedFeatures:
        hgcObj.pe_st_DemonstratedFeaturesObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_DemonstratedFeatures,      // button ID
                 GFX_STATICTEXT_LEFT_14,    // left
                 GFX_STATICTEXT_TOP_14,     // top
                 GFX_STATICTEXT_RIGHT_14,   // right
                 GFX_STATICTEXT_BOTTOM_14,  // bottom
                 GFX_STATICTEXT_STATE_14,   // state
                 (GFX_XCHAR*)staticTextStr_14,    // text
                 GFX_STATICTEXT_ALIGNMENT_14,       //alignment
                 GFX_STATICTEXT_SCHEME_14
                 ); // use alternate scheme
        break;
    case e_st_MetaDataText:
        hgcObj.pe_st_MetaDataTextObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_MetaDataText,      // button ID
                 GFX_STATICTEXT_LEFT_15,    // left
                 GFX_STATICTEXT_TOP_15,     // top
                 GFX_STATICTEXT_RIGHT_15,   // right
                 GFX_STATICTEXT_BOTTOM_15,  // bottom
                 GFX_STATICTEXT_STATE_15,   // state
                 (GFX_XCHAR*)staticTextStr_15,    // text
                 GFX_STATICTEXT_ALIGNMENT_15,       //alignment
                 GFX_STATICTEXT_SCHEME_15
                 ); // use alternate scheme
        break;
    case e_st_PleaseInsertSDCard:
        hgcObj.pe_st_PleaseInsertSDCardObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_PleaseInsertSDCard,      // button ID
                 GFX_STATICTEXT_LEFT_16,    // left
                 GFX_STATICTEXT_TOP_16,     // top
                 GFX_STATICTEXT_RIGHT_16,   // right
                 GFX_STATICTEXT_BOTTOM_16,  // bottom
                 GFX_STATICTEXT_STATE_16,   // state
                 (GFX_XCHAR*)staticTextStr_16,    // text
                 GFX_STATICTEXT_ALIGNMENT_16,       //alignment
                 GFX_STATICTEXT_SCHEME_16
                 ); // use alternate scheme
        break;
    case e_st_LoadingMedia:
        hgcObj.pe_st_LoadingMediaObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_LoadingMedia,      // button ID
                 GFX_STATICTEXT_LEFT_17,    // left
                 GFX_STATICTEXT_TOP_17,     // top
                 GFX_STATICTEXT_RIGHT_17,   // right
                 GFX_STATICTEXT_BOTTOM_17,  // bottom
                 GFX_STATICTEXT_STATE_17,   // state
                 (GFX_XCHAR*)staticTextStr_17,    // text
                 GFX_STATICTEXT_ALIGNMENT_17,       //alignment
                 GFX_STATICTEXT_SCHEME_17
                 ); // use alternate scheme
        break;
    case MicrochipLogo:
        hgcObj.pMicrochipLogoObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 MicrochipLogo,      // picture ID
                 GFX_PICTURE_LEFT_0,    // left
                 GFX_PICTURE_TOP_0,     // top
                 GFX_PICTURE_RIGHT_0,   // right				 
                 GFX_PICTURE_BOTTOM_0,  // bottom
				 GFX_PICTURE_STATE_0,   // state                 
                 GFX_PICTURE_SCALE_0,     // scale
                 (GFX_RESOURCE_HDR*)&microchipLogo_small,    // bitmap
                 GFX_PICTURE_SCHEME_0
                 );
        break;
    case MainMenuHarmonyLogo:
        hgcObj.pMainMenuHarmonyLogoObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 MainMenuHarmonyLogo,      // picture ID
                 GFX_PICTURE_LEFT_1,    // left
                 GFX_PICTURE_TOP_1,     // top
                 GFX_PICTURE_RIGHT_1,   // right				 
                 GFX_PICTURE_BOTTOM_1,  // bottom
				 GFX_PICTURE_STATE_1,   // state                 
                 GFX_PICTURE_SCALE_1,     // scale
                 (GFX_RESOURCE_HDR*)&NewHarmonyLogo_Small,    // bitmap
                 GFX_PICTURE_SCHEME_1
                 );
        break;
    case SlidePicture:
        hgcObj.pSlidePictureObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 SlidePicture,      // picture ID
                 GFX_PICTURE_LEFT_2,    // left
                 GFX_PICTURE_TOP_2,     // top
                 GFX_PICTURE_RIGHT_2,   // right				 
                 GFX_PICTURE_BOTTOM_2,  // bottom
				 GFX_PICTURE_STATE_2,   // state                 
                 GFX_PICTURE_SCALE_2,     // scale
                 NULL,    // bitmap
                 GFX_PICTURE_SCHEME_2
                 );
        break;
	default:
		return false; // process by default
    }

    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Button events
 */
bool GFX_HGC_MsgButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case ButtonFeatureList:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(FeatureList);
            }
			
            return true;
        case ButtonSettings:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Settings);
            }
			
            return true;
        case ButtonSlides:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(SlideShowInstructions);
            }
			
            return true;
        case ButtonProceedToSlide:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID)
				{
				     SYS_TMR_ObjectDelete(appData.sysTmrHandle);        
				     appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
				}
				appData.state = APP_STATE_DRAW_NEXT_SLIDE;
				GFX_HGC_ChangeScreen(SlideScreen);

            }
			
            return true;
        case ButtonSettingsToMain:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainMenu);
            }
			
            return true;
        case ButtonFeatureListToMain:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainMenu);
            }
			
            return true;
        case ButtonSlideToHome:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainMenu);
				appData.state = APP_STATE_IDLE;

            }
			
            return true;
        default:
            return false; // process by default
    }

    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgRadioButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Radio Button events
 */
bool GFX_HGC_MsgRadioButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case rb_ImageMetaDataOn:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// Action
				APP_MetaDataEnable(true);

            }
			
            return true;
        case rb_ImageMetaDataOff:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// Action
				APP_MetaDataEnable(false);

            }
			
            return true;
        case rb_DoubleBufferingOff:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// Action
				APP_DoubleBufferingEnable(false);

            }
			
            return true;
        case rb_DoubleBufferingOn:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// Action
				APP_DoubleBufferingEnable(true);

            }
			
            return true;
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgScrollBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Scroll Bar events
 */
bool GFX_HGC_MsgScrollBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case Slider1:
			if (objMsg == GFX_GOL_SCROLLBAR_ACTION_INC)
            {
				// Scrollbar Increment Event Code
				// Action
				APP_SetSlidePauseTime( GFX_GOL_ScrollBarPositionGet(hgcObj.pSlider1Obj) );

            }
            if (objMsg == GFX_GOL_SCROLLBAR_ACTION_DEC)
            {
                // Scrollbar Decrement Event Code
				// Action
				APP_SetSlidePauseTime( GFX_GOL_ScrollBarPositionGet(hgcObj.pSlider1Obj) );

            }
			
            return true;
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgStaticTexts(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Static Text events
 */
bool GFX_HGC_MsgStaticTexts(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case e_st_SlideShowTips:
			if (objMsg == GFX_GOL_STATICTEXT_ACTION_SELECTED)
            {
				// Static Text Selected Event Code
				// Action
				if (appData.sysTmrHandle != SYS_TMR_HANDLE_INVALID)
				{
				     SYS_TMR_ObjectDelete(appData.sysTmrHandle);        
				     appData.sysTmrHandle = SYS_TMR_HANDLE_INVALID;
				}
				appData.state = APP_STATE_DRAW_NEXT_SLIDE;
				GFX_HGC_ChangeScreen(SlideScreen);

            }
			
            return true;
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgPictures(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Picture Control events
 */
bool GFX_HGC_MsgPictures(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case SlidePicture:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        default:
            return false; // default false as it is not processed
    }    
}


