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

    Created with MPLAB Harmony Version 1.09
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
GFX_GOL_OBJ_SCHEME *gfxScheme4;
GFX_GOL_OBJ_SCHEME *gfxScheme5;

/*** Generated Asset References ***/
extern const GFX_RESOURCE_HDR ScienceWorldNight;
extern const GFX_RESOURCE_HDR EnglishBayFireworks;
extern const GFX_RESOURCE_HDR CoalHarbourDay;
extern const GFX_RESOURCE_HDR HomeScreen;
extern const GFX_RESOURCE_HDR cog;
extern const GFX_RESOURCE_HDR cog_outline;
extern const GFX_RESOURCE_HDR layers_image;
extern const GFX_RESOURCE_HDR layers_image_outline;
extern const GFX_RESOURCE_HDR location_pin;
extern const GFX_RESOURCE_HDR location_pin_outline;
extern const GFX_RESOURCE_HDR script_invert;
extern const GFX_RESOURCE_HDR script_outline;
extern const GFX_RESOURCE_HDR home_outline;
extern const GFX_RESOURCE_HDR ct_FeatureList;
extern const GFX_RESOURCE_HDR cs_FeatureList;
extern const GFX_RESOURCE_HDR AutumnGass_JPEG;
extern const GFX_RESOURCE_HDR FalseCreek_JPEG;
extern const GFX_RESOURCE_HDR BoraBoraSunset_JPEG;
extern const GFX_RESOURCE_HDR DowntownVancouver_JPEG;
extern const GFX_RESOURCE_HDR MacBethChart_JPEG;
extern const GFX_RESOURCE_HDR Fishes_JPEG;
extern const GFX_RESOURCE_HDR ParkTrees_JPEG;
extern const GFX_RESOURCE_HDR Rockies_JPEG;
extern const GFX_RESOURCE_HDR SnowLeopard_JPEG;
extern const GFX_RESOURCE_HDR SnowyHills_JPEG;
extern const GFX_RESOURCE_HDR Splash_JPEG;
extern const GFX_RESOURCE_HDR Waterfall_JPEG;
extern const GFX_RESOURCE_HDR Wheats_JPEG;
extern const GFX_RESOURCE_HDR cs_SlideShowInstructions;
extern const GFX_RESOURCE_HDR ct_SlideShowInstructions;
extern const GFX_RESOURCE_HDR RoundHomeButton;
extern const GFX_RESOURCE_HDR RoundHomeButton_Outline;
extern const GFX_RESOURCE_HDR ColorPalette_JPEG;
extern const GFX_RESOURCE_HDR NewHarmonyLogo;
extern const GFX_RESOURCE_HDR NewHarmonyLogo_Small;
extern const GFX_RESOURCE_HDR microchipLogo_small;
extern const GFX_RESOURCE_HDR VeraMono;
extern const GFX_RESOURCE_HDR SimHei36;

