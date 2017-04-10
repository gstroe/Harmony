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

/*** Generated Asset References ***/
extern const GFX_RESOURCE_HDR AutumnGass;
extern const GFX_RESOURCE_HDR ParkTrees;
extern const GFX_RESOURCE_HDR Wheats;
extern const GFX_RESOURCE_HDR FalseCreek;
extern const GFX_RESOURCE_HDR Fishes;
extern const GFX_RESOURCE_HDR ColorPalette;
extern const GFX_RESOURCE_HDR Sherwood;
extern const GFX_RESOURCE_HDR SnowyHills;
extern const GFX_RESOURCE_HDR Rockies;
extern const GFX_RESOURCE_HDR Splash;
extern const GFX_RESOURCE_HDR right;
extern const GFX_RESOURCE_HDR left;
extern const GFX_RESOURCE_HDR home;
extern const GFX_RESOURCE_HDR aboutdemo;
extern const GFX_RESOURCE_HDR MacBethChart;
extern const GFX_RESOURCE_HDR screen1_new;
extern const GFX_RESOURCE_HDR Arial;
extern const GFX_RESOURCE_HDR Bernard_MT_Condensed;

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
static const GFX_XCHAR staticTextStr_0[] = { 0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x4a, 0x50, 0x45, 0x47, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x0 }; // This is a JPEG image
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
    gfxScheme0->pFont =             (GFX_RESOURCE_HDR*)&Arial;
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
    gfxScheme1->pFont =             (GFX_RESOURCE_HDR*)&Arial;
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
    gfxScheme2->pFont =             (GFX_RESOURCE_HDR*)&Bernard_MT_Condensed;
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
    gfxScheme3->pFont =             (GFX_RESOURCE_HDR*)&Arial;
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
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen1:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen2:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen3:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen4:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen5:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen6:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen7:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen8:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen9:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen10:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen11:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen12:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
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
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Screen1);
            return true;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Screen1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen1);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen1:
            GFX_HGC_SetupScreen(Screen1);
            GFX_HGC_DrawScreen_GOL(Screen1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen1);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen1);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen1:
            GFX_HGC_DrawScreen_Primitives(Screen1);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen1);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen1);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen1:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Screen2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen2);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen2:
            GFX_HGC_SetupScreen(Screen2);
            GFX_HGC_DrawScreen_GOL(Screen2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen2);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen2);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen2:
            GFX_HGC_DrawScreen_Primitives(Screen2);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen2);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen2);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen2:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Screen3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen3);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen3:
            GFX_HGC_SetupScreen(Screen3);
            GFX_HGC_DrawScreen_GOL(Screen3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen3);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen3);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen3:
            GFX_HGC_DrawScreen_Primitives(Screen3);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen3);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen3);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen3:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Screen4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen4);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen4);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen4:
            GFX_HGC_SetupScreen(Screen4);
            GFX_HGC_DrawScreen_GOL(Screen4);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen4);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen4);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen4);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen4:
            GFX_HGC_DrawScreen_Primitives(Screen4);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen4);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen4);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen4:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen5:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen5);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen5:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen5);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen5:
            GFX_HGC_SetupScreen(screen5);
            GFX_HGC_DrawScreen_GOL(screen5);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen5);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen5:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen5);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen5:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen5);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen5:
            GFX_HGC_DrawScreen_Primitives(screen5);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen5);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen5:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen5);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen5:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen6:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen6);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen6:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen6);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen6:
            GFX_HGC_SetupScreen(screen6);
            GFX_HGC_DrawScreen_GOL(screen6);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen6);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen6:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen6);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen6:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen6);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen6:
            GFX_HGC_DrawScreen_Primitives(screen6);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen6);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen6:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen6);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen6:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen7:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen7);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen7:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen7);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen7:
            GFX_HGC_SetupScreen(screen7);
            GFX_HGC_DrawScreen_GOL(screen7);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen7);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen7:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen7);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen7:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen7);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen7:
            GFX_HGC_DrawScreen_Primitives(screen7);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen7);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen7:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen7);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen7:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen8:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen8);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen8:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen8);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen8:
            GFX_HGC_SetupScreen(screen8);
            GFX_HGC_DrawScreen_GOL(screen8);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen8);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen8:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen8);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen8:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen8);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen8:
            GFX_HGC_DrawScreen_Primitives(screen8);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen8);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen8:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen8);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen8:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen9:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen9);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen9:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen9);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen9:
            GFX_HGC_SetupScreen(screen9);
            GFX_HGC_DrawScreen_GOL(screen9);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen9);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen9:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen9);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen9:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen9);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen9:
            GFX_HGC_DrawScreen_Primitives(screen9);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen9);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen9:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen9);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen9:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen10:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen10);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen10:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen10);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen10:
            GFX_HGC_SetupScreen(screen10);
            GFX_HGC_DrawScreen_GOL(screen10);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen10);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen10:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen10);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen10:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen10);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen10:
            GFX_HGC_DrawScreen_Primitives(screen10);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen10);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen10:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen10);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen10:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen11:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen11);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen11:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen11);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen11:
            GFX_HGC_SetupScreen(screen11);
            GFX_HGC_DrawScreen_GOL(screen11);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen11);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen11:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen11);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen11:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen11);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen11:
            GFX_HGC_DrawScreen_Primitives(screen11);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen11);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen11:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen11);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen11:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen12:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen12);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen12:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen12);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen12:
            GFX_HGC_SetupScreen(screen12);
            GFX_HGC_DrawScreen_GOL(screen12);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen12);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen12:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen12);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen12:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen12);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen12:
            GFX_HGC_DrawScreen_Primitives(screen12);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen12);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen12:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen12);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen12:
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
        case Screen1:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Screen2:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Screen3:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Screen4:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen5:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen6:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen7:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen8:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen9:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen10:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen11:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen12:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x70,0x74,0x70));
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
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen1:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen2:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen3:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen4:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen5:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen6:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen7:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen8:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen9:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen10:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen11:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen12:
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
        case Screen1:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Screen1);
            break;
        case Screen2:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Screen2);
            break;
        case Screen3:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Screen3);
            break;
        case Screen4:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Screen4);
            break;
        case screen5:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen5);
            break;
        case screen6:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen6);
            break;
        case screen7:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen7);
            break;
        case screen8:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen8);
            break;
        case screen9:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen9);
            break;
        case screen10:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen10);
            break;
        case screen11:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen11);
            break;
        case screen12:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen12);
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
        case Screen1:
            GFX_HGC_DrawItem(Picture1);
            GFX_HGC_DrawItem(Button1);
            GFX_HGC_DrawItem(Button6);
            GFX_HGC_DrawItem(Button22);
            break;
        case Screen2:
            GFX_HGC_DrawItem(Picture2);
            GFX_HGC_DrawItem(Button3);
            GFX_HGC_DrawItem(Button14);
            break;
        case Screen3:
            GFX_HGC_DrawItem(Picture3);
            GFX_HGC_DrawItem(Button4);
            GFX_HGC_DrawItem(Button15);
            break;
        case Screen4:
            GFX_HGC_DrawItem(Picture6);
            GFX_HGC_DrawItem(Button2);
            GFX_HGC_DrawItem(Button16);
            break;
        case screen5:
            GFX_HGC_DrawItem(Picture4);
            GFX_HGC_DrawItem(Button9);
            GFX_HGC_DrawItem(Button17);
            break;
        case screen6:
            GFX_HGC_DrawItem(Picture5);
            GFX_HGC_DrawItem(Button11);
            GFX_HGC_DrawItem(Button18);
            break;
        case screen7:
            GFX_HGC_DrawItem(Picture7);
            GFX_HGC_DrawItem(Button5);
            GFX_HGC_DrawItem(Button19);
            break;
        case screen8:
            GFX_HGC_DrawItem(Picture8);
            GFX_HGC_DrawItem(Button8);
            GFX_HGC_DrawItem(Button20);
            break;
        case screen9:
            GFX_HGC_DrawItem(Picture9);
            GFX_HGC_DrawItem(Button10);
            GFX_HGC_DrawItem(StaticText1);
            GFX_HGC_DrawItem(Button7);
            break;
        case screen10:
            GFX_HGC_DrawItem(Picture10);
            GFX_HGC_DrawItem(Button12);
            GFX_HGC_DrawItem(Button21);
            break;
        case screen11:
            GFX_HGC_DrawItem(Picture11);
            GFX_HGC_DrawItem(Button13);
            GFX_HGC_DrawItem(Button24);
            break;
        case screen12:
            GFX_HGC_DrawItem(Picture12);
            GFX_HGC_DrawItem(Button23);
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
        case Screen1:
            break;
        case Screen2:
            break;
        case Screen3:
            break;
        case Screen4:
            break;
        case screen5:
            break;
        case screen6:
            break;
        case screen7:
            break;
        case screen8:
            break;
        case screen9:
            break;
        case screen10:
            break;
        case screen11:
            break;
        case screen12:
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
    case Button22:
        hgcObj.pButton22Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button22,      // button ID
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
    case Button6:
        hgcObj.pButton6Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button6,      // button ID
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
    case Button1:
        hgcObj.pButton1Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button1,      // button ID
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
    case Button14:
        hgcObj.pButton14Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button14,      // button ID
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
    case Button3:
        hgcObj.pButton3Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button3,      // button ID
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
    case Button15:
        hgcObj.pButton15Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button15,      // button ID
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
    case Button4:
        hgcObj.pButton4Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button4,      // button ID
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
    case Button16:
        hgcObj.pButton16Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button16,      // button ID
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
    case Button2:
        hgcObj.pButton2Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button2,      // button ID
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
    case Button17:
        hgcObj.pButton17Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button17,      // button ID
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
    case Button18:
        hgcObj.pButton18Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button18,      // button ID
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
    case Button19:
        hgcObj.pButton19Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button19,      // button ID
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
    case Button5:
        hgcObj.pButton5Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button5,      // button ID
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
    case Button20:
        hgcObj.pButton20Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button20,      // button ID
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
    case Button8:
        hgcObj.pButton8Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button8,      // button ID
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
    case Button7:
        hgcObj.pButton7Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button7,      // button ID
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
    case Button10:
        hgcObj.pButton10Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button10,      // button ID
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
    case Button21:
        hgcObj.pButton21Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button21,      // button ID
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
    case Button12:
        hgcObj.pButton12Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button12,      // button ID
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
    case Button24:
        hgcObj.pButton24Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button24,      // button ID
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
    case Button13:
        hgcObj.pButton13Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button13,      // button ID
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
    case Button23:
        hgcObj.pButton23Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button23,      // button ID
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
    case StaticText1:
        hgcObj.pStaticText1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText1,      // button ID
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
    case Picture1:
        hgcObj.pPicture1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture1,      // picture ID
                 GFX_PICTURE_LEFT_0,    // left
                 GFX_PICTURE_TOP_0,     // top
                 GFX_PICTURE_RIGHT_0,   // right				 
                 GFX_PICTURE_BOTTOM_0,  // bottom
				 GFX_PICTURE_STATE_0,   // state                 
                 GFX_PICTURE_SCALE_0,     // scale
                 (GFX_RESOURCE_HDR*)&screen1_new,    // bitmap
                 GFX_PICTURE_SCHEME_0
                 );
        break;
    case Picture2:
        hgcObj.pPicture2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture2,      // picture ID
                 GFX_PICTURE_LEFT_1,    // left
                 GFX_PICTURE_TOP_1,     // top
                 GFX_PICTURE_RIGHT_1,   // right				 
                 GFX_PICTURE_BOTTOM_1,  // bottom
				 GFX_PICTURE_STATE_1,   // state                 
                 GFX_PICTURE_SCALE_1,     // scale
                 (GFX_RESOURCE_HDR*)&Fishes,    // bitmap
                 GFX_PICTURE_SCHEME_1
                 );
        break;
    case Picture3:
        hgcObj.pPicture3Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture3,      // picture ID
                 GFX_PICTURE_LEFT_2,    // left
                 GFX_PICTURE_TOP_2,     // top
                 GFX_PICTURE_RIGHT_2,   // right				 
                 GFX_PICTURE_BOTTOM_2,  // bottom
				 GFX_PICTURE_STATE_2,   // state                 
                 GFX_PICTURE_SCALE_2,     // scale
                 (GFX_RESOURCE_HDR*)&FalseCreek,    // bitmap
                 GFX_PICTURE_SCHEME_2
                 );
        break;
    case Picture6:
        hgcObj.pPicture6Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture6,      // picture ID
                 GFX_PICTURE_LEFT_3,    // left
                 GFX_PICTURE_TOP_3,     // top
                 GFX_PICTURE_RIGHT_3,   // right				 
                 GFX_PICTURE_BOTTOM_3,  // bottom
				 GFX_PICTURE_STATE_3,   // state                 
                 GFX_PICTURE_SCALE_3,     // scale
                 (GFX_RESOURCE_HDR*)&ColorPalette,    // bitmap
                 GFX_PICTURE_SCHEME_3
                 );
        break;
    case Picture4:
        hgcObj.pPicture4Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture4,      // picture ID
                 GFX_PICTURE_LEFT_4,    // left
                 GFX_PICTURE_TOP_4,     // top
                 GFX_PICTURE_RIGHT_4,   // right				 
                 GFX_PICTURE_BOTTOM_4,  // bottom
				 GFX_PICTURE_STATE_4,   // state                 
                 GFX_PICTURE_SCALE_4,     // scale
                 (GFX_RESOURCE_HDR*)&Sherwood,    // bitmap
                 GFX_PICTURE_SCHEME_4
                 );
        break;
    case Picture5:
        hgcObj.pPicture5Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture5,      // picture ID
                 GFX_PICTURE_LEFT_5,    // left
                 GFX_PICTURE_TOP_5,     // top
                 GFX_PICTURE_RIGHT_5,   // right				 
                 GFX_PICTURE_BOTTOM_5,  // bottom
				 GFX_PICTURE_STATE_5,   // state                 
                 GFX_PICTURE_SCALE_5,     // scale
                 (GFX_RESOURCE_HDR*)&SnowyHills,    // bitmap
                 GFX_PICTURE_SCHEME_5
                 );
        break;
    case Picture7:
        hgcObj.pPicture7Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture7,      // picture ID
                 GFX_PICTURE_LEFT_6,    // left
                 GFX_PICTURE_TOP_6,     // top
                 GFX_PICTURE_RIGHT_6,   // right				 
                 GFX_PICTURE_BOTTOM_6,  // bottom
				 GFX_PICTURE_STATE_6,   // state                 
                 GFX_PICTURE_SCALE_6,     // scale
                 (GFX_RESOURCE_HDR*)&AutumnGass,    // bitmap
                 GFX_PICTURE_SCHEME_6
                 );
        break;
    case Picture8:
        hgcObj.pPicture8Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture8,      // picture ID
                 GFX_PICTURE_LEFT_7,    // left
                 GFX_PICTURE_TOP_7,     // top
                 GFX_PICTURE_RIGHT_7,   // right				 
                 GFX_PICTURE_BOTTOM_7,  // bottom
				 GFX_PICTURE_STATE_7,   // state                 
                 GFX_PICTURE_SCALE_7,     // scale
                 (GFX_RESOURCE_HDR*)&Sherwood,    // bitmap
                 GFX_PICTURE_SCHEME_7
                 );
        break;
    case Picture9:
        hgcObj.pPicture9Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture9,      // picture ID
                 GFX_PICTURE_LEFT_8,    // left
                 GFX_PICTURE_TOP_8,     // top
                 GFX_PICTURE_RIGHT_8,   // right				 
                 GFX_PICTURE_BOTTOM_8,  // bottom
				 GFX_PICTURE_STATE_8,   // state                 
                 GFX_PICTURE_SCALE_8,     // scale
                 (GFX_RESOURCE_HDR*)&MacBethChart,    // bitmap
                 GFX_PICTURE_SCHEME_8
                 );
        break;
    case Picture10:
        hgcObj.pPicture10Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture10,      // picture ID
                 GFX_PICTURE_LEFT_9,    // left
                 GFX_PICTURE_TOP_9,     // top
                 GFX_PICTURE_RIGHT_9,   // right				 
                 GFX_PICTURE_BOTTOM_9,  // bottom
				 GFX_PICTURE_STATE_9,   // state                 
                 GFX_PICTURE_SCALE_9,     // scale
                 (GFX_RESOURCE_HDR*)&Rockies,    // bitmap
                 GFX_PICTURE_SCHEME_9
                 );
        break;
    case Picture11:
        hgcObj.pPicture11Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture11,      // picture ID
                 GFX_PICTURE_LEFT_10,    // left
                 GFX_PICTURE_TOP_10,     // top
                 GFX_PICTURE_RIGHT_10,   // right				 
                 GFX_PICTURE_BOTTOM_10,  // bottom
				 GFX_PICTURE_STATE_10,   // state                 
                 GFX_PICTURE_SCALE_10,     // scale
                 (GFX_RESOURCE_HDR*)&Splash,    // bitmap
                 GFX_PICTURE_SCHEME_10
                 );
        break;
    case Picture12:
        hgcObj.pPicture12Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture12,      // picture ID
                 GFX_PICTURE_LEFT_11,    // left
                 GFX_PICTURE_TOP_11,     // top
                 GFX_PICTURE_RIGHT_11,   // right				 
                 GFX_PICTURE_BOTTOM_11,  // bottom
				 GFX_PICTURE_STATE_11,   // state                 
                 GFX_PICTURE_SCALE_11,     // scale
                 (GFX_RESOURCE_HDR*)&aboutdemo,    // bitmap
                 GFX_PICTURE_SCHEME_11
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
        case Button22:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen12);
            }
			
            return true;
        case Button6:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen10);
            }
			
            return true;
        case Button1:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen2);
            }
			
            return true;
        case Button14:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen1);
            }
			
            return true;
        case Button3:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen3);
            }
			
            return true;
        case Button15:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen2);
            }
			
            return true;
        case Button4:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen4);
            }
			
            return true;
        case Button16:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen3);
            }
			
            return true;
        case Button2:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen5);
            }
			
            return true;
        case Button17:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen4);
            }
			
            return true;
        case Button9:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen6);
            }
			
            return true;
        case Button18:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen5);
            }
			
            return true;
        case Button11:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen7);
            }
			
            return true;
        case Button19:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen6);
            }
			
            return true;
        case Button5:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen8);
            }
			
            return true;
        case Button20:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen7);
            }
			
            return true;
        case Button8:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen1);
            }
			
            return true;
        case Button7:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen11);
            }
			
            return true;
        case Button10:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen1);
            }
			
            return true;
        case Button21:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen1);
            }
			
            return true;
        case Button12:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen11);
            }
			
            return true;
        case Button24:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen9);
            }
			
            return true;
        case Button13:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen10);
            }
			
            return true;
        case Button23:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Screen1);
            }
			
            return true;
        default:
            return false; // process by default
    }

    return true;
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
        default:
            return false; // default false as it is not processed
    }    
}


