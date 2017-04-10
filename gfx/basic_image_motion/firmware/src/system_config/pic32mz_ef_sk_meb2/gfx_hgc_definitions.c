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
extern const GFX_RESOURCE_HDR fan_2;
extern const GFX_RESOURCE_HDR fan_3;
extern const GFX_RESOURCE_HDR fan_4;
extern const GFX_RESOURCE_HDR blue_temp_70;
extern const GFX_RESOURCE_HDR green_temp_70;
extern const GFX_RESOURCE_HDR orange_temp_70;
extern const GFX_RESOURCE_HDR red_temp_70;
extern const GFX_RESOURCE_HDR fan_1;
extern const GFX_RESOURCE_HDR Down_Magenta_80;
extern const GFX_RESOURCE_HDR Down_Magenta_80_pressed;
extern const GFX_RESOURCE_HDR House_Blue_80;
extern const GFX_RESOURCE_HDR House_Blue_80_pressed;
extern const GFX_RESOURCE_HDR Up_Magenta_80;
extern const GFX_RESOURCE_HDR Up_Magenta_80_pressed;
extern const GFX_RESOURCE_HDR Up_Grey_80;
extern const GFX_RESOURCE_HDR Down_Grey_80;
extern const GFX_RESOURCE_HDR base;
extern const GFX_RESOURCE_HDR needle_04;
extern const GFX_RESOURCE_HDR mchip_logo_1;
extern const GFX_RESOURCE_HDR mchip_logo_2;
extern const GFX_RESOURCE_HDR mchip_logo_3;
extern const GFX_RESOURCE_HDR mchip_logo_4;
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
extern const GFX_RESOURCE_HDR mchip_logo_5;
extern const GFX_RESOURCE_HDR mchip_logo_6;
extern const GFX_RESOURCE_HDR mchip_logo_7;
extern const GFX_RESOURCE_HDR mchip_logo_8;
extern const GFX_RESOURCE_HDR mchip_logo_9;
extern const GFX_RESOURCE_HDR mchip_logo_25;
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
extern const GFX_RESOURCE_HDR flash_logo_logo0002;
extern const GFX_RESOURCE_HDR motion_mainscreen;
extern const GFX_RESOURCE_HDR Arial16;
extern const GFX_RESOURCE_HDR Arial8;
extern const GFX_RESOURCE_HDR Arial55;
extern const GFX_RESOURCE_HDR Arial28;