/*** Generated ASCII Text Labels ***/
static const GFX_XCHAR buttonStr_0[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_1[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_2[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_3[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_4[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_5[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_6[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_7[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_8[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_9[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_10[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_11[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_12[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_13[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_14[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_15[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_16[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_17[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_18[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_19[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_20[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_21[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_22[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_23[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_24[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_25[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_26[] = { 0x0 }; //  
static const GFX_XCHAR radioButtonStr_0[] = { 0x0 }; //  
static const GFX_XCHAR radioButtonStr_1[] = { 0x0 }; //  
static const GFX_XCHAR radioButtonStr_2[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_0[] = { 0x50, 0x49, 0x43, 0x33, 0x32, 0x20, 0x48, 0x61, 0x72, 0x6d, 0x6f, 0x6e, 0x79, 0x20, 0x47, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x20, 0x53, 0x68, 0x6f, 0x77, 0x63, 0x61, 0x73, 0x65, 0x0 }; // PIC32 Harmony Graphics Showcase
static const GFX_XCHAR staticTextStr_1[] = { 0x53, 0x6c, 0x69, 0x64, 0x65, 0x73, 0x68, 0x6f, 0x77, 0x0 }; // Slideshow
static const GFX_XCHAR staticTextStr_2[] = { 0x54, 0x6f, 0x75, 0x63, 0x68, 0x20, 0x54, 0x65, 0x73, 0x74, 0x0 }; // Touch Test
static const GFX_XCHAR staticTextStr_3[] = { 0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0 }; // Settings
static const GFX_XCHAR staticTextStr_4[] = { 0x46, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x73, 0x0 }; // Features
static const GFX_XCHAR staticTextStr_5[] = { 0x3c, 0x34, 0x0 }; // ??
static const GFX_XCHAR staticTextStr_6[] = { 0x3a, 0x34, 0x0 }; // ??
static const GFX_XCHAR staticTextStr_7[] = { 0x37, 0x26, 0x3f, 0x22, 0x0 }; // ????
static const GFX_XCHAR staticTextStr_8[] = { 0x38, 0x26, 0x3e, 0x22, 0x0 }; // ????
static const GFX_XCHAR staticTextStr_9[] = { 0x2b, 0x2f, 0x23, 0x35, 0x0 }; // ????
static const GFX_XCHAR staticTextStr_10[] = { 0x24, 0x2d, 0x2e, 0x0 }; // ???
static const GFX_XCHAR staticTextStr_11[] = { 0x24, 0x2c, 0x2e, 0x0 }; // ???
static const GFX_XCHAR staticTextStr_12[] = { 0x53, 0x6c, 0x69, 0x64, 0x65, 0x73, 0x68, 0x6f, 0x77, 0x20, 0x54, 0x69, 0x70, 0x73, 0xA, 0xA, 0x31, 0x29, 0x20, 0x54, 0x61, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x65, 0x64, 0x20, 0x74, 0x6f, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6e, 0x65, 0x78, 0x74, 0x20, 0x73, 0x6c, 0x69, 0x64, 0x65, 0xA, 0x32, 0x29, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x68, 0x6f, 0x6c, 0x64, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x63, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x74, 0x20, 0xA, 0x20, 0x20, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0xA, 0x33, 0x29, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69, 0x63, 0x6f, 0x6e, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x74, 0x6f, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x6d, 0x65, 0x6e, 0x75, 0xA, 0xA, 0x34, 0x29, 0x20, 0x53, 0x6c, 0x69, 0x64, 0x65, 0x20, 0x70, 0x61, 0x75, 0x73, 0x65, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x76, 0x61, 0x6c, 0x20, 0x74, 0x69, 0x6d, 0x65, 0x20, 0x63, 0x61, 0x6e, 0x20, 0x62, 0x65, 0x20, 0x63, 0x6f, 0x6e, 0x66, 0x69, 0x67, 0x75, 0x72, 0x65, 0x64, 0x20, 0xA, 0x20, 0x20, 0x20, 0x76, 0x69, 0x61, 0x20, 0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0xA, 0x35, 0x29, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x74, 0x68, 0x65, 0x20, 0x69, 0x63, 0x6f, 0x6e, 0x20, 0x62, 0x65, 0x6c, 0x6f, 0x77, 0x20, 0x74, 0x6f, 0x20, 0x70, 0x72, 0x6f, 0x63, 0x65, 0x65, 0x64, 0x0 }; // Slideshow Tips1) Tap to proceed to the next slide2) Press and hold to remain on the current    image3) Press       icon to return to the main menu4) Slide pause interval time can be configured    via Settings5) Press the icon below to proceed
static const GFX_XCHAR staticTextStr_13[] = { 0x59, 0x3a, 0x0 }; // Y:
static const GFX_XCHAR staticTextStr_14[] = { 0x58, 0x3a, 0x0 }; // X:
static const GFX_XCHAR staticTextStr_15[] = { 0x73, 0x65, 0x63, 0x0 }; // sec
static const GFX_XCHAR staticTextStr_16[] = { 0x30, 0x0 }; // ?
static const GFX_XCHAR staticTextStr_17[] = { 0x29, 0x0 }; // )
static const GFX_XCHAR staticTextStr_18[] = { 0x53, 0x6c, 0x69, 0x64, 0x65, 0x20, 0x50, 0x61, 0x75, 0x73, 0x65, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x0 }; // Slide Pause Time
static const GFX_XCHAR staticTextStr_19[] = { 0x24, 0x2d, 0x2e, 0x42, 0x44, 0x2a, 0x42, 0x0 }; // ???????
static const GFX_XCHAR staticTextStr_20[] = { 0x24, 0x2c, 0x2e, 0x43, 0x44, 0x29, 0x43, 0x0 }; // ???????
static const GFX_XCHAR staticTextStr_21[] = { 0x53, 0x65, 0x6c, 0x65, 0x63, 0x74, 0x20, 0x4c, 0x61, 0x6e, 0x67, 0x75, 0x61, 0x67, 0x65, 0x0 }; // Select Language
static const GFX_XCHAR staticTextStr_22[] = { 0x3b, 0x39, 0x41, 0x27, 0x0 }; // ????
static const GFX_XCHAR staticTextStr_23[] = { 0x3d, 0x39, 0x40, 0x25, 0x0 }; // ????
static const GFX_XCHAR staticTextStr_24[] = { 0x43, 0x68, 0x69, 0x6e, 0x65, 0x73, 0x65, 0x20, 0x53, 0x69, 0x6d, 0x70, 0x6c, 0x69, 0x66, 0x69, 0x65, 0x64, 0x0 }; // Chinese Simplified
static const GFX_XCHAR staticTextStr_25[] = { 0x43, 0x68, 0x69, 0x6e, 0x65, 0x73, 0x65, 0x20, 0x54, 0x72, 0x61, 0x64, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x61, 0x6c, 0x0 }; // Chinese Traditional
static const GFX_XCHAR staticTextStr_26[] = { 0x31, 0x21, 0x20, 0x28, 0x0 }; // ????
static const GFX_XCHAR staticTextStr_27[] = { 0x33, 0x45, 0x20, 0x28, 0x0 }; // ????
static const GFX_XCHAR staticTextStr_28[] = { 0x45, 0x6e, 0x67, 0x6c, 0x69, 0x73, 0x68, 0x0 }; // English
static const GFX_XCHAR staticTextStr_29[] = { 0x28, 0x0 }; // (
static const GFX_XCHAR staticTextStr_30[] = { 0x32, 0x0 }; // 2
static const GFX_XCHAR staticTextStr_31[] = { 0x35, 0x0 }; // 5
static const GFX_XCHAR staticTextStr_32[] = { 0x30, 0x0 }; // 0
static const GFX_XCHAR staticTextStr_33[] = { 0x44, 0x65, 0x6d, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20, 0x46, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x73, 0xA, 0xA, 0x57, 0x56, 0x47, 0x41, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0xA, 0x49, 0x6e, 0x74, 0x65, 0x67, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20, 0x4d, 0x54, 0x43, 0x48, 0x36, 0x33, 0x30, 0x33, 0x20, 0x50, 0x43, 0x41, 0x50, 0x20, 0x74, 0x6f, 0x75, 0x63, 0x68, 0x20, 0x69, 0x6e, 0x70, 0x75, 0x74, 0xA, 0x4c, 0x6f, 0x77, 0x2d, 0x43, 0x6f, 0x73, 0x74, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x2d, 0x6c, 0x65, 0x73, 0x73, 0x20, 0x47, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x72, 0xA, 0x31, 0x36, 0x2d, 0x62, 0x69, 0x74, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x73, 0x75, 0x70, 0x70, 0x6f, 0x72, 0x74, 0x20, 0x28, 0x36, 0x35, 0x35, 0x33, 0x35, 0x20, 0x75, 0x6e, 0x69, 0x71, 0x75, 0x65, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x73, 0x29, 0xA, 0x4a, 0x50, 0x45, 0x47, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x42, 0x4d, 0x50, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x73, 0x20, 0x73, 0x74, 0x6f, 0x72, 0x65, 0x64, 0x20, 0x6f, 0x6e, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x6e, 0x61, 0x6c, 0x20, 0x66, 0x6c, 0x61, 0x73, 0x68, 0xA, 0x52, 0x65, 0x61, 0x6c, 0x2d, 0x74, 0x69, 0x6d, 0x65, 0x20, 0x4a, 0x50, 0x45, 0x47, 0x20, 0x64, 0x65, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x72, 0x65, 0x6e, 0x64, 0x65, 0x72, 0x69, 0x6e, 0x67, 0xA, 0x31, 0x36, 0x2d, 0x62, 0x69, 0x74, 0x20, 0x55, 0x6e, 0x69, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x63, 0x68, 0x61, 0x72, 0x61, 0x63, 0x74, 0x65, 0x72, 0x20, 0x66, 0x6f, 0x6e, 0x74, 0x20, 0x73, 0x75, 0x70, 0x70, 0x6f, 0x72, 0x74, 0xA, 0x4d, 0x75, 0x6c, 0x74, 0x69, 0x6c, 0x69, 0x6e, 0x67, 0x75, 0x61, 0x6c, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x64, 0x20, 0x6d, 0x65, 0x6e, 0x75, 0x20, 0x28, 0x43, 0x68, 0x69, 0x6e, 0x65, 0x73, 0x65, 0x20, 0x54, 0x72, 0x61, 0x64, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x61, 0x6c, 0x20, 0xA, 0x61, 0x6e, 0x64, 0x20, 0x43, 0x68, 0x69, 0x6e, 0x65, 0x73, 0x65, 0x20, 0x53, 0x69, 0x6d, 0x70, 0x6c, 0x69, 0x66, 0x69, 0x65, 0x64, 0x29, 0xA, 0x0 }; // Demonstrated FeaturesWVGA displayIntegrated MTCH6303 PCAP touch inputLow-Cost Controller-less Graphics driver16-bit color depth support (65535 unique colors)JPEG and BMP images stored on internal flashReal-time JPEG decode and rendering16-bit Unicode character font supportMultilingual localized menu (Chinese Traditional and Chinese Simplified)
static const GFX_XCHAR windowTextStr_0[] = { 0x57, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x0 }; // Window

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
    gfxScheme0->pFont =             (GFX_RESOURCE_HDR*)&VeraMono;
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
    gfxScheme1->pFont =             (GFX_RESOURCE_HDR*)&VeraMono;
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
    gfxScheme3->pFont =             (GFX_RESOURCE_HDR*)&SimHei36;
    gfxScheme3->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme3->fillStyle =         GFX_SCHEME_FILL_STYLE_3;
	gfxScheme3->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_3;

    gfxScheme4 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme4->AlphaValue =        GFX_SCHEME_ALPHA_4;
#endif
    gfxScheme4->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_4, GFX_SCHEME_PRIMARY_COLOR_GREEN_4, GFX_SCHEME_PRIMARY_COLOR_BLUE_4);
    gfxScheme4->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_4, GFX_SCHEME_SECONDARY_COLOR_GREEN_4, GFX_SCHEME_SECONDARY_COLOR_BLUE_4);
    gfxScheme4->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_4, GFX_SCHEME_DISABLED_COLOR_GREEN_4, GFX_SCHEME_DISABLED_COLOR_BLUE_4);
    gfxScheme4->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_4, GFX_SCHEME_BACKGROUND_COLOR_GREEN_4, GFX_SCHEME_BACKGROUND_COLOR_BLUE_4);
	gfxScheme4->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_4;
    gfxScheme4->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_4, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_4, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_4);
    gfxScheme4->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_4, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_4, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_4);
	gfxScheme4->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_4, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_4, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_4);
    gfxScheme4->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_4, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_4, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_4);
    gfxScheme4->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_4, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_4, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_4);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme4->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_4, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_4, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_4);
	gfxScheme4->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_4, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_4, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_4);
#endif
    gfxScheme4->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_4;
    gfxScheme4->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_4;
    gfxScheme4->pFont =             (GFX_RESOURCE_HDR*)&VeraMono;
    gfxScheme4->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme4->fillStyle =         GFX_SCHEME_FILL_STYLE_4;
	gfxScheme4->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_4;

    gfxScheme5 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme5->AlphaValue =        GFX_SCHEME_ALPHA_5;
#endif
    gfxScheme5->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_5, GFX_SCHEME_PRIMARY_COLOR_GREEN_5, GFX_SCHEME_PRIMARY_COLOR_BLUE_5);
    gfxScheme5->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_5, GFX_SCHEME_SECONDARY_COLOR_GREEN_5, GFX_SCHEME_SECONDARY_COLOR_BLUE_5);
    gfxScheme5->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_5, GFX_SCHEME_DISABLED_COLOR_GREEN_5, GFX_SCHEME_DISABLED_COLOR_BLUE_5);
    gfxScheme5->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_5, GFX_SCHEME_BACKGROUND_COLOR_GREEN_5, GFX_SCHEME_BACKGROUND_COLOR_BLUE_5);
	gfxScheme5->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_5;
    gfxScheme5->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_5, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_5, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_5);
    gfxScheme5->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_5, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_5, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_5);
	gfxScheme5->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_5, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_5, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_5);
    gfxScheme5->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_5, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_5, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_5);
    gfxScheme5->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_5, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_5, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_5);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme5->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_5, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_5, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_5);
	gfxScheme5->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_5, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_5, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_5);
#endif
    gfxScheme5->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_5;
    gfxScheme5->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_5;
    gfxScheme5->pFont =             (GFX_RESOURCE_HDR*)&VeraMono;
    gfxScheme5->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme5->fillStyle =         GFX_SCHEME_FILL_STYLE_5;
	gfxScheme5->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_5;

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
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideShowInstructions:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Microchip:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ScienceWorld:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_CoalHarbour:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EnglishBay:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AutumnGrass:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FalseCreek:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_BoraBoraSunset:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_DowntownVancouver:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MacBethChart:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Colors:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Fishes:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_PartkTrees:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Rockies:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SnowLeopard:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SnowHills:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Splash:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Waterfall:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Wheats:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Harmony:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_TouchTest:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Settings:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FeatureList:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Lines:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
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
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MainMenu);
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
        case HGC_SCREEN_STATE_SETUP_SCREEN_Microchip:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Microchip);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Microchip:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Microchip);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Microchip:
            GFX_HGC_SetupScreen(Microchip);
            GFX_HGC_DrawScreen_GOL(Microchip);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Microchip);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Microchip:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Microchip);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Microchip:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Microchip);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Microchip:
            GFX_HGC_DrawScreen_Primitives(Microchip);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Microchip);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Microchip:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Microchip);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Microchip:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ScienceWorld:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ScienceWorld);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ScienceWorld:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ScienceWorld);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ScienceWorld:
            GFX_HGC_SetupScreen(ScienceWorld);
            GFX_HGC_DrawScreen_GOL(ScienceWorld);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ScienceWorld);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ScienceWorld:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ScienceWorld);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ScienceWorld:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ScienceWorld);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ScienceWorld:
            GFX_HGC_DrawScreen_Primitives(ScienceWorld);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ScienceWorld);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ScienceWorld:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ScienceWorld);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ScienceWorld:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_CoalHarbour:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_CoalHarbour);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_CoalHarbour:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_CoalHarbour);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_CoalHarbour:
            GFX_HGC_SetupScreen(CoalHarbour);
            GFX_HGC_DrawScreen_GOL(CoalHarbour);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_CoalHarbour);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_CoalHarbour:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_CoalHarbour);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_CoalHarbour:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_CoalHarbour);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_CoalHarbour:
            GFX_HGC_DrawScreen_Primitives(CoalHarbour);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_CoalHarbour);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_CoalHarbour:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_CoalHarbour);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_CoalHarbour:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_EnglishBay:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_EnglishBay);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_EnglishBay:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_EnglishBay);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_EnglishBay:
            GFX_HGC_SetupScreen(EnglishBay);
            GFX_HGC_DrawScreen_GOL(EnglishBay);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_EnglishBay);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_EnglishBay:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_EnglishBay);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_EnglishBay:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_EnglishBay);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_EnglishBay:
            GFX_HGC_DrawScreen_Primitives(EnglishBay);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_EnglishBay);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_EnglishBay:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_EnglishBay);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EnglishBay:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_AutumnGrass:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AutumnGrass);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AutumnGrass:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AutumnGrass);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AutumnGrass:
            GFX_HGC_SetupScreen(AutumnGrass);
            GFX_HGC_DrawScreen_GOL(AutumnGrass);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AutumnGrass);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AutumnGrass:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AutumnGrass);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AutumnGrass:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AutumnGrass);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AutumnGrass:
            GFX_HGC_DrawScreen_Primitives(AutumnGrass);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AutumnGrass);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AutumnGrass:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_AutumnGrass);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AutumnGrass:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_FalseCreek:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FalseCreek);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FalseCreek:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FalseCreek);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FalseCreek:
            GFX_HGC_SetupScreen(FalseCreek);
            GFX_HGC_DrawScreen_GOL(FalseCreek);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FalseCreek);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FalseCreek:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FalseCreek);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FalseCreek:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FalseCreek);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FalseCreek:
            GFX_HGC_DrawScreen_Primitives(FalseCreek);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FalseCreek);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FalseCreek:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_FalseCreek);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FalseCreek:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_BoraBoraSunset:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_BoraBoraSunset);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_BoraBoraSunset:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_BoraBoraSunset);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_BoraBoraSunset:
            GFX_HGC_SetupScreen(BoraBoraSunset);
            GFX_HGC_DrawScreen_GOL(BoraBoraSunset);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_BoraBoraSunset);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_BoraBoraSunset:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_BoraBoraSunset);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_BoraBoraSunset:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_BoraBoraSunset);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_BoraBoraSunset:
            GFX_HGC_DrawScreen_Primitives(BoraBoraSunset);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_BoraBoraSunset);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_BoraBoraSunset:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_BoraBoraSunset);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_BoraBoraSunset:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_DowntownVancouver:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_DowntownVancouver);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_DowntownVancouver:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_DowntownVancouver);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_DowntownVancouver:
            GFX_HGC_SetupScreen(DowntownVancouver);
            GFX_HGC_DrawScreen_GOL(DowntownVancouver);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_DowntownVancouver);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_DowntownVancouver:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_DowntownVancouver);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_DowntownVancouver:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_DowntownVancouver);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_DowntownVancouver:
            GFX_HGC_DrawScreen_Primitives(DowntownVancouver);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_DowntownVancouver);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_DowntownVancouver:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_DowntownVancouver);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_DowntownVancouver:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_MacBethChart:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MacBethChart);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MacBethChart:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MacBethChart);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MacBethChart:
            GFX_HGC_SetupScreen(MacBethChart);
            GFX_HGC_DrawScreen_GOL(MacBethChart);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MacBethChart);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MacBethChart:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MacBethChart);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MacBethChart:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MacBethChart);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MacBethChart:
            GFX_HGC_DrawScreen_Primitives(MacBethChart);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MacBethChart);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MacBethChart:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_MacBethChart);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MacBethChart:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Colors:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Colors);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Colors:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Colors);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Colors:
            GFX_HGC_SetupScreen(Colors);
            GFX_HGC_DrawScreen_GOL(Colors);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Colors);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Colors:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Colors);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Colors:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Colors);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Colors:
            GFX_HGC_DrawScreen_Primitives(Colors);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Colors);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Colors:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Colors);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Colors:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Fishes:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Fishes);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Fishes:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Fishes);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Fishes:
            GFX_HGC_SetupScreen(Fishes);
            GFX_HGC_DrawScreen_GOL(Fishes);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Fishes);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Fishes:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Fishes);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Fishes:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Fishes);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Fishes:
            GFX_HGC_DrawScreen_Primitives(Fishes);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Fishes);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Fishes:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Fishes);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Fishes:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_PartkTrees:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_PartkTrees);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_PartkTrees:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_PartkTrees);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_PartkTrees:
            GFX_HGC_SetupScreen(PartkTrees);
            GFX_HGC_DrawScreen_GOL(PartkTrees);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_PartkTrees);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_PartkTrees:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_PartkTrees);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_PartkTrees:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_PartkTrees);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_PartkTrees:
            GFX_HGC_DrawScreen_Primitives(PartkTrees);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_PartkTrees);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_PartkTrees:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_PartkTrees);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_PartkTrees:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Rockies:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Rockies);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Rockies:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Rockies);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Rockies:
            GFX_HGC_SetupScreen(Rockies);
            GFX_HGC_DrawScreen_GOL(Rockies);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Rockies);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Rockies:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Rockies);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Rockies:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Rockies);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Rockies:
            GFX_HGC_DrawScreen_Primitives(Rockies);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Rockies);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Rockies:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Rockies);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Rockies:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SnowLeopard:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SnowLeopard);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SnowLeopard:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SnowLeopard);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SnowLeopard:
            GFX_HGC_SetupScreen(SnowLeopard);
            GFX_HGC_DrawScreen_GOL(SnowLeopard);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SnowLeopard);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SnowLeopard:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SnowLeopard);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SnowLeopard:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SnowLeopard);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SnowLeopard:
            GFX_HGC_DrawScreen_Primitives(SnowLeopard);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SnowLeopard);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SnowLeopard:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SnowLeopard);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SnowLeopard:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_SnowHills:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SnowHills);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SnowHills:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SnowHills);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SnowHills:
            GFX_HGC_SetupScreen(SnowHills);
            GFX_HGC_DrawScreen_GOL(SnowHills);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SnowHills);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SnowHills:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SnowHills);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SnowHills:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SnowHills);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SnowHills:
            GFX_HGC_DrawScreen_Primitives(SnowHills);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SnowHills);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SnowHills:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_SnowHills);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SnowHills:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Splash:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Splash);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Splash:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Splash);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Splash:
            GFX_HGC_SetupScreen(Splash);
            GFX_HGC_DrawScreen_GOL(Splash);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Splash);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Splash:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Splash);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Splash:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Splash);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Splash:
            GFX_HGC_DrawScreen_Primitives(Splash);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Splash);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Splash:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Splash);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Splash:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Waterfall:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Waterfall);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Waterfall:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Waterfall);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Waterfall:
            GFX_HGC_SetupScreen(Waterfall);
            GFX_HGC_DrawScreen_GOL(Waterfall);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Waterfall);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Waterfall:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Waterfall);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Waterfall:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Waterfall);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Waterfall:
            GFX_HGC_DrawScreen_Primitives(Waterfall);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Waterfall);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Waterfall:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Waterfall);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Waterfall:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Wheats:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Wheats);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Wheats:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Wheats);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Wheats:
            GFX_HGC_SetupScreen(Wheats);
            GFX_HGC_DrawScreen_GOL(Wheats);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Wheats);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Wheats:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Wheats);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Wheats:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Wheats);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Wheats:
            GFX_HGC_DrawScreen_Primitives(Wheats);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Wheats);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Wheats:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Wheats);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Wheats:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Harmony:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Harmony);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Harmony:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Harmony);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Harmony:
            GFX_HGC_SetupScreen(Harmony);
            GFX_HGC_DrawScreen_GOL(Harmony);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Harmony);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Harmony:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Harmony);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Harmony:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Harmony);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Harmony:
            GFX_HGC_DrawScreen_Primitives(Harmony);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Harmony);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Harmony:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Harmony);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Harmony:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_TouchTest:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_TouchTest);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_TouchTest:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_TouchTest);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_TouchTest:
            GFX_HGC_SetupScreen(TouchTest);
            GFX_HGC_DrawScreen_GOL(TouchTest);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_TouchTest);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_TouchTest:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_TouchTest);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_TouchTest:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_TouchTest);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_TouchTest:
            GFX_HGC_DrawScreen_Primitives(TouchTest);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_TouchTest);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_TouchTest:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_TouchTest);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_TouchTest:
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
        case HGC_SCREEN_STATE_SETUP_SCREEN_Lines:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Lines);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Lines:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Lines);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Lines:
            GFX_HGC_SetupScreen(Lines);
            GFX_HGC_DrawScreen_GOL(Lines);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Lines);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Lines:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Lines);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Lines:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Lines);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Lines:
            GFX_HGC_DrawScreen_Primitives(Lines);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Lines);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Lines:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Lines);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Lines:
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
			// disable double buffering
            GFX_DoubleBufferDisable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Microchip:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ScienceWorld:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case CoalHarbour:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case EnglishBay:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case AutumnGrass:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case FalseCreek:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case BoraBoraSunset:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case DowntownVancouver:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case MacBethChart:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Colors:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Fishes:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case PartkTrees:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Rockies:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SnowLeopard:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case SnowHills:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Splash:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Waterfall:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Wheats:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Harmony:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case TouchTest:
			// disable double buffering
            GFX_DoubleBufferDisable(GFX_INDEX_0);
			
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
			// disable double buffering
            GFX_DoubleBufferDisable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Lines:
			// disable double buffering
            GFX_DoubleBufferDisable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
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
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Microchip:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ScienceWorld:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_CoalHarbour:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EnglishBay:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AutumnGrass:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FalseCreek:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_BoraBoraSunset:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_DowntownVancouver:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MacBethChart:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Colors:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Fishes:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_PartkTrees:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Rockies:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SnowLeopard:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_SnowHills:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Splash:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Waterfall:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Wheats:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Harmony:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_TouchTest:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Settings:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_FeatureList:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Lines:
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
        case Microchip:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Microchip);
            break;
        case ScienceWorld:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ScienceWorld);
            break;
        case CoalHarbour:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_CoalHarbour);
            break;
        case EnglishBay:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_EnglishBay);
            break;
        case AutumnGrass:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_AutumnGrass);
            break;
        case FalseCreek:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_FalseCreek);
            break;
        case BoraBoraSunset:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_BoraBoraSunset);
            break;
        case DowntownVancouver:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_DowntownVancouver);
            break;
        case MacBethChart:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MacBethChart);
            break;
        case Colors:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Colors);
            break;
        case Fishes:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Fishes);
            break;
        case PartkTrees:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_PartkTrees);
            break;
        case Rockies:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Rockies);
            break;
        case SnowLeopard:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SnowLeopard);
            break;
        case SnowHills:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_SnowHills);
            break;
        case Splash:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Splash);
            break;
        case Waterfall:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Waterfall);
            break;
        case Wheats:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Wheats);
            break;
        case Harmony:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Harmony);
            break;
        case TouchTest:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_TouchTest);
            break;
        case Settings:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Settings);
            break;
        case FeatureList:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_FeatureList);
            break;
        case Lines:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Lines);
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
            GFX_HGC_DrawItem(cs_st_SlideShow);
            GFX_HGC_DrawItem(ct_st_SlideShow);
            GFX_HGC_DrawItem(c_st_Features);
            GFX_HGC_DrawItem(ct_st_TouchTest);
            GFX_HGC_DrawItem(cs_st_TouchTest);
            GFX_HGC_DrawItem(ct_st_Settings);
            GFX_HGC_DrawItem(cs_st_Settings);
            GFX_HGC_DrawItem(SlidesButton);
            GFX_HGC_DrawItem(SettingsButton);
            GFX_HGC_DrawItem(TouchButton);
            GFX_HGC_DrawItem(FeatureListButton);
            GFX_HGC_DrawItem(e_st_Features);
            GFX_HGC_DrawItem(e_st_Settings);
            GFX_HGC_DrawItem(e_st_TouchTest);
            GFX_HGC_DrawItem(e_st_Slideshow);
            GFX_HGC_DrawItem(e_st_DemoName);
            break;
        case SlideShowInstructions:
            GFX_HGC_DrawItem(ct_p_SlideShowTips);
            GFX_HGC_DrawItem(cs_p_SlideShowTips);
            GFX_HGC_DrawItem(e_st_SlideShowTips);
            GFX_HGC_DrawItem(SlideShowTipIcon);
            GFX_HGC_DrawItem(Button23);
            break;
        case Microchip:
            GFX_HGC_DrawItem(Picture4);
            GFX_HGC_DrawItem(Button7);
            break;
        case ScienceWorld:
            GFX_HGC_DrawItem(Picture3);
            GFX_HGC_DrawItem(Button1);
            break;
        case CoalHarbour:
            GFX_HGC_DrawItem(Picture1);
            GFX_HGC_DrawItem(Button2);
            break;
        case EnglishBay:
            GFX_HGC_DrawItem(Picture2);
            GFX_HGC_DrawItem(Button3);
            break;
        case AutumnGrass:
            GFX_HGC_DrawItem(Picture6);
            GFX_HGC_DrawItem(Button8);
            break;
        case FalseCreek:
            GFX_HGC_DrawItem(Picture7);
            GFX_HGC_DrawItem(Button9);
            break;
        case BoraBoraSunset:
            GFX_HGC_DrawItem(Picture8);
            GFX_HGC_DrawItem(Button10);
            break;
        case DowntownVancouver:
            GFX_HGC_DrawItem(Picture9);
            GFX_HGC_DrawItem(Button11);
            break;
        case MacBethChart:
            GFX_HGC_DrawItem(Picture10);
            GFX_HGC_DrawItem(Button13);
            break;
        case Colors:
            GFX_HGC_DrawItem(Picture20);
            GFX_HGC_DrawItem(Button24);
            break;
        case Fishes:
            GFX_HGC_DrawItem(Picture11);
            GFX_HGC_DrawItem(Button14);
            break;
        case PartkTrees:
            GFX_HGC_DrawItem(Picture12);
            GFX_HGC_DrawItem(Button15);
            break;
        case Rockies:
            GFX_HGC_DrawItem(Picture13);
            GFX_HGC_DrawItem(Button16);
            break;
        case SnowLeopard:
            GFX_HGC_DrawItem(Picture15);
            GFX_HGC_DrawItem(Button18);
            break;
        case SnowHills:
            GFX_HGC_DrawItem(Picture16);
            GFX_HGC_DrawItem(Button19);
            break;
        case Splash:
            GFX_HGC_DrawItem(Picture17);
            GFX_HGC_DrawItem(Button20);
            break;
        case Waterfall:
            GFX_HGC_DrawItem(Picture18);
            GFX_HGC_DrawItem(Button21);
            break;
        case Wheats:
            GFX_HGC_DrawItem(Picture19);
            GFX_HGC_DrawItem(Button22);
            break;
        case Harmony:
            GFX_HGC_DrawItem(Picture5);
            GFX_HGC_DrawItem(Button12);
            break;
        case TouchTest:
            GFX_HGC_DrawItem(TouchArea);
            GFX_HGC_DrawItem(XPos);
            GFX_HGC_DrawItem(YPos);
            GFX_HGC_DrawItem(StaticText10);
            GFX_HGC_DrawItem(StaticText11);
            GFX_HGC_DrawItem(Button4);
            break;
        case Settings:
            GFX_HGC_DrawItem(Slider1);
            GFX_HGC_DrawItem(e_st_0);
            GFX_HGC_DrawItem(e_st_5);
            GFX_HGC_DrawItem(SecondsString);
            GFX_HGC_DrawItem(e_st_OpenBracket);
            GFX_HGC_DrawItem(RadioButtonChineseTrad);
            GFX_HGC_DrawItem(RadioButtonChineseSimpl);
            GFX_HGC_DrawItem(RadioButtonEnglish);
            GFX_HGC_DrawItem(e_st_English);
            GFX_HGC_DrawItem(ct_st_ChineseTraditional);
            GFX_HGC_DrawItem(cs_st_ChineseSimplified);
            GFX_HGC_DrawItem(e_st_ChineseTraditional);
            GFX_HGC_DrawItem(e_st_ChineseSimplified);
            GFX_HGC_DrawItem(cs_st_SelectLanguage);
            GFX_HGC_DrawItem(ct_st_SelectLanguage);
            GFX_HGC_DrawItem(e_st_SelectLanguage);
            GFX_HGC_DrawItem(cs_st_SlidePauseTime);
            GFX_HGC_DrawItem(ct_st_SlidePauseTime);
            GFX_HGC_DrawItem(e_st_SlidePauseTime);
            GFX_HGC_DrawItem(e_st_CloseBracket);
            GFX_HGC_DrawItem(c_st_Second);
            GFX_HGC_DrawItem(e_st_Second);
            GFX_HGC_DrawItem(Button5);
            break;
        case FeatureList:
            GFX_HGC_DrawItem(cs_p_FeatureList);
            GFX_HGC_DrawItem(ct_p_FeatureList);
            GFX_HGC_DrawItem(e_st_DemonstratedFeatures);
            GFX_HGC_DrawItem(Button6);
            break;
        case Lines:
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
            GFX_HGC_DrawItem(Harmony_Logo);
            GFX_HGC_DrawItem(Microchip_Logo);
            GFX_HGC_DrawItem(Line1);
            GFX_HGC_DrawItem(Line19);
            GFX_HGC_DrawItem(Line20);
            GFX_HGC_DrawItem(Line21);
            break;
        case SlideShowInstructions:
            break;
        case Microchip:
            break;
        case ScienceWorld:
            break;
        case CoalHarbour:
            break;
        case EnglishBay:
            break;
        case AutumnGrass:
            break;
        case FalseCreek:
            break;
        case BoraBoraSunset:
            break;
        case DowntownVancouver:
            break;
        case MacBethChart:
            break;
        case Colors:
            break;
        case Fishes:
            break;
        case PartkTrees:
            break;
        case Rockies:
            break;
        case SnowLeopard:
            break;
        case SnowHills:
            break;
        case Splash:
            break;
        case Waterfall:
            break;
        case Wheats:
            break;
        case Harmony:
            break;
        case TouchTest:
            GFX_HGC_DrawItem(Rectangle1);
            break;
        case Settings:
            break;
        case FeatureList:
            break;
        case Lines:
            GFX_HGC_DrawItem(Line2);
            GFX_HGC_DrawItem(Line3);
            GFX_HGC_DrawItem(Line4);
            GFX_HGC_DrawItem(Line5);
            GFX_HGC_DrawItem(Line6);
            GFX_HGC_DrawItem(Line7);
            GFX_HGC_DrawItem(Line8);
            GFX_HGC_DrawItem(Line9);
            GFX_HGC_DrawItem(Line10);
            GFX_HGC_DrawItem(Line11);
            GFX_HGC_DrawItem(Line12);
            GFX_HGC_DrawItem(Line13);
            GFX_HGC_DrawItem(Line14);
            GFX_HGC_DrawItem(Line16);
            GFX_HGC_DrawItem(Line17);
            GFX_HGC_DrawItem(Line15);
            GFX_HGC_DrawItem(Line18);
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
    case FeatureListButton:
        hgcObj.pFeatureListButtonObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 FeatureListButton,      // button ID
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
    case TouchButton:
        hgcObj.pTouchButtonObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 TouchButton,      // button ID
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
    case SettingsButton:
        hgcObj.pSettingsButtonObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 SettingsButton,      // button ID
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
    case SlidesButton:
        hgcObj.pSlidesButtonObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 SlidesButton,      // button ID
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
    case Button23:
        hgcObj.pButton23Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button23,      // button ID
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
    case Button7:
        hgcObj.pButton7Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button7,      // button ID
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
    case Button1:
        hgcObj.pButton1Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button1,      // button ID
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
    case Button2:
        hgcObj.pButton2Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button2,      // button ID
                 GFX_BUTTON_LEFT_7,    // left
                 GFX_BUTTON_TOP_7,     // top
                 GFX_BUTTON_RIGHT_7,   // right
                 GFX_BUTTON_BOTTOM_7,  // bottom
                 GFX_BUTTON_RADIUS_7,  // radius
                 GFX_BUTTON_STATE_7,   // state
                 GFX_BUTTON_PRESS_IMAGE_7,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_7,   // release image
                 (GFX_XCHAR*)buttonStr_7,    // text
                 GFX_BUTTON_ALIGNMENT_7,       //alignment
                 GFX_BUTTON_SCHEME_7
                 ); // use alternate scheme
        break;
    case Button3:
        hgcObj.pButton3Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button3,      // button ID
                 GFX_BUTTON_LEFT_8,    // left
                 GFX_BUTTON_TOP_8,     // top
                 GFX_BUTTON_RIGHT_8,   // right
                 GFX_BUTTON_BOTTOM_8,  // bottom
                 GFX_BUTTON_RADIUS_8,  // radius
                 GFX_BUTTON_STATE_8,   // state
                 GFX_BUTTON_PRESS_IMAGE_8,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_8,   // release image
                 (GFX_XCHAR*)buttonStr_8,    // text
                 GFX_BUTTON_ALIGNMENT_8,       //alignment
                 GFX_BUTTON_SCHEME_8
                 ); // use alternate scheme
        break;
    case Button8:
        hgcObj.pButton8Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button8,      // button ID
                 GFX_BUTTON_LEFT_9,    // left
                 GFX_BUTTON_TOP_9,     // top
                 GFX_BUTTON_RIGHT_9,   // right
                 GFX_BUTTON_BOTTOM_9,  // bottom
                 GFX_BUTTON_RADIUS_9,  // radius
                 GFX_BUTTON_STATE_9,   // state
                 GFX_BUTTON_PRESS_IMAGE_9,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_9,   // release image
                 (GFX_XCHAR*)buttonStr_9,    // text
                 GFX_BUTTON_ALIGNMENT_9,       //alignment
                 GFX_BUTTON_SCHEME_9
                 ); // use alternate scheme
        break;
    case Button9:
        hgcObj.pButton9Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button9,      // button ID
                 GFX_BUTTON_LEFT_10,    // left
                 GFX_BUTTON_TOP_10,     // top
                 GFX_BUTTON_RIGHT_10,   // right
                 GFX_BUTTON_BOTTOM_10,  // bottom
                 GFX_BUTTON_RADIUS_10,  // radius
                 GFX_BUTTON_STATE_10,   // state
                 GFX_BUTTON_PRESS_IMAGE_10,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_10,   // release image
                 (GFX_XCHAR*)buttonStr_10,    // text
                 GFX_BUTTON_ALIGNMENT_10,       //alignment
                 GFX_BUTTON_SCHEME_10
                 ); // use alternate scheme
        break;
    case Button10:
        hgcObj.pButton10Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button10,      // button ID
                 GFX_BUTTON_LEFT_11,    // left
                 GFX_BUTTON_TOP_11,     // top
                 GFX_BUTTON_RIGHT_11,   // right
                 GFX_BUTTON_BOTTOM_11,  // bottom
                 GFX_BUTTON_RADIUS_11,  // radius
                 GFX_BUTTON_STATE_11,   // state
                 GFX_BUTTON_PRESS_IMAGE_11,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_11,   // release image
                 (GFX_XCHAR*)buttonStr_11,    // text
                 GFX_BUTTON_ALIGNMENT_11,       //alignment
                 GFX_BUTTON_SCHEME_11
                 ); // use alternate scheme
        break;
    case Button11:
        hgcObj.pButton11Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button11,      // button ID
                 GFX_BUTTON_LEFT_12,    // left
                 GFX_BUTTON_TOP_12,     // top
                 GFX_BUTTON_RIGHT_12,   // right
                 GFX_BUTTON_BOTTOM_12,  // bottom
                 GFX_BUTTON_RADIUS_12,  // radius
                 GFX_BUTTON_STATE_12,   // state
                 GFX_BUTTON_PRESS_IMAGE_12,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_12,   // release image
                 (GFX_XCHAR*)buttonStr_12,    // text
                 GFX_BUTTON_ALIGNMENT_12,       //alignment
                 GFX_BUTTON_SCHEME_12
                 ); // use alternate scheme
        break;
    case Button13:
        hgcObj.pButton13Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button13,      // button ID
                 GFX_BUTTON_LEFT_13,    // left
                 GFX_BUTTON_TOP_13,     // top
                 GFX_BUTTON_RIGHT_13,   // right
                 GFX_BUTTON_BOTTOM_13,  // bottom
                 GFX_BUTTON_RADIUS_13,  // radius
                 GFX_BUTTON_STATE_13,   // state
                 GFX_BUTTON_PRESS_IMAGE_13,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_13,   // release image
                 (GFX_XCHAR*)buttonStr_13,    // text
                 GFX_BUTTON_ALIGNMENT_13,       //alignment
                 GFX_BUTTON_SCHEME_13
                 ); // use alternate scheme
        break;
    case Button24:
        hgcObj.pButton24Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button24,      // button ID
                 GFX_BUTTON_LEFT_14,    // left
                 GFX_BUTTON_TOP_14,     // top
                 GFX_BUTTON_RIGHT_14,   // right
                 GFX_BUTTON_BOTTOM_14,  // bottom
                 GFX_BUTTON_RADIUS_14,  // radius
                 GFX_BUTTON_STATE_14,   // state
                 GFX_BUTTON_PRESS_IMAGE_14,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_14,   // release image
                 (GFX_XCHAR*)buttonStr_14,    // text
                 GFX_BUTTON_ALIGNMENT_14,       //alignment
                 GFX_BUTTON_SCHEME_14
                 ); // use alternate scheme
        break;
    case Button14:
        hgcObj.pButton14Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button14,      // button ID
                 GFX_BUTTON_LEFT_15,    // left
                 GFX_BUTTON_TOP_15,     // top
                 GFX_BUTTON_RIGHT_15,   // right
                 GFX_BUTTON_BOTTOM_15,  // bottom
                 GFX_BUTTON_RADIUS_15,  // radius
                 GFX_BUTTON_STATE_15,   // state
                 GFX_BUTTON_PRESS_IMAGE_15,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_15,   // release image
                 (GFX_XCHAR*)buttonStr_15,    // text
                 GFX_BUTTON_ALIGNMENT_15,       //alignment
                 GFX_BUTTON_SCHEME_15
                 ); // use alternate scheme
        break;
    case Button15:
        hgcObj.pButton15Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button15,      // button ID
                 GFX_BUTTON_LEFT_16,    // left
                 GFX_BUTTON_TOP_16,     // top
                 GFX_BUTTON_RIGHT_16,   // right
                 GFX_BUTTON_BOTTOM_16,  // bottom
                 GFX_BUTTON_RADIUS_16,  // radius
                 GFX_BUTTON_STATE_16,   // state
                 GFX_BUTTON_PRESS_IMAGE_16,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_16,   // release image
                 (GFX_XCHAR*)buttonStr_16,    // text
                 GFX_BUTTON_ALIGNMENT_16,       //alignment
                 GFX_BUTTON_SCHEME_16
                 ); // use alternate scheme
        break;
    case Button16:
        hgcObj.pButton16Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button16,      // button ID
                 GFX_BUTTON_LEFT_17,    // left
                 GFX_BUTTON_TOP_17,     // top
                 GFX_BUTTON_RIGHT_17,   // right
                 GFX_BUTTON_BOTTOM_17,  // bottom
                 GFX_BUTTON_RADIUS_17,  // radius
                 GFX_BUTTON_STATE_17,   // state
                 GFX_BUTTON_PRESS_IMAGE_17,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_17,   // release image
                 (GFX_XCHAR*)buttonStr_17,    // text
                 GFX_BUTTON_ALIGNMENT_17,       //alignment
                 GFX_BUTTON_SCHEME_17
                 ); // use alternate scheme
        break;
    case Button18:
        hgcObj.pButton18Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button18,      // button ID
                 GFX_BUTTON_LEFT_18,    // left
                 GFX_BUTTON_TOP_18,     // top
                 GFX_BUTTON_RIGHT_18,   // right
                 GFX_BUTTON_BOTTOM_18,  // bottom
                 GFX_BUTTON_RADIUS_18,  // radius
                 GFX_BUTTON_STATE_18,   // state
                 GFX_BUTTON_PRESS_IMAGE_18,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_18,   // release image
                 (GFX_XCHAR*)buttonStr_18,    // text
                 GFX_BUTTON_ALIGNMENT_18,       //alignment
                 GFX_BUTTON_SCHEME_18
                 ); // use alternate scheme
        break;
    case Button19:
        hgcObj.pButton19Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button19,      // button ID
                 GFX_BUTTON_LEFT_19,    // left
                 GFX_BUTTON_TOP_19,     // top
                 GFX_BUTTON_RIGHT_19,   // right
                 GFX_BUTTON_BOTTOM_19,  // bottom
                 GFX_BUTTON_RADIUS_19,  // radius
                 GFX_BUTTON_STATE_19,   // state
                 GFX_BUTTON_PRESS_IMAGE_19,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_19,   // release image
                 (GFX_XCHAR*)buttonStr_19,    // text
                 GFX_BUTTON_ALIGNMENT_19,       //alignment
                 GFX_BUTTON_SCHEME_19
                 ); // use alternate scheme
        break;
    case Button20:
        hgcObj.pButton20Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button20,      // button ID
                 GFX_BUTTON_LEFT_20,    // left
                 GFX_BUTTON_TOP_20,     // top
                 GFX_BUTTON_RIGHT_20,   // right
                 GFX_BUTTON_BOTTOM_20,  // bottom
                 GFX_BUTTON_RADIUS_20,  // radius
                 GFX_BUTTON_STATE_20,   // state
                 GFX_BUTTON_PRESS_IMAGE_20,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_20,   // release image
                 (GFX_XCHAR*)buttonStr_20,    // text
                 GFX_BUTTON_ALIGNMENT_20,       //alignment
                 GFX_BUTTON_SCHEME_20
                 ); // use alternate scheme
        break;
    case Button21:
        hgcObj.pButton21Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button21,      // button ID
                 GFX_BUTTON_LEFT_21,    // left
                 GFX_BUTTON_TOP_21,     // top
                 GFX_BUTTON_RIGHT_21,   // right
                 GFX_BUTTON_BOTTOM_21,  // bottom
                 GFX_BUTTON_RADIUS_21,  // radius
                 GFX_BUTTON_STATE_21,   // state
                 GFX_BUTTON_PRESS_IMAGE_21,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_21,   // release image
                 (GFX_XCHAR*)buttonStr_21,    // text
                 GFX_BUTTON_ALIGNMENT_21,       //alignment
                 GFX_BUTTON_SCHEME_21
                 ); // use alternate scheme
        break;
    case Button22:
        hgcObj.pButton22Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button22,      // button ID
                 GFX_BUTTON_LEFT_22,    // left
                 GFX_BUTTON_TOP_22,     // top
                 GFX_BUTTON_RIGHT_22,   // right
                 GFX_BUTTON_BOTTOM_22,  // bottom
                 GFX_BUTTON_RADIUS_22,  // radius
                 GFX_BUTTON_STATE_22,   // state
                 GFX_BUTTON_PRESS_IMAGE_22,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_22,   // release image
                 (GFX_XCHAR*)buttonStr_22,    // text
                 GFX_BUTTON_ALIGNMENT_22,       //alignment
                 GFX_BUTTON_SCHEME_22
                 ); // use alternate scheme
        break;
    case Button12:
        hgcObj.pButton12Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button12,      // button ID
                 GFX_BUTTON_LEFT_23,    // left
                 GFX_BUTTON_TOP_23,     // top
                 GFX_BUTTON_RIGHT_23,   // right
                 GFX_BUTTON_BOTTOM_23,  // bottom
                 GFX_BUTTON_RADIUS_23,  // radius
                 GFX_BUTTON_STATE_23,   // state
                 GFX_BUTTON_PRESS_IMAGE_23,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_23,   // release image
                 (GFX_XCHAR*)buttonStr_23,    // text
                 GFX_BUTTON_ALIGNMENT_23,       //alignment
                 GFX_BUTTON_SCHEME_23
                 ); // use alternate scheme
        break;
    case Button4:
        hgcObj.pButton4Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button4,      // button ID
                 GFX_BUTTON_LEFT_24,    // left
                 GFX_BUTTON_TOP_24,     // top
                 GFX_BUTTON_RIGHT_24,   // right
                 GFX_BUTTON_BOTTOM_24,  // bottom
                 GFX_BUTTON_RADIUS_24,  // radius
                 GFX_BUTTON_STATE_24,   // state
                 GFX_BUTTON_PRESS_IMAGE_24,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_24,   // release image
                 (GFX_XCHAR*)buttonStr_24,    // text
                 GFX_BUTTON_ALIGNMENT_24,       //alignment
                 GFX_BUTTON_SCHEME_24
                 ); // use alternate scheme
        break;
    case Button5:
        hgcObj.pButton5Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button5,      // button ID
                 GFX_BUTTON_LEFT_25,    // left
                 GFX_BUTTON_TOP_25,     // top
                 GFX_BUTTON_RIGHT_25,   // right
                 GFX_BUTTON_BOTTOM_25,  // bottom
                 GFX_BUTTON_RADIUS_25,  // radius
                 GFX_BUTTON_STATE_25,   // state
                 GFX_BUTTON_PRESS_IMAGE_25,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_25,   // release image
                 (GFX_XCHAR*)buttonStr_25,    // text
                 GFX_BUTTON_ALIGNMENT_25,       //alignment
                 GFX_BUTTON_SCHEME_25
                 ); // use alternate scheme
        break;
    case Button6:
        hgcObj.pButton6Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button6,      // button ID
                 GFX_BUTTON_LEFT_26,    // left
                 GFX_BUTTON_TOP_26,     // top
                 GFX_BUTTON_RIGHT_26,   // right
                 GFX_BUTTON_BOTTOM_26,  // bottom
                 GFX_BUTTON_RADIUS_26,  // radius
                 GFX_BUTTON_STATE_26,   // state
                 GFX_BUTTON_PRESS_IMAGE_26,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_26,   // release image
                 (GFX_XCHAR*)buttonStr_26,    // text
                 GFX_BUTTON_ALIGNMENT_26,       //alignment
                 GFX_BUTTON_SCHEME_26
                 ); // use alternate scheme
        break;
    case YPos:
        hgcObj.pYPosObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 YPos,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_0,    // left
                 GFX_DGTL_MTR_TOP_0,     // top
                 GFX_DGTL_MTR_RIGHT_0,   // right
                 GFX_DGTL_MTR_BOTTOM_0,  // bottom             
                 GFX_DGTL_MTR_STATE_0,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_0,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_0, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_0,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_0,//alignment
                 GFX_DGTL_MTR_SCHEME_0	//scheme
                 ); // use alternate scheme
        break;
    case XPos:
        hgcObj.pXPosObj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 XPos,      // digital meter ID
                 GFX_DGTL_MTR_LEFT_1,    // left
                 GFX_DGTL_MTR_TOP_1,     // top
                 GFX_DGTL_MTR_RIGHT_1,   // right
                 GFX_DGTL_MTR_BOTTOM_1,  // bottom             
                 GFX_DGTL_MTR_STATE_1,   // state
                 (uint32_t)GFX_DGTL_MTR_VALUE_1,   // value
                 (uint16_t)GFX_DGTL_MTR_NO_OF_DIGITS_1, // no. of digits
                 (uint16_t)GFX_DGTL_MTR_DOT_POSITION_1,// dot position
                 GFX_DGTL_MTR_ALIGNMENT_1,//alignment
                 GFX_DGTL_MTR_SCHEME_1	//scheme
                 ); // use alternate scheme
        break;
    case RadioButtonEnglish:
        hgcObj.pRadioButtonEnglishObj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButtonEnglish,      // Radio button Box ID
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
    case RadioButtonChineseSimpl:
        hgcObj.pRadioButtonChineseSimplObj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButtonChineseSimpl,      // Radio button Box ID
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
    case RadioButtonChineseTrad:
        hgcObj.pRadioButtonChineseTradObj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButtonChineseTrad,      // Radio button Box ID
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
    case e_st_DemoName:
        hgcObj.pe_st_DemoNameObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_DemoName,      // button ID
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
    case e_st_TouchTest:
        hgcObj.pe_st_TouchTestObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_TouchTest,      // button ID
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
    case e_st_Settings:
        hgcObj.pe_st_SettingsObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_Settings,      // button ID
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
    case e_st_Features:
        hgcObj.pe_st_FeaturesObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_Features,      // button ID
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
    case cs_st_Settings:
        hgcObj.pcs_st_SettingsObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 cs_st_Settings,      // button ID
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
    case ct_st_Settings:
        hgcObj.pct_st_SettingsObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 ct_st_Settings,      // button ID
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
    case cs_st_TouchTest:
        hgcObj.pcs_st_TouchTestObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 cs_st_TouchTest,      // button ID
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
    case ct_st_TouchTest:
        hgcObj.pct_st_TouchTestObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 ct_st_TouchTest,      // button ID
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
    case c_st_Features:
        hgcObj.pc_st_FeaturesObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 c_st_Features,      // button ID
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
    case ct_st_SlideShow:
        hgcObj.pct_st_SlideShowObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 ct_st_SlideShow,      // button ID
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
    case cs_st_SlideShow:
        hgcObj.pcs_st_SlideShowObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 cs_st_SlideShow,      // button ID
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
    case e_st_SlideShowTips:
        hgcObj.pe_st_SlideShowTipsObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_SlideShowTips,      // button ID
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
    case StaticText11:
        hgcObj.pStaticText11Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText11,      // button ID
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
    case StaticText10:
        hgcObj.pStaticText10Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText10,      // button ID
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
    case e_st_Second:
        hgcObj.pe_st_SecondObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_Second,      // button ID
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
    case c_st_Second:
        hgcObj.pc_st_SecondObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 c_st_Second,      // button ID
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
    case e_st_CloseBracket:
        hgcObj.pe_st_CloseBracketObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_CloseBracket,      // button ID
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
    case e_st_SlidePauseTime:
        hgcObj.pe_st_SlidePauseTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_SlidePauseTime,      // button ID
                 GFX_STATICTEXT_LEFT_18,    // left
                 GFX_STATICTEXT_TOP_18,     // top
                 GFX_STATICTEXT_RIGHT_18,   // right
                 GFX_STATICTEXT_BOTTOM_18,  // bottom
                 GFX_STATICTEXT_STATE_18,   // state
                 (GFX_XCHAR*)staticTextStr_18,    // text
                 GFX_STATICTEXT_ALIGNMENT_18,       //alignment
                 GFX_STATICTEXT_SCHEME_18
                 ); // use alternate scheme
        break;
    case ct_st_SlidePauseTime:
        hgcObj.pct_st_SlidePauseTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 ct_st_SlidePauseTime,      // button ID
                 GFX_STATICTEXT_LEFT_19,    // left
                 GFX_STATICTEXT_TOP_19,     // top
                 GFX_STATICTEXT_RIGHT_19,   // right
                 GFX_STATICTEXT_BOTTOM_19,  // bottom
                 GFX_STATICTEXT_STATE_19,   // state
                 (GFX_XCHAR*)staticTextStr_19,    // text
                 GFX_STATICTEXT_ALIGNMENT_19,       //alignment
                 GFX_STATICTEXT_SCHEME_19
                 ); // use alternate scheme
        break;
    case cs_st_SlidePauseTime:
        hgcObj.pcs_st_SlidePauseTimeObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 cs_st_SlidePauseTime,      // button ID
                 GFX_STATICTEXT_LEFT_20,    // left
                 GFX_STATICTEXT_TOP_20,     // top
                 GFX_STATICTEXT_RIGHT_20,   // right
                 GFX_STATICTEXT_BOTTOM_20,  // bottom
                 GFX_STATICTEXT_STATE_20,   // state
                 (GFX_XCHAR*)staticTextStr_20,    // text
                 GFX_STATICTEXT_ALIGNMENT_20,       //alignment
                 GFX_STATICTEXT_SCHEME_20
                 ); // use alternate scheme
        break;
    case e_st_SelectLanguage:
        hgcObj.pe_st_SelectLanguageObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_SelectLanguage,      // button ID
                 GFX_STATICTEXT_LEFT_21,    // left
                 GFX_STATICTEXT_TOP_21,     // top
                 GFX_STATICTEXT_RIGHT_21,   // right
                 GFX_STATICTEXT_BOTTOM_21,  // bottom
                 GFX_STATICTEXT_STATE_21,   // state
                 (GFX_XCHAR*)staticTextStr_21,    // text
                 GFX_STATICTEXT_ALIGNMENT_21,       //alignment
                 GFX_STATICTEXT_SCHEME_21
                 ); // use alternate scheme
        break;
    case ct_st_SelectLanguage:
        hgcObj.pct_st_SelectLanguageObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 ct_st_SelectLanguage,      // button ID
                 GFX_STATICTEXT_LEFT_22,    // left
                 GFX_STATICTEXT_TOP_22,     // top
                 GFX_STATICTEXT_RIGHT_22,   // right
                 GFX_STATICTEXT_BOTTOM_22,  // bottom
                 GFX_STATICTEXT_STATE_22,   // state
                 (GFX_XCHAR*)staticTextStr_22,    // text
                 GFX_STATICTEXT_ALIGNMENT_22,       //alignment
                 GFX_STATICTEXT_SCHEME_22
                 ); // use alternate scheme
        break;
    case cs_st_SelectLanguage:
        hgcObj.pcs_st_SelectLanguageObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 cs_st_SelectLanguage,      // button ID
                 GFX_STATICTEXT_LEFT_23,    // left
                 GFX_STATICTEXT_TOP_23,     // top
                 GFX_STATICTEXT_RIGHT_23,   // right
                 GFX_STATICTEXT_BOTTOM_23,  // bottom
                 GFX_STATICTEXT_STATE_23,   // state
                 (GFX_XCHAR*)staticTextStr_23,    // text
                 GFX_STATICTEXT_ALIGNMENT_23,       //alignment
                 GFX_STATICTEXT_SCHEME_23
                 ); // use alternate scheme
        break;
    case e_st_ChineseSimplified:
        hgcObj.pe_st_ChineseSimplifiedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_ChineseSimplified,      // button ID
                 GFX_STATICTEXT_LEFT_24,    // left
                 GFX_STATICTEXT_TOP_24,     // top
                 GFX_STATICTEXT_RIGHT_24,   // right
                 GFX_STATICTEXT_BOTTOM_24,  // bottom
                 GFX_STATICTEXT_STATE_24,   // state
                 (GFX_XCHAR*)staticTextStr_24,    // text
                 GFX_STATICTEXT_ALIGNMENT_24,       //alignment
                 GFX_STATICTEXT_SCHEME_24
                 ); // use alternate scheme
        break;
    case e_st_ChineseTraditional:
        hgcObj.pe_st_ChineseTraditionalObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_ChineseTraditional,      // button ID
                 GFX_STATICTEXT_LEFT_25,    // left
                 GFX_STATICTEXT_TOP_25,     // top
                 GFX_STATICTEXT_RIGHT_25,   // right
                 GFX_STATICTEXT_BOTTOM_25,  // bottom
                 GFX_STATICTEXT_STATE_25,   // state
                 (GFX_XCHAR*)staticTextStr_25,    // text
                 GFX_STATICTEXT_ALIGNMENT_25,       //alignment
                 GFX_STATICTEXT_SCHEME_25
                 ); // use alternate scheme
        break;
    case cs_st_ChineseSimplified:
        hgcObj.pcs_st_ChineseSimplifiedObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 cs_st_ChineseSimplified,      // button ID
                 GFX_STATICTEXT_LEFT_26,    // left
                 GFX_STATICTEXT_TOP_26,     // top
                 GFX_STATICTEXT_RIGHT_26,   // right
                 GFX_STATICTEXT_BOTTOM_26,  // bottom
                 GFX_STATICTEXT_STATE_26,   // state
                 (GFX_XCHAR*)staticTextStr_26,    // text
                 GFX_STATICTEXT_ALIGNMENT_26,       //alignment
                 GFX_STATICTEXT_SCHEME_26
                 ); // use alternate scheme
        break;
    case ct_st_ChineseTraditional:
        hgcObj.pct_st_ChineseTraditionalObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 ct_st_ChineseTraditional,      // button ID
                 GFX_STATICTEXT_LEFT_27,    // left
                 GFX_STATICTEXT_TOP_27,     // top
                 GFX_STATICTEXT_RIGHT_27,   // right
                 GFX_STATICTEXT_BOTTOM_27,  // bottom
                 GFX_STATICTEXT_STATE_27,   // state
                 (GFX_XCHAR*)staticTextStr_27,    // text
                 GFX_STATICTEXT_ALIGNMENT_27,       //alignment
                 GFX_STATICTEXT_SCHEME_27
                 ); // use alternate scheme
        break;
    case e_st_English:
        hgcObj.pe_st_EnglishObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_English,      // button ID
                 GFX_STATICTEXT_LEFT_28,    // left
                 GFX_STATICTEXT_TOP_28,     // top
                 GFX_STATICTEXT_RIGHT_28,   // right
                 GFX_STATICTEXT_BOTTOM_28,  // bottom
                 GFX_STATICTEXT_STATE_28,   // state
                 (GFX_XCHAR*)staticTextStr_28,    // text
                 GFX_STATICTEXT_ALIGNMENT_28,       //alignment
                 GFX_STATICTEXT_SCHEME_28
                 ); // use alternate scheme
        break;
    case e_st_OpenBracket:
        hgcObj.pe_st_OpenBracketObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_OpenBracket,      // button ID
                 GFX_STATICTEXT_LEFT_29,    // left
                 GFX_STATICTEXT_TOP_29,     // top
                 GFX_STATICTEXT_RIGHT_29,   // right
                 GFX_STATICTEXT_BOTTOM_29,  // bottom
                 GFX_STATICTEXT_STATE_29,   // state
                 (GFX_XCHAR*)staticTextStr_29,    // text
                 GFX_STATICTEXT_ALIGNMENT_29,       //alignment
                 GFX_STATICTEXT_SCHEME_29
                 ); // use alternate scheme
        break;
    case SecondsString:
        hgcObj.pSecondsStringObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 SecondsString,      // button ID
                 GFX_STATICTEXT_LEFT_30,    // left
                 GFX_STATICTEXT_TOP_30,     // top
                 GFX_STATICTEXT_RIGHT_30,   // right
                 GFX_STATICTEXT_BOTTOM_30,  // bottom
                 GFX_STATICTEXT_STATE_30,   // state
                 (GFX_XCHAR*)staticTextStr_30,    // text
                 GFX_STATICTEXT_ALIGNMENT_30,       //alignment
                 GFX_STATICTEXT_SCHEME_30
                 ); // use alternate scheme
        break;
    case e_st_5:
        hgcObj.pe_st_5Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_5,      // button ID
                 GFX_STATICTEXT_LEFT_31,    // left
                 GFX_STATICTEXT_TOP_31,     // top
                 GFX_STATICTEXT_RIGHT_31,   // right
                 GFX_STATICTEXT_BOTTOM_31,  // bottom
                 GFX_STATICTEXT_STATE_31,   // state
                 (GFX_XCHAR*)staticTextStr_31,    // text
                 GFX_STATICTEXT_ALIGNMENT_31,       //alignment
                 GFX_STATICTEXT_SCHEME_31
                 ); // use alternate scheme
        break;
    case e_st_0:
        hgcObj.pe_st_0Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_0,      // button ID
                 GFX_STATICTEXT_LEFT_32,    // left
                 GFX_STATICTEXT_TOP_32,     // top
                 GFX_STATICTEXT_RIGHT_32,   // right
                 GFX_STATICTEXT_BOTTOM_32,  // bottom
                 GFX_STATICTEXT_STATE_32,   // state
                 (GFX_XCHAR*)staticTextStr_32,    // text
                 GFX_STATICTEXT_ALIGNMENT_32,       //alignment
                 GFX_STATICTEXT_SCHEME_32
                 ); // use alternate scheme
        break;
    case e_st_DemonstratedFeatures:
        hgcObj.pe_st_DemonstratedFeaturesObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 e_st_DemonstratedFeatures,      // button ID
                 GFX_STATICTEXT_LEFT_33,    // left
                 GFX_STATICTEXT_TOP_33,     // top
                 GFX_STATICTEXT_RIGHT_33,   // right
                 GFX_STATICTEXT_BOTTOM_33,  // bottom
                 GFX_STATICTEXT_STATE_33,   // state
                 (GFX_XCHAR*)staticTextStr_33,    // text
                 GFX_STATICTEXT_ALIGNMENT_33,       //alignment
                 GFX_STATICTEXT_SCHEME_33
                 ); // use alternate scheme
        break;
    case TouchArea:
        hgcObj.pTouchAreaObj = GFX_GOL_WindowCreate
                (
                 GFX_INDEX_0,
                 TouchArea,      // button ID
                 GFX_WINDOW_LEFT_0,    // left
                 GFX_WINDOW_TOP_0,     // top
                 GFX_WINDOW_RIGHT_0,   // right				 
                 GFX_WINDOW_BOTTOM_0,  // bottom
                 GFX_WINDOW_STATE_0,   // state
                 GFX_WINDOW_IMAGE_0,     // press image                 
                 (GFX_XCHAR*)windowTextStr_0,    // text
                 GFX_WINDOW_ALIGNMENT_0,       //alignment
                 GFX_WINDOW_SCHEME_0
                 ); // use alternate scheme
        break;
    case SlideShowTipIcon:
        hgcObj.pSlideShowTipIconObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 SlideShowTipIcon,      // picture ID
                 GFX_PICTURE_LEFT_0,    // left
                 GFX_PICTURE_TOP_0,     // top
                 GFX_PICTURE_RIGHT_0,   // right				 
                 GFX_PICTURE_BOTTOM_0,  // bottom
				 GFX_PICTURE_STATE_0,   // state                 
                 GFX_PICTURE_SCALE_0,     // scale
                 (GFX_RESOURCE_HDR*)&home_outline,    // bitmap
                 GFX_PICTURE_SCHEME_0
                 );
        break;
    case cs_p_SlideShowTips:
        hgcObj.pcs_p_SlideShowTipsObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 cs_p_SlideShowTips,      // picture ID
                 GFX_PICTURE_LEFT_1,    // left
                 GFX_PICTURE_TOP_1,     // top
                 GFX_PICTURE_RIGHT_1,   // right				 
                 GFX_PICTURE_BOTTOM_1,  // bottom
				 GFX_PICTURE_STATE_1,   // state                 
                 GFX_PICTURE_SCALE_1,     // scale
                 (GFX_RESOURCE_HDR*)&cs_SlideShowInstructions,    // bitmap
                 GFX_PICTURE_SCHEME_1
                 );
        break;
    case ct_p_SlideShowTips:
        hgcObj.pct_p_SlideShowTipsObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 ct_p_SlideShowTips,      // picture ID
                 GFX_PICTURE_LEFT_2,    // left
                 GFX_PICTURE_TOP_2,     // top
                 GFX_PICTURE_RIGHT_2,   // right				 
                 GFX_PICTURE_BOTTOM_2,  // bottom
				 GFX_PICTURE_STATE_2,   // state                 
                 GFX_PICTURE_SCALE_2,     // scale
                 (GFX_RESOURCE_HDR*)&ct_SlideShowInstructions,    // bitmap
                 GFX_PICTURE_SCHEME_2
                 );
        break;
    case Picture4:
        hgcObj.pPicture4Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture4,      // picture ID
                 GFX_PICTURE_LEFT_3,    // left
                 GFX_PICTURE_TOP_3,     // top
                 GFX_PICTURE_RIGHT_3,   // right				 
                 GFX_PICTURE_BOTTOM_3,  // bottom
				 GFX_PICTURE_STATE_3,   // state                 
                 GFX_PICTURE_SCALE_3,     // scale
                 (GFX_RESOURCE_HDR*)&HomeScreen,    // bitmap
                 GFX_PICTURE_SCHEME_3
                 );
        break;
    case Picture3:
        hgcObj.pPicture3Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture3,      // picture ID
                 GFX_PICTURE_LEFT_4,    // left
                 GFX_PICTURE_TOP_4,     // top
                 GFX_PICTURE_RIGHT_4,   // right				 
                 GFX_PICTURE_BOTTOM_4,  // bottom
				 GFX_PICTURE_STATE_4,   // state                 
                 GFX_PICTURE_SCALE_4,     // scale
                 (GFX_RESOURCE_HDR*)&ScienceWorldNight,    // bitmap
                 GFX_PICTURE_SCHEME_4
                 );
        break;
    case Picture1:
        hgcObj.pPicture1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture1,      // picture ID
                 GFX_PICTURE_LEFT_5,    // left
                 GFX_PICTURE_TOP_5,     // top
                 GFX_PICTURE_RIGHT_5,   // right				 
                 GFX_PICTURE_BOTTOM_5,  // bottom
				 GFX_PICTURE_STATE_5,   // state                 
                 GFX_PICTURE_SCALE_5,     // scale
                 (GFX_RESOURCE_HDR*)&CoalHarbourDay,    // bitmap
                 GFX_PICTURE_SCHEME_5
                 );
        break;
    case Picture2:
        hgcObj.pPicture2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture2,      // picture ID
                 GFX_PICTURE_LEFT_6,    // left
                 GFX_PICTURE_TOP_6,     // top
                 GFX_PICTURE_RIGHT_6,   // right				 
                 GFX_PICTURE_BOTTOM_6,  // bottom
				 GFX_PICTURE_STATE_6,   // state                 
                 GFX_PICTURE_SCALE_6,     // scale
                 (GFX_RESOURCE_HDR*)&EnglishBayFireworks,    // bitmap
                 GFX_PICTURE_SCHEME_6
                 );
        break;
    case Picture6:
        hgcObj.pPicture6Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture6,      // picture ID
                 GFX_PICTURE_LEFT_7,    // left
                 GFX_PICTURE_TOP_7,     // top
                 GFX_PICTURE_RIGHT_7,   // right				 
                 GFX_PICTURE_BOTTOM_7,  // bottom
				 GFX_PICTURE_STATE_7,   // state                 
                 GFX_PICTURE_SCALE_7,     // scale
                 (GFX_RESOURCE_HDR*)&AutumnGass_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_7
                 );
        break;
    case Picture7:
        hgcObj.pPicture7Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture7,      // picture ID
                 GFX_PICTURE_LEFT_8,    // left
                 GFX_PICTURE_TOP_8,     // top
                 GFX_PICTURE_RIGHT_8,   // right				 
                 GFX_PICTURE_BOTTOM_8,  // bottom
				 GFX_PICTURE_STATE_8,   // state                 
                 GFX_PICTURE_SCALE_8,     // scale
                 (GFX_RESOURCE_HDR*)&FalseCreek_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_8
                 );
        break;
    case Picture8:
        hgcObj.pPicture8Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture8,      // picture ID
                 GFX_PICTURE_LEFT_9,    // left
                 GFX_PICTURE_TOP_9,     // top
                 GFX_PICTURE_RIGHT_9,   // right				 
                 GFX_PICTURE_BOTTOM_9,  // bottom
				 GFX_PICTURE_STATE_9,   // state                 
                 GFX_PICTURE_SCALE_9,     // scale
                 (GFX_RESOURCE_HDR*)&BoraBoraSunset_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_9
                 );
        break;
    case Picture9:
        hgcObj.pPicture9Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture9,      // picture ID
                 GFX_PICTURE_LEFT_10,    // left
                 GFX_PICTURE_TOP_10,     // top
                 GFX_PICTURE_RIGHT_10,   // right				 
                 GFX_PICTURE_BOTTOM_10,  // bottom
				 GFX_PICTURE_STATE_10,   // state                 
                 GFX_PICTURE_SCALE_10,     // scale
                 (GFX_RESOURCE_HDR*)&DowntownVancouver_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_10
                 );
        break;
    case Picture10:
        hgcObj.pPicture10Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture10,      // picture ID
                 GFX_PICTURE_LEFT_11,    // left
                 GFX_PICTURE_TOP_11,     // top
                 GFX_PICTURE_RIGHT_11,   // right				 
                 GFX_PICTURE_BOTTOM_11,  // bottom
				 GFX_PICTURE_STATE_11,   // state                 
                 GFX_PICTURE_SCALE_11,     // scale
                 (GFX_RESOURCE_HDR*)&MacBethChart_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_11
                 );
        break;
    case Picture20:
        hgcObj.pPicture20Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture20,      // picture ID
                 GFX_PICTURE_LEFT_12,    // left
                 GFX_PICTURE_TOP_12,     // top
                 GFX_PICTURE_RIGHT_12,   // right				 
                 GFX_PICTURE_BOTTOM_12,  // bottom
				 GFX_PICTURE_STATE_12,   // state                 
                 GFX_PICTURE_SCALE_12,     // scale
                 (GFX_RESOURCE_HDR*)&ColorPalette_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_12
                 );
        break;
    case Picture11:
        hgcObj.pPicture11Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture11,      // picture ID
                 GFX_PICTURE_LEFT_13,    // left
                 GFX_PICTURE_TOP_13,     // top
                 GFX_PICTURE_RIGHT_13,   // right				 
                 GFX_PICTURE_BOTTOM_13,  // bottom
				 GFX_PICTURE_STATE_13,   // state                 
                 GFX_PICTURE_SCALE_13,     // scale
                 (GFX_RESOURCE_HDR*)&Fishes_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_13
                 );
        break;
    case Picture12:
        hgcObj.pPicture12Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture12,      // picture ID
                 GFX_PICTURE_LEFT_14,    // left
                 GFX_PICTURE_TOP_14,     // top
                 GFX_PICTURE_RIGHT_14,   // right				 
                 GFX_PICTURE_BOTTOM_14,  // bottom
				 GFX_PICTURE_STATE_14,   // state                 
                 GFX_PICTURE_SCALE_14,     // scale
                 (GFX_RESOURCE_HDR*)&ParkTrees_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_14
                 );
        break;
    case Picture13:
        hgcObj.pPicture13Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture13,      // picture ID
                 GFX_PICTURE_LEFT_15,    // left
                 GFX_PICTURE_TOP_15,     // top
                 GFX_PICTURE_RIGHT_15,   // right				 
                 GFX_PICTURE_BOTTOM_15,  // bottom
				 GFX_PICTURE_STATE_15,   // state                 
                 GFX_PICTURE_SCALE_15,     // scale
                 (GFX_RESOURCE_HDR*)&Rockies_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_15
                 );
        break;
    case Picture15:
        hgcObj.pPicture15Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture15,      // picture ID
                 GFX_PICTURE_LEFT_16,    // left
                 GFX_PICTURE_TOP_16,     // top
                 GFX_PICTURE_RIGHT_16,   // right				 
                 GFX_PICTURE_BOTTOM_16,  // bottom
				 GFX_PICTURE_STATE_16,   // state                 
                 GFX_PICTURE_SCALE_16,     // scale
                 (GFX_RESOURCE_HDR*)&SnowLeopard_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_16
                 );
        break;
    case Picture16:
        hgcObj.pPicture16Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture16,      // picture ID
                 GFX_PICTURE_LEFT_17,    // left
                 GFX_PICTURE_TOP_17,     // top
                 GFX_PICTURE_RIGHT_17,   // right				 
                 GFX_PICTURE_BOTTOM_17,  // bottom
				 GFX_PICTURE_STATE_17,   // state                 
                 GFX_PICTURE_SCALE_17,     // scale
                 (GFX_RESOURCE_HDR*)&SnowyHills_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_17
                 );
        break;
    case Picture17:
        hgcObj.pPicture17Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture17,      // picture ID
                 GFX_PICTURE_LEFT_18,    // left
                 GFX_PICTURE_TOP_18,     // top
                 GFX_PICTURE_RIGHT_18,   // right				 
                 GFX_PICTURE_BOTTOM_18,  // bottom
				 GFX_PICTURE_STATE_18,   // state                 
                 GFX_PICTURE_SCALE_18,     // scale
                 (GFX_RESOURCE_HDR*)&Splash_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_18
                 );
        break;
    case Picture18:
        hgcObj.pPicture18Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture18,      // picture ID
                 GFX_PICTURE_LEFT_19,    // left
                 GFX_PICTURE_TOP_19,     // top
                 GFX_PICTURE_RIGHT_19,   // right				 
                 GFX_PICTURE_BOTTOM_19,  // bottom
				 GFX_PICTURE_STATE_19,   // state                 
                 GFX_PICTURE_SCALE_19,     // scale
                 (GFX_RESOURCE_HDR*)&Waterfall_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_19
                 );
        break;
    case Picture19:
        hgcObj.pPicture19Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture19,      // picture ID
                 GFX_PICTURE_LEFT_20,    // left
                 GFX_PICTURE_TOP_20,     // top
                 GFX_PICTURE_RIGHT_20,   // right				 
                 GFX_PICTURE_BOTTOM_20,  // bottom
				 GFX_PICTURE_STATE_20,   // state                 
                 GFX_PICTURE_SCALE_20,     // scale
                 (GFX_RESOURCE_HDR*)&Wheats_JPEG,    // bitmap
                 GFX_PICTURE_SCHEME_20
                 );
        break;
    case Picture5:
        hgcObj.pPicture5Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture5,      // picture ID
                 GFX_PICTURE_LEFT_21,    // left
                 GFX_PICTURE_TOP_21,     // top
                 GFX_PICTURE_RIGHT_21,   // right				 
                 GFX_PICTURE_BOTTOM_21,  // bottom
				 GFX_PICTURE_STATE_21,   // state                 
                 GFX_PICTURE_SCALE_21,     // scale
                 (GFX_RESOURCE_HDR*)&NewHarmonyLogo,    // bitmap
                 GFX_PICTURE_SCHEME_21
                 );
        break;
    case ct_p_FeatureList:
        hgcObj.pct_p_FeatureListObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 ct_p_FeatureList,      // picture ID
                 GFX_PICTURE_LEFT_22,    // left
                 GFX_PICTURE_TOP_22,     // top
                 GFX_PICTURE_RIGHT_22,   // right				 
                 GFX_PICTURE_BOTTOM_22,  // bottom
				 GFX_PICTURE_STATE_22,   // state                 
                 GFX_PICTURE_SCALE_22,     // scale
                 (GFX_RESOURCE_HDR*)&ct_FeatureList,    // bitmap
                 GFX_PICTURE_SCHEME_22
                 );
        break;
    case cs_p_FeatureList:
        hgcObj.pcs_p_FeatureListObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 cs_p_FeatureList,      // picture ID
                 GFX_PICTURE_LEFT_23,    // left
                 GFX_PICTURE_TOP_23,     // top
                 GFX_PICTURE_RIGHT_23,   // right				 
                 GFX_PICTURE_BOTTOM_23,  // bottom
				 GFX_PICTURE_STATE_23,   // state                 
                 GFX_PICTURE_SCALE_23,     // scale
                 (GFX_RESOURCE_HDR*)&cs_FeatureList,    // bitmap
                 GFX_PICTURE_SCHEME_23
                 );
        break;
		case Line21:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xFF));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 479,  // p1y
						 799,  // p2x
						 479); // p2y
			break;
		}		
		case Line20:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0xFF, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 0,  // p1y
						 799,  // p2x
						 0); // p2y
			break;
		}		
		case Line19:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 799,  // p1x
						 0,  // p1y
						 799,  // p2x
						 479); // p2y
			break;
		}		
		case Line1:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 0,  // p1y
						 0,  // p2x
						 479); // p2y
			break;
		}		
		case Line18:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF0, 0x88, 0x18));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 50,  // p1x
						 0,  // p1y
						 750,  // p2x
						 479); // p2y
			break;
		}		
		case Line15:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB0, 0xF8, 0x28));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 200,  // p1x
						 0,  // p1y
						 600,  // p2x
						 479); // p2y
			break;
		}		
		case Line17:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x18, 0xDC, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 399,  // p1x
						 0,  // p1y
						 399,  // p2x
						 479); // p2y
			break;
		}		
		case Line16:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x88, 0x14, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 550,  // p1x
						 0,  // p1y
						 250,  // p2x
						 479); // p2y
			break;
		}		
		case Line14:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x20, 0x08, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 500,  // p1x
						 0,  // p1y
						 300,  // p2x
						 479); // p2y
			break;
		}		
		case Line13:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x08, 0x50, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 450,  // p1x
						 0,  // p1y
						 350,  // p2x
						 479); // p2y
			break;
		}		
		case Line12:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x10, 0xF8, 0xD8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 350,  // p1x
						 0,  // p1y
						 450,  // p2x
						 479); // p2y
			break;
		}		
		case Line11:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xA8, 0x20, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 600,  // p1x
						 0,  // p1y
						 200,  // p2x
						 479); // p2y
			break;
		}		
		case Line10:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x20, 0xF8, 0x50));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 300,  // p1x
						 0,  // p1y
						 500,  // p2x
						 479); // p2y
			break;
		}		
		case Line9:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xE0, 0x14, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 650,  // p1x
						 0,  // p1y
						 150,  // p2x
						 479); // p2y
			break;
		}		
		case Line8:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0x1C, 0xA8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 750,  // p1x
						 0,  // p1y
						 50,  // p2x
						 479); // p2y
			break;
		}		
		case Line7:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF0, 0x28, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 700,  // p1x
						 0,  // p1y
						 100,  // p2x
						 479); // p2y
			break;
		}		
		case Line6:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x78, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 799,  // p1x
						 0,  // p1y
						 0,  // p2x
						 479); // p2y
			break;
		}		
		case Line5:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x30, 0xF8, 0x20));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 250,  // p1x
						 0,  // p1y
						 550,  // p2x
						 479); // p2y
			break;
		}		
		case Line4:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xD8, 0xF8, 0x38));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 150,  // p1x
						 0,  // p1y
						 650,  // p2x
						 479); // p2y
			break;
		}		
		case Line3:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF0, 0xF0, 0x30));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 100,  // p1x
						 0,  // p1y
						 700,  // p2x
						 479); // p2y
			break;
		}		
		case Line2:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF0, 0x0C, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 0,  // p1y
						 799,  // p2x
						 479); // p2y
			break;
		}		
		case Rectangle1:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  30,  // p1x
								  30,  // p1y
								  620,  // p2x
								  450); // p2y
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleDraw(GFX_INDEX_0,
							  30,  // p1x
							  30,  // p1y
							  620,  // p2x
							  450); // p2y
			
			break;
		}	
		case Microchip_Logo:
		{
			GFX_ImageDraw(GFX_INDEX_0,
			              146, // draw point x
						  55, // draw point y
						  (GFX_RESOURCE_HDR*)&microchipLogo_small); // image
			break;
		}	
		case Harmony_Logo:
		{
			GFX_ImageDraw(GFX_INDEX_0,
			              459, // draw point x
						  55, // draw point y
						  (GFX_RESOURCE_HDR*)&NewHarmonyLogo_Small); // image
			break;
		}	
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
        case FeatureListButton:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_FEATURE_LIST);

            }
			
            return true;
        case TouchButton:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_TOUCH_TEST);

            }
			
            return true;
        case SettingsButton:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_SETTINGS);

            }
			
            return true;
        case SlidesButton:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_SLIDES);

            }
			
            return true;
        case Button23:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_SelectNewSlide();

            }
			
            return true;
        case Button7:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button1:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button2:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button3:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button8:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button9:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button10:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button11:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button13:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button24:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button14:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button15:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button16:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button18:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button19:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button20:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button21:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button22:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button12:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button4:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button5:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        case Button6:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_ChangeMode(APP_MODE_MAIN_MENU);

            }
			
            return true;
        default:
            return false; // process by default
    }

    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgDigitalMeters(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Digital Meter events
 */
bool GFX_HGC_MsgDigitalMeters(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
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
        case RadioButtonEnglish:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// Action
				APP_HandleLanguageSetting(APP_LANG_ENGLISH);

            }
			
            return true;
        case RadioButtonChineseSimpl:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// Action
				APP_HandleLanguageSetting(APP_LANG_CHINESE_SIMP);

            }
			
            return true;
        case RadioButtonChineseTrad:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// Action
				APP_HandleLanguageSetting(APP_LANG_CHINESE_TRAD);

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
        case Picture4:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture3:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture1:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture2:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture6:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture7:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture8:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture9:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture10:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture20:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture11:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture12:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture13:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture15:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture16:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture17:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture18:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture19:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				APP_GoToNextSlide();

            }
			
            return true;
        case Picture5:
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

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgWindows(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Window events
 */
bool GFX_HGC_MsgWindows(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}