/*** Generated ASCII Text Labels ***/
static const GFX_XCHAR buttonStr_0[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_1[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_2[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_3[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_4[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_5[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_0[] = { 0x31, 0x30, 0x30, 0x0 }; // 100
static const GFX_XCHAR staticTextStr_1[] = { 0x72, 0x70, 0x6d, 0x0 }; // rpm
static const GFX_XCHAR staticTextStr_2[] = { 0x2b, 0x0 }; // +
static const GFX_XCHAR staticTextStr_3[] = { 0x2d, 0x0 }; // -
static const GFX_XCHAR staticTextStr_4[] = { 0x31, 0x32, 0x0 }; // 12
static const GFX_XCHAR staticTextStr_5[] = { 0x53, 0x70, 0x65, 0x65, 0x64, 0x20, 0x0 }; // Speed 
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
    gfxScheme0->pFont =             (GFX_RESOURCE_HDR*)&Arial16;
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
    gfxScheme1->pFont =             (GFX_RESOURCE_HDR*)&Arial55;
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
    gfxScheme2->pFont =             (GFX_RESOURCE_HDR*)&Arial16;
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
    gfxScheme3->pFont =             (GFX_RESOURCE_HDR*)&Arial28;
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
    gfxScheme4->pFont =             (GFX_RESOURCE_HDR*)&Arial55;
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
    gfxScheme5->pFont =             (GFX_RESOURCE_HDR*)&Arial16;
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
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_thermostat:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_mainmenu:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen_3D:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_flash_screen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
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
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_flash_screen);
            return true;
        case HGC_SCREEN_STATE_SETUP_SCREEN_thermostat:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_thermostat);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_thermostat:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_thermostat);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_thermostat:
            GFX_HGC_SetupScreen(thermostat);
            GFX_HGC_DrawScreen_GOL(thermostat);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_thermostat);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_thermostat:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_thermostat);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_thermostat:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_thermostat);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_thermostat:
            GFX_HGC_DrawScreen_Primitives(thermostat);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_thermostat);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_thermostat:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_thermostat);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_thermostat:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_mainmenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_mainmenu);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_mainmenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_mainmenu);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_mainmenu:
            GFX_HGC_SetupScreen(mainmenu);
            GFX_HGC_DrawScreen_GOL(mainmenu);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_mainmenu);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_mainmenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_mainmenu);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_mainmenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_mainmenu);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_mainmenu:
            GFX_HGC_DrawScreen_Primitives(mainmenu);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_mainmenu);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_mainmenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_mainmenu);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_mainmenu:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_screen_3D:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen_3D);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen_3D:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen_3D);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen_3D:
            GFX_HGC_SetupScreen(screen_3D);
            GFX_HGC_DrawScreen_GOL(screen_3D);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen_3D);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen_3D:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen_3D);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen_3D:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen_3D);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen_3D:
            GFX_HGC_DrawScreen_Primitives(screen_3D);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen_3D);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen_3D:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_screen_3D);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen_3D:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_flash_screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_flash_screen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_flash_screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_flash_screen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_flash_screen:
            GFX_HGC_SetupScreen(flash_screen);
            GFX_HGC_DrawScreen_GOL(flash_screen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_flash_screen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_flash_screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_flash_screen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_flash_screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_flash_screen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_flash_screen:
            GFX_HGC_DrawScreen_Primitives(flash_screen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_flash_screen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_flash_screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_flash_screen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_flash_screen:
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
        case thermostat:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case mainmenu:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case screen_3D:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFD,0xFF,0xFF));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case flash_screen:
            // enable double buffering
            GFX_DoubleBufferEnable(GFX_INDEX_0);
			
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
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_thermostat:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_mainmenu:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_screen_3D:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_flash_screen:
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
        case thermostat:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_thermostat);
            break;
        case mainmenu:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_mainmenu);
            break;
        case screen_3D:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_screen_3D);
            break;
        case flash_screen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_flash_screen);
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
        case thermostat:
            GFX_HGC_DrawItem(temp_inc_fan_slow);
            GFX_HGC_DrawItem(temp_dec_fan_fast);
            GFX_HGC_DrawItem(thermometer);
            GFX_HGC_DrawItem(fan);
            GFX_HGC_DrawItem(temp_string);
            GFX_HGC_DrawItem(Button8);
            break;
        case mainmenu:
            GFX_HGC_DrawItem(Picture5);
            GFX_HGC_DrawItem(Button2);
            GFX_HGC_DrawItem(Button3);
            break;
        case screen_3D:
            GFX_HGC_DrawItem(picture3D);
            GFX_HGC_DrawItem(Button1);
            GFX_HGC_DrawItem(speedSlider);
            GFX_HGC_DrawItem(StaticText1);
            GFX_HGC_DrawItem(speedString);
            GFX_HGC_DrawItem(StaticText3);
            GFX_HGC_DrawItem(StaticText4);
            GFX_HGC_DrawItem(StaticText2);
            break;
        case flash_screen:
            GFX_HGC_DrawItem(flash_pic);
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
        case thermostat:
            break;
        case mainmenu:
            break;
        case screen_3D:
            break;
        case flash_screen:
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
    case Button8:
        hgcObj.pButton8Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button8,      // button ID
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
    case temp_dec_fan_fast:
        hgcObj.ptemp_dec_fan_fastObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 temp_dec_fan_fast,      // button ID
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
    case temp_inc_fan_slow:
        hgcObj.ptemp_inc_fan_slowObj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 temp_inc_fan_slow,      // button ID
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
    case Button3:
        hgcObj.pButton3Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button3,      // button ID
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
    case Button2:
        hgcObj.pButton2Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button2,      // button ID
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
    case Button1:
        hgcObj.pButton1Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button1,      // button ID
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
    case speedSlider:
        hgcObj.pspeedSliderObj = GFX_GOL_ScrollBarCreate
                (
                 GFX_INDEX_0,
                 speedSlider,           // Check Box ID
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
    case temp_string:
        hgcObj.ptemp_stringObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 temp_string,      // button ID
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
    case StaticText2:
        hgcObj.pStaticText2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText2,      // button ID
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
    case StaticText4:
        hgcObj.pStaticText4Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText4,      // button ID
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
    case StaticText3:
        hgcObj.pStaticText3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText3,      // button ID
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
    case speedString:
        hgcObj.pspeedStringObj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 speedString,      // button ID
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
    case StaticText1:
        hgcObj.pStaticText1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText1,      // button ID
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
    case fan:
        hgcObj.pfanObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 fan,      // picture ID
                 GFX_PICTURE_LEFT_0,    // left
                 GFX_PICTURE_TOP_0,     // top
                 GFX_PICTURE_RIGHT_0,   // right				 
                 GFX_PICTURE_BOTTOM_0,  // bottom
				 GFX_PICTURE_STATE_0,   // state                 
                 GFX_PICTURE_SCALE_0,     // scale
                 (GFX_RESOURCE_HDR*)&fan_1,    // bitmap
                 GFX_PICTURE_SCHEME_0
                 );
        break;
    case thermometer:
        hgcObj.pthermometerObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 thermometer,      // picture ID
                 GFX_PICTURE_LEFT_1,    // left
                 GFX_PICTURE_TOP_1,     // top
                 GFX_PICTURE_RIGHT_1,   // right				 
                 GFX_PICTURE_BOTTOM_1,  // bottom
				 GFX_PICTURE_STATE_1,   // state                 
                 GFX_PICTURE_SCALE_1,     // scale
                 (GFX_RESOURCE_HDR*)&red_temp_70,    // bitmap
                 GFX_PICTURE_SCHEME_1
                 );
        break;
    case Picture5:
        hgcObj.pPicture5Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture5,      // picture ID
                 GFX_PICTURE_LEFT_2,    // left
                 GFX_PICTURE_TOP_2,     // top
                 GFX_PICTURE_RIGHT_2,   // right				 
                 GFX_PICTURE_BOTTOM_2,  // bottom
				 GFX_PICTURE_STATE_2,   // state                 
                 GFX_PICTURE_SCALE_2,     // scale
                 (GFX_RESOURCE_HDR*)&motion_mainscreen,    // bitmap
                 GFX_PICTURE_SCHEME_2
                 );
        break;
    case picture3D:
        hgcObj.ppicture3DObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 picture3D,      // picture ID
                 GFX_PICTURE_LEFT_3,    // left
                 GFX_PICTURE_TOP_3,     // top
                 GFX_PICTURE_RIGHT_3,   // right				 
                 GFX_PICTURE_BOTTOM_3,  // bottom
				 GFX_PICTURE_STATE_3,   // state                 
                 GFX_PICTURE_SCALE_3,     // scale
                 NULL,    // bitmap
                 GFX_PICTURE_SCHEME_3
                 );
        break;
    case flash_pic:
        hgcObj.pflash_picObj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 flash_pic,      // picture ID
                 GFX_PICTURE_LEFT_4,    // left
                 GFX_PICTURE_TOP_4,     // top
                 GFX_PICTURE_RIGHT_4,   // right				 
                 GFX_PICTURE_BOTTOM_4,  // bottom
				 GFX_PICTURE_STATE_4,   // state                 
                 GFX_PICTURE_SCALE_4,     // scale
                 NULL,    // bitmap
                 GFX_PICTURE_SCHEME_4
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
        case Button8:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(flash_screen);
				
				// Action
				Load_flash_screen();

            }
			
            return true;
        case temp_dec_fan_fast:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				downarrow_pressed();

            }
			
            return true;
        case temp_inc_fan_slow:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				uparrow_pressed();

            }
			
            return true;
        case Button3:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(screen_3D);
				
				// Action
				Load_3D_screen();

            }
			
            return true;
        case Button2:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(thermostat);
				
				// Action
				Load_thermo_screen();

            }
			
            return true;
        case Button1:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(flash_screen);
				
				// Action
				Load_flash_screen();

            }
			
            return true;
        default:
            return false; // process by default
    }

    return true;
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
        case speedSlider:
			if (objMsg == GFX_GOL_SCROLLBAR_ACTION_INC)
            {
				// Scrollbar Increment Event Code
				// Action
				motion_speed(GFX_GOL_ScrollBarPositionGet(hgcObj.pspeedSliderObj));

            }
            if (objMsg == GFX_GOL_SCROLLBAR_ACTION_DEC)
            {
                // Scrollbar Decrement Event Code
				// Action
				motion_speed(GFX_GOL_ScrollBarPositionGet(hgcObj.pspeedSliderObj));

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
        case flash_pic:
			if (objMsg == GFX_GOL_PICTURECONTROL_ACTION_SELECTED)
            {
				// Picture Selected Event Code
				// Action
				GFX_HGC_ChangeScreen(mainmenu);
            }
			
            return true;
        default:
            return false; // default false as it is not processed
    }    
}


