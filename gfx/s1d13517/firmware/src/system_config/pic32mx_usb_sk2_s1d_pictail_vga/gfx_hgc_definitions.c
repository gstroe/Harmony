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

    Created with MPLAB Harmony Version 1.05
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
static GFX_GOL_OBJ_SCHEME *gfxScheme0;
static GFX_GOL_OBJ_SCHEME *gfxScheme1;
static GFX_GOL_OBJ_SCHEME *gfxScheme2;
static GFX_GOL_OBJ_SCHEME *gfxScheme3;
static GFX_GOL_OBJ_SCHEME *gfxScheme4;
static GFX_GOL_OBJ_SCHEME *gfxScheme5;
static GFX_GOL_OBJ_SCHEME *gfxScheme6;

/*** Generated Asset References ***/
extern const GFX_RESOURCE_HDR harmony;
extern const GFX_RESOURCE_HDR file_browser;
extern const GFX_RESOURCE_HDR appointment_new;
extern const GFX_RESOURCE_HDR list_add;
extern const GFX_RESOURCE_HDR list_remove;
extern const GFX_RESOURCE_HDR House;
extern const GFX_RESOURCE_HDR help_faq;
extern const GFX_RESOURCE_HDR Arial;
extern const GFX_RESOURCE_HDR Arial30;
extern const GFX_RESOURCE_HDR Arial60;

/*** Generated ASCII Text Labels ***/
static const GFX_XCHAR buttonStr_0[] = { 0x49, 0x6e, 0x66, 0x6f, 0x0 }; // Info
static const GFX_XCHAR buttonStr_1[] = { 0x41, 0x6c, 0x70, 0x68, 0x61, 0x42, 0x6c, 0x65, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x0 }; // AlphaBlending
static const GFX_XCHAR buttonStr_2[] = { 0x47, 0x72, 0x61, 0x64, 0x69, 0x65, 0x6e, 0x74, 0x73, 0x0 }; // Gradients
static const GFX_XCHAR buttonStr_3[] = { 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // Speed
static const GFX_XCHAR buttonStr_4[] = { 0x43, 0x6f, 0x6d, 0x66, 0x6f, 0x72, 0x74, 0x0 }; // Comfort
static const GFX_XCHAR buttonStr_5[] = { 0x41, 0x55, 0x54, 0x4f, 0x0 }; // AUTO
static const GFX_XCHAR buttonStr_6[] = { 0x4f, 0x4e, 0x0 }; // ON
static const GFX_XCHAR buttonStr_7[] = { 0x43, 0x4f, 0x4f, 0x4c, 0x0 }; // COOL
static const GFX_XCHAR buttonStr_8[] = { 0x48, 0x45, 0x41, 0x54, 0x0 }; // HEAT
static const GFX_XCHAR buttonStr_9[] = { 0x4f, 0x46, 0x46, 0x0 }; // OFF
static const GFX_XCHAR buttonStr_10[] = { 0x41, 0x55, 0x54, 0x4f, 0x0 }; // AUTO
static const GFX_XCHAR buttonStr_11[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_12[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_13[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_14[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_15[] = { 0x3c, 0x3c, 0x3c, 0x3c, 0x0 }; // <<<<
static const GFX_XCHAR buttonStr_16[] = { 0x3e, 0x3e, 0x3e, 0x3e, 0x0 }; // >>>>
static const GFX_XCHAR buttonStr_17[] = { 0x4d, 0x61, 0x69, 0x6e, 0x0 }; // Main
static const GFX_XCHAR buttonStr_18[] = { 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // Speed
static const GFX_XCHAR buttonStr_19[] = { 0x47, 0x72, 0x61, 0x64, 0x69, 0x65, 0x6e, 0x74, 0x73, 0x0 }; // Gradients
static const GFX_XCHAR buttonStr_20[] = { 0x41, 0x6c, 0x70, 0x68, 0x61, 0x42, 0x6c, 0x65, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x0 }; // AlphaBlending
static const GFX_XCHAR buttonStr_21[] = { 0x49, 0x6e, 0x66, 0x6f, 0x0 }; // Info
static const GFX_XCHAR buttonStr_22[] = { 0x43, 0x6f, 0x6d, 0x66, 0x6f, 0x72, 0x74, 0x0 }; // Comfort
static const GFX_XCHAR buttonStr_23[] = { 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // Speed
static const GFX_XCHAR buttonStr_24[] = { 0x4d, 0x61, 0x69, 0x6e, 0x0 }; // Main
static const GFX_XCHAR buttonStr_25[] = { 0x41, 0x6c, 0x70, 0x68, 0x61, 0x42, 0x6c, 0x65, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x0 }; // AlphaBlending
static const GFX_XCHAR buttonStr_26[] = { 0x49, 0x6e, 0x66, 0x6f, 0x0 }; // Info
static const GFX_XCHAR buttonStr_27[] = { 0x43, 0x6f, 0x6d, 0x66, 0x6f, 0x72, 0x74, 0x0 }; // Comfort
static const GFX_XCHAR buttonStr_28[] = { 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // Speed
static const GFX_XCHAR buttonStr_29[] = { 0x47, 0x72, 0x61, 0x64, 0x69, 0x65, 0x6e, 0x74, 0x73, 0x0 }; // Gradients
static const GFX_XCHAR buttonStr_30[] = { 0x4d, 0x61, 0x69, 0x6e, 0x0 }; // Main
static const GFX_XCHAR buttonStr_31[] = { 0x49, 0x6e, 0x66, 0x6f, 0x0 }; // Info
static const GFX_XCHAR buttonStr_32[] = { 0x43, 0x6f, 0x6d, 0x66, 0x6f, 0x72, 0x74, 0x0 }; // Comfort
static const GFX_XCHAR buttonStr_33[] = { 0x53, 0x70, 0x65, 0x65, 0x64, 0x0 }; // Speed
static const GFX_XCHAR buttonStr_34[] = { 0x47, 0x72, 0x61, 0x64, 0x69, 0x65, 0x6e, 0x74, 0x73, 0x0 }; // Gradients
static const GFX_XCHAR buttonStr_35[] = { 0x41, 0x6c, 0x70, 0x68, 0x61, 0x42, 0x6c, 0x65, 0x6e, 0x64, 0x69, 0x6e, 0x67, 0x0 }; // AlphaBlending
static const GFX_XCHAR buttonStr_36[] = { 0x4d, 0x61, 0x69, 0x6e, 0x0 }; // Main
static GFX_XCHAR* GroupBox2_text = "Fan Mode";
static GFX_XCHAR* GroupBox1_text = "System Mode";
static const GFX_XCHAR staticTextStr_0[] = { 0x37, 0x32, 0x0 }; // 72
static const GFX_XCHAR staticTextStr_1[] = { 0x37, 0x38, 0x0 }; // 78
static const GFX_XCHAR staticTextStr_2[] = { 0x37, 0x32, 0x0 }; // 72
static const GFX_XCHAR staticTextStr_3[] = { 0x55, 0x70, 0x73, 0x74, 0x61, 0x69, 0x72, 0x73, 0x0 }; // Upstairs
static const GFX_XCHAR windowTextStr_0[] = { 0x44, 0x65, 0x6d, 0x6f, 0x20, 0x46, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x73, 0x0 }; // Demo Features

/*** HGC Object Global ***/
HGC_OBJECTS hgcObj;
static HGC_STATES hgcState;

/*** Message System Service Globals ***/
SYS_MSG_INSTANCE iSysMsg = SYS_MSG_0;
SYS_OBJ_HANDLE hSysMsg, hMsgType, hMailbox;

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

    SYS_TOUCH_Open(SYS_TOUCH_INDEX_0);

    hgcObj.samplePoints.touchCalUlx = TOUCHCAL_ULX;
    hgcObj.samplePoints.touchCalUly = TOUCHCAL_ULY;

    hgcObj.samplePoints.touchCalUrx = TOUCHCAL_URX;
    hgcObj.samplePoints.touchCalUry = TOUCHCAL_URY;

    hgcObj.samplePoints.touchCalLrx = TOUCHCAL_LRX;
    hgcObj.samplePoints.touchCalLry = TOUCHCAL_LRY;

    hgcObj.samplePoints.touchCalLlx = TOUCHCAL_LLX;
    hgcObj.samplePoints.touchCalLly = TOUCHCAL_LLY;

    SYS_TOUCH_CalibrationSet(SYS_TOUCH_INDEX_0, &hgcObj.samplePoints);

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
    gfxScheme0->pFont =             (GFX_RESOURCE_HDR*)&Arial30;
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
    gfxScheme1->pFont =             (GFX_RESOURCE_HDR*)&Arial60;
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
    gfxScheme2->pFont =             (GFX_RESOURCE_HDR*)&Arial30;
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
    gfxScheme4->pFont =             (GFX_RESOURCE_HDR*)&Arial;
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
    gfxScheme5->pFont =             (GFX_RESOURCE_HDR*)&Arial;
    gfxScheme5->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme5->fillStyle =         GFX_SCHEME_FILL_STYLE_5;
	gfxScheme5->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_5;

    gfxScheme6 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme6->AlphaValue =        GFX_SCHEME_ALPHA_6;
#endif
    gfxScheme6->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_6, GFX_SCHEME_PRIMARY_COLOR_GREEN_6, GFX_SCHEME_PRIMARY_COLOR_BLUE_6);
    gfxScheme6->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_6, GFX_SCHEME_SECONDARY_COLOR_GREEN_6, GFX_SCHEME_SECONDARY_COLOR_BLUE_6);
    gfxScheme6->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_6, GFX_SCHEME_DISABLED_COLOR_GREEN_6, GFX_SCHEME_DISABLED_COLOR_BLUE_6);
    gfxScheme6->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_6, GFX_SCHEME_BACKGROUND_COLOR_GREEN_6, GFX_SCHEME_BACKGROUND_COLOR_BLUE_6);
	gfxScheme6->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_6;
    gfxScheme6->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_6, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_6, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_6);
    gfxScheme6->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_6, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_6, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_6);
	gfxScheme6->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_6, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_6, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_6);
    gfxScheme6->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_6, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_6, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_6);
    gfxScheme6->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_6, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_6, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_6);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme6->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_6, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_6, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_6);
	gfxScheme6->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_6, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_6, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_6);
#endif
    gfxScheme6->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_6;
    gfxScheme6->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_6;
    gfxScheme6->pFont =             (GFX_RESOURCE_HDR*)&Arial;
    gfxScheme6->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme6->fillStyle =         GFX_SCHEME_FILL_STYLE_6;
	gfxScheme6->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_6;

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
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MainScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Comfort:
            if (GFX_HGC_MsgButtons(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Gradients:
            if (GFX_HGC_MsgButtons(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AlphaBlend:
            if (GFX_HGC_MsgButtons(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Info:
            if (GFX_HGC_MsgButtons(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgPictures(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj) == true)
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
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MainScreen);
            return true;
        case HGC_SCREEN_STATE_SETUP_SCREEN_MainScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MainScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MainScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MainScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MainScreen:
            GFX_HGC_SetupScreen(MainScreen);
            GFX_HGC_DrawScreen_GOL(MainScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MainScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MainScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MainScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MainScreen:
            GFX_HGC_DrawScreen_Primitives(MainScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MainScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MainScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_MainScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MainScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Comfort:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Comfort);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Comfort:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Comfort);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Comfort:
            GFX_HGC_SetupScreen(Comfort);
            GFX_HGC_DrawScreen_GOL(Comfort);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Comfort);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Comfort:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Comfort);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Comfort:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Comfort);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Comfort:
            GFX_HGC_DrawScreen_Primitives(Comfort);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Comfort);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Comfort:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Comfort);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Comfort:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Gradients:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Gradients);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Gradients:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Gradients);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Gradients:
            GFX_HGC_SetupScreen(Gradients);
            GFX_HGC_DrawScreen_GOL(Gradients);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Gradients);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Gradients:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Gradients);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Gradients:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Gradients);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Gradients:
            GFX_HGC_DrawScreen_Primitives(Gradients);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Gradients);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Gradients:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Gradients);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Gradients:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_AlphaBlend:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AlphaBlend);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_AlphaBlend:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AlphaBlend);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_AlphaBlend:
            GFX_HGC_SetupScreen(AlphaBlend);
            GFX_HGC_DrawScreen_GOL(AlphaBlend);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AlphaBlend);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_AlphaBlend:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AlphaBlend);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_AlphaBlend:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AlphaBlend);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_AlphaBlend:
            GFX_HGC_DrawScreen_Primitives(AlphaBlend);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AlphaBlend);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_AlphaBlend:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_AlphaBlend);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_AlphaBlend:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Info:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Info);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Info:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Info);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Info:
            GFX_HGC_SetupScreen(Info);
            GFX_HGC_DrawScreen_GOL(Info);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Info);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Info:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Info);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Info:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Info);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Info:
            GFX_HGC_DrawScreen_Primitives(Info);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Info);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Info:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_Info);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_Info:
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
        case MainScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0xFF, 0xFF));
            GFX_ScreenClear(GFX_INDEX_0);

            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Comfort:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0xF8));
            GFX_ScreenClear(GFX_INDEX_0);

            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Gradients:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0xFF, 0xFF));
            GFX_ScreenClear(GFX_INDEX_0);

            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case AlphaBlend:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0xFF, 0xFF));
            GFX_ScreenClear(GFX_INDEX_0);

            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case Info:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0xFF, 0xFF));
            GFX_ScreenClear(GFX_INDEX_0);

            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        default:
            break;
    }
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
        case MainScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MainScreen);
            break;
        case Comfort:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Comfort);
            break;
        case Gradients:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Gradients);
            break;
        case AlphaBlend:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_AlphaBlend);
            break;
        case Info:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Info);
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
        case MainScreen:
            GFX_HGC_DrawItem(Picture2);
            GFX_HGC_DrawItem(Button1);
            GFX_HGC_DrawItem(Button3);
            GFX_HGC_DrawItem(Button4);
            GFX_HGC_DrawItem(Button5);
            GFX_HGC_DrawItem(Button6);
            break;
        case Comfort:
            GFX_HGC_DrawItem(Picture1);
            GFX_HGC_DrawItem(Button7);
            GFX_HGC_DrawItem(Button8);
            GFX_HGC_DrawItem(Button9);
            GFX_HGC_DrawItem(Button10);
            GFX_HGC_DrawItem(Button11);
            GFX_HGC_DrawItem(Button2);
            GFX_HGC_DrawItem(Button12);
            GFX_HGC_DrawItem(StaticText1);
            GFX_HGC_DrawItem(Button13);
            GFX_HGC_DrawItem(Button14);
            GFX_HGC_DrawItem(Button15);
            GFX_HGC_DrawItem(Button16);
            GFX_HGC_DrawItem(StaticText3);
            GFX_HGC_DrawItem(StaticText4);
            GFX_HGC_DrawItem(StaticText2);
            GFX_HGC_DrawItem(GroupBox1);
            GFX_HGC_DrawItem(Button17);
            GFX_HGC_DrawItem(Button19);
            GFX_HGC_DrawItem(Button20);
            GFX_HGC_DrawItem(Button18);
            GFX_HGC_DrawItem(GroupBox2);
            GFX_HGC_DrawItem(Button21);
            GFX_HGC_DrawItem(Button22);
            break;
        case Gradients:
            GFX_HGC_DrawItem(Picture3);
            GFX_HGC_DrawItem(Button26);
            GFX_HGC_DrawItem(Button27);
            GFX_HGC_DrawItem(Button28);
            GFX_HGC_DrawItem(Button29);
            GFX_HGC_DrawItem(Button30);
            break;
        case AlphaBlend:
            GFX_HGC_DrawItem(Picture4);
            GFX_HGC_DrawItem(Button31);
            GFX_HGC_DrawItem(Button32);
            GFX_HGC_DrawItem(Button33);
            GFX_HGC_DrawItem(Button34);
            GFX_HGC_DrawItem(Button35);
            break;
        case Info:
            GFX_HGC_DrawItem(Window1);
            GFX_HGC_DrawItem(Button36);
            GFX_HGC_DrawItem(Button37);
            GFX_HGC_DrawItem(Button38);
            GFX_HGC_DrawItem(Button39);
            GFX_HGC_DrawItem(Button40);
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
        case MainScreen:
            GFX_HGC_DrawItem(Line1);
            GFX_HGC_DrawItem(Rectangle1);
            GFX_HGC_DrawItem(Image2);
            GFX_HGC_DrawItem(Text1);
            break;
        case Comfort:
            GFX_HGC_DrawItem(Rectangle2);
            GFX_HGC_DrawItem(Image4);
            GFX_HGC_DrawItem(Text2);
            GFX_HGC_DrawItem(Line2);
            GFX_HGC_DrawItem(Text3);
            GFX_HGC_DrawItem(Text4);
            GFX_HGC_DrawItem(Text5);
            break;
        case Gradients:
            GFX_HGC_DrawItem(Rectangle3);
            GFX_HGC_DrawItem(Text6);
            GFX_HGC_DrawItem(Line3);
            GFX_HGC_DrawItem(Image3);
            GFX_HGC_DrawItem(Rectangle4);
            GFX_HGC_DrawItem(Rectangle5);
            GFX_HGC_DrawItem(Rectangle6);
            GFX_HGC_DrawItem(Rectangle7);
            GFX_HGC_DrawItem(Rectangle8);
            GFX_HGC_DrawItem(Rectangle9);
            break;
        case AlphaBlend:
            GFX_HGC_DrawItem(Line4);
            GFX_HGC_DrawItem(Rectangle10);
            GFX_HGC_DrawItem(Text7);
            GFX_HGC_DrawItem(Image1);
            GFX_HGC_DrawItem(Text9);
            break;
        case Info:
            GFX_HGC_DrawItem(Line5);
            GFX_HGC_DrawItem(Rectangle11);
            GFX_HGC_DrawItem(Text8);
            GFX_HGC_DrawItem(Image5);
            GFX_HGC_DrawItem(Text11);
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
    case Button6:
        hgcObj.pButton6Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button6,      // button ID
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
    case Button5:
        hgcObj.pButton5Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button5,      // button ID
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
    case Button4:
        hgcObj.pButton4Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button4,      // button ID
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
    case Button1:
        hgcObj.pButton1Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button1,      // button ID
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
    case Button22:
        hgcObj.pButton22Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button22,      // button ID
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
    case Button21:
        hgcObj.pButton21Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button21,      // button ID
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
    case Button18:
        hgcObj.pButton18Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button18,      // button ID
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
    case Button20:
        hgcObj.pButton20Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button20,      // button ID
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
    case Button19:
        hgcObj.pButton19Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button19,      // button ID
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
    case Button17:
        hgcObj.pButton17Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button17,      // button ID
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
    case Button16:
        hgcObj.pButton16Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button16,      // button ID
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
    case Button15:
        hgcObj.pButton15Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button15,      // button ID
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
    case Button14:
        hgcObj.pButton14Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button14,      // button ID
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
    case Button13:
        hgcObj.pButton13Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button13,      // button ID
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
    case Button12:
        hgcObj.pButton12Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button12,      // button ID
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
    case Button2:
        hgcObj.pButton2Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button2,      // button ID
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
    case Button11:
        hgcObj.pButton11Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button11,      // button ID
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
    case Button9:
        hgcObj.pButton9Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button9,      // button ID
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
    case Button8:
        hgcObj.pButton8Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button8,      // button ID
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
    case Button7:
        hgcObj.pButton7Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button7,      // button ID
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
    case Button30:
        hgcObj.pButton30Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button30,      // button ID
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
    case Button29:
        hgcObj.pButton29Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button29,      // button ID
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
    case Button28:
        hgcObj.pButton28Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button28,      // button ID
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
    case Button27:
        hgcObj.pButton27Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button27,      // button ID
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
    case Button26:
        hgcObj.pButton26Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button26,      // button ID
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
    case Button35:
        hgcObj.pButton35Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button35,      // button ID
                 GFX_BUTTON_LEFT_27,    // left
                 GFX_BUTTON_TOP_27,     // top
                 GFX_BUTTON_RIGHT_27,   // right
                 GFX_BUTTON_BOTTOM_27,  // bottom
                 GFX_BUTTON_RADIUS_27,  // radius
                 GFX_BUTTON_STATE_27,   // state
                 GFX_BUTTON_PRESS_IMAGE_27,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_27,   // release image
                 (GFX_XCHAR*)buttonStr_27,    // text
                 GFX_BUTTON_ALIGNMENT_27,       //alignment
                 GFX_BUTTON_SCHEME_27
                 ); // use alternate scheme
        break;
    case Button34:
        hgcObj.pButton34Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button34,      // button ID
                 GFX_BUTTON_LEFT_28,    // left
                 GFX_BUTTON_TOP_28,     // top
                 GFX_BUTTON_RIGHT_28,   // right
                 GFX_BUTTON_BOTTOM_28,  // bottom
                 GFX_BUTTON_RADIUS_28,  // radius
                 GFX_BUTTON_STATE_28,   // state
                 GFX_BUTTON_PRESS_IMAGE_28,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_28,   // release image
                 (GFX_XCHAR*)buttonStr_28,    // text
                 GFX_BUTTON_ALIGNMENT_28,       //alignment
                 GFX_BUTTON_SCHEME_28
                 ); // use alternate scheme
        break;
    case Button33:
        hgcObj.pButton33Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button33,      // button ID
                 GFX_BUTTON_LEFT_29,    // left
                 GFX_BUTTON_TOP_29,     // top
                 GFX_BUTTON_RIGHT_29,   // right
                 GFX_BUTTON_BOTTOM_29,  // bottom
                 GFX_BUTTON_RADIUS_29,  // radius
                 GFX_BUTTON_STATE_29,   // state
                 GFX_BUTTON_PRESS_IMAGE_29,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_29,   // release image
                 (GFX_XCHAR*)buttonStr_29,    // text
                 GFX_BUTTON_ALIGNMENT_29,       //alignment
                 GFX_BUTTON_SCHEME_29
                 ); // use alternate scheme
        break;
    case Button32:
        hgcObj.pButton32Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button32,      // button ID
                 GFX_BUTTON_LEFT_30,    // left
                 GFX_BUTTON_TOP_30,     // top
                 GFX_BUTTON_RIGHT_30,   // right
                 GFX_BUTTON_BOTTOM_30,  // bottom
                 GFX_BUTTON_RADIUS_30,  // radius
                 GFX_BUTTON_STATE_30,   // state
                 GFX_BUTTON_PRESS_IMAGE_30,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_30,   // release image
                 (GFX_XCHAR*)buttonStr_30,    // text
                 GFX_BUTTON_ALIGNMENT_30,       //alignment
                 GFX_BUTTON_SCHEME_30
                 ); // use alternate scheme
        break;
    case Button31:
        hgcObj.pButton31Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button31,      // button ID
                 GFX_BUTTON_LEFT_31,    // left
                 GFX_BUTTON_TOP_31,     // top
                 GFX_BUTTON_RIGHT_31,   // right
                 GFX_BUTTON_BOTTOM_31,  // bottom
                 GFX_BUTTON_RADIUS_31,  // radius
                 GFX_BUTTON_STATE_31,   // state
                 GFX_BUTTON_PRESS_IMAGE_31,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_31,   // release image
                 (GFX_XCHAR*)buttonStr_31,    // text
                 GFX_BUTTON_ALIGNMENT_31,       //alignment
                 GFX_BUTTON_SCHEME_31
                 ); // use alternate scheme
        break;
    case Button40:
        hgcObj.pButton40Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button40,      // button ID
                 GFX_BUTTON_LEFT_32,    // left
                 GFX_BUTTON_TOP_32,     // top
                 GFX_BUTTON_RIGHT_32,   // right
                 GFX_BUTTON_BOTTOM_32,  // bottom
                 GFX_BUTTON_RADIUS_32,  // radius
                 GFX_BUTTON_STATE_32,   // state
                 GFX_BUTTON_PRESS_IMAGE_32,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_32,   // release image
                 (GFX_XCHAR*)buttonStr_32,    // text
                 GFX_BUTTON_ALIGNMENT_32,       //alignment
                 GFX_BUTTON_SCHEME_32
                 ); // use alternate scheme
        break;
    case Button39:
        hgcObj.pButton39Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button39,      // button ID
                 GFX_BUTTON_LEFT_33,    // left
                 GFX_BUTTON_TOP_33,     // top
                 GFX_BUTTON_RIGHT_33,   // right
                 GFX_BUTTON_BOTTOM_33,  // bottom
                 GFX_BUTTON_RADIUS_33,  // radius
                 GFX_BUTTON_STATE_33,   // state
                 GFX_BUTTON_PRESS_IMAGE_33,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_33,   // release image
                 (GFX_XCHAR*)buttonStr_33,    // text
                 GFX_BUTTON_ALIGNMENT_33,       //alignment
                 GFX_BUTTON_SCHEME_33
                 ); // use alternate scheme
        break;
    case Button38:
        hgcObj.pButton38Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button38,      // button ID
                 GFX_BUTTON_LEFT_34,    // left
                 GFX_BUTTON_TOP_34,     // top
                 GFX_BUTTON_RIGHT_34,   // right
                 GFX_BUTTON_BOTTOM_34,  // bottom
                 GFX_BUTTON_RADIUS_34,  // radius
                 GFX_BUTTON_STATE_34,   // state
                 GFX_BUTTON_PRESS_IMAGE_34,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_34,   // release image
                 (GFX_XCHAR*)buttonStr_34,    // text
                 GFX_BUTTON_ALIGNMENT_34,       //alignment
                 GFX_BUTTON_SCHEME_34
                 ); // use alternate scheme
        break;
    case Button37:
        hgcObj.pButton37Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button37,      // button ID
                 GFX_BUTTON_LEFT_35,    // left
                 GFX_BUTTON_TOP_35,     // top
                 GFX_BUTTON_RIGHT_35,   // right
                 GFX_BUTTON_BOTTOM_35,  // bottom
                 GFX_BUTTON_RADIUS_35,  // radius
                 GFX_BUTTON_STATE_35,   // state
                 GFX_BUTTON_PRESS_IMAGE_35,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_35,   // release image
                 (GFX_XCHAR*)buttonStr_35,    // text
                 GFX_BUTTON_ALIGNMENT_35,       //alignment
                 GFX_BUTTON_SCHEME_35
                 ); // use alternate scheme
        break;
    case Button36:
        hgcObj.pButton36Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button36,      // button ID
                 GFX_BUTTON_LEFT_36,    // left
                 GFX_BUTTON_TOP_36,     // top
                 GFX_BUTTON_RIGHT_36,   // right
                 GFX_BUTTON_BOTTOM_36,  // bottom
                 GFX_BUTTON_RADIUS_36,  // radius
                 GFX_BUTTON_STATE_36,   // state
                 GFX_BUTTON_PRESS_IMAGE_36,     // press image
                 GFX_BUTTON_RELEASE_IMAGE_36,   // release image
                 (GFX_XCHAR*)buttonStr_36,    // text
                 GFX_BUTTON_ALIGNMENT_36,       //alignment
                 GFX_BUTTON_SCHEME_36
                 ); // use alternate scheme
        break;
    case GroupBox2:
        hgcObj.pGroupBox2Obj = GFX_GOL_GroupboxCreate(
                GFX_INDEX_0,
                GroupBox2, // id
                GFX_GROUPBOX_LEFT_0, // left
                GFX_GROUPBOX_TOP_0, // top
                GFX_GROUPBOX_RIGHT_0, // right
                GFX_GROUPBOX_BOTTOM_0, // bottom
				GFX_GROUPBOX_STATE_0, // state
				GroupBox2_text, // text
                GFX_GROUPBOX_ALIGNMENT_0, //alignment
                GFX_GROUPBOX_SCHEME_0); // scheme
				
		break;
		
    case GroupBox1:
        hgcObj.pGroupBox1Obj = GFX_GOL_GroupboxCreate(
                GFX_INDEX_0,
                GroupBox1, // id
                GFX_GROUPBOX_LEFT_1, // left
                GFX_GROUPBOX_TOP_1, // top
                GFX_GROUPBOX_RIGHT_1, // right
                GFX_GROUPBOX_BOTTOM_1, // bottom
				GFX_GROUPBOX_STATE_1, // state
				GroupBox1_text, // text
                GFX_GROUPBOX_ALIGNMENT_1, //alignment
                GFX_GROUPBOX_SCHEME_1); // scheme
				
		break;
		
    case StaticText2:
        hgcObj.pStaticText2Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText2,      // button ID
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
    case StaticText4:
        hgcObj.pStaticText4Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText4,      // button ID
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
    case StaticText3:
        hgcObj.pStaticText3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText3,      // button ID
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
    case StaticText1:
        hgcObj.pStaticText1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText1,      // button ID
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
    case Window1:
        hgcObj.pWindow1Obj = GFX_GOL_WindowCreate
                (
                 GFX_INDEX_0,
                 Window1,      // button ID
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
    case Picture2:
        hgcObj.pPicture2Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture2,      // picture ID
                 GFX_PICTURE_LEFT_0,    // left
                 GFX_PICTURE_TOP_0,     // top
                 GFX_PICTURE_RIGHT_0,   // right				 
                 GFX_PICTURE_BOTTOM_0,  // bottom
				 GFX_PICTURE_STATE_0,   // state                 
                 GFX_PICTURE_SCALE_0,     // scale
                 (GFX_RESOURCE_HDR*)&harmony,    // bitmap
                 GFX_PICTURE_SCHEME_0
                 );
        break;
    case Picture1:
        hgcObj.pPicture1Obj = GFX_GOL_PictureControlCreate
                (
                 GFX_INDEX_0,
                 Picture1,      // picture ID
                 GFX_PICTURE_LEFT_1,    // left
                 GFX_PICTURE_TOP_1,     // top
                 GFX_PICTURE_RIGHT_1,   // right				 
                 GFX_PICTURE_BOTTOM_1,  // bottom
				 GFX_PICTURE_STATE_1,   // state                 
                 GFX_PICTURE_SCALE_1,     // scale
                 (GFX_RESOURCE_HDR*)&House,    // bitmap
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
                 (GFX_RESOURCE_HDR*)&harmony,    // bitmap
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
                 (GFX_RESOURCE_HDR*)&harmony,    // bitmap
                 GFX_PICTURE_SCHEME_3
                 );
        break;
		case Line1:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xE8, 0x40));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 165,  // p1x
						 0,  // p1y
						 165,  // p2x
						 479); // p2y
			break;
		}		
		case Line2:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xE8, 0x40));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 165,  // p1x
						 0,  // p1y
						 165,  // p2x
						 479); // p2y
			break;
		}		
		case Line3:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xE8, 0x40));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 165,  // p1x
						 0,  // p1y
						 165,  // p2x
						 479); // p2y
			break;
		}		
		case Line4:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xE8, 0x40));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 165,  // p1x
						 0,  // p1y
						 165,  // p2x
						 479); // p2y
			break;
		}		
		case Line5:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xE8, 0x40));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 165,  // p1x
						 0,  // p1y
						 165,  // p2x
						 479); // p2y
			break;
		}		
		case Rectangle1:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xC8, 0xF0, 0xF8));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  174,  // p1x
								  6,  // p1y
								  634,  // p2x
								  76); // p2y
			
			break;
		}	
		case Rectangle2:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xC8, 0xF0, 0xF8));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  174,  // p1x
								  6,  // p1y
								  634,  // p2x
								  76); // p2y
			
			break;
		}	
		case Rectangle9:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_DOUBLE_VER);
			GFX_GradientColorSet(GFX_INDEX_0,
			                    GFX_RGBConvert(0xD8, 0xDC, 0xD8),
			                    GFX_RGBConvert(0x00, 0x00, 0x00));	
			GFX_RectangleRoundFillDraw(GFX_INDEX_0,
									   510, // p1x
									   297, // p1y
									   605, // p2x
									   422, // p2y
									   15); // radius
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleRoundDraw(GFX_INDEX_0,
								   510, // p1x
								   297, // p1y
								   605, // p2x
								   422, // p2y
								   15); // radius
			
			break;
		}	
		case Rectangle8:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_DOUBLE_HOR);
			GFX_GradientColorSet(GFX_INDEX_0,
			                    GFX_RGBConvert(0xF8, 0xFC, 0x00),
			                    GFX_RGBConvert(0xF8, 0x00, 0xF8));	
			GFX_RectangleRoundFillDraw(GFX_INDEX_0,
									   365, // p1x
									   297, // p1y
									   460, // p2x
									   422, // p2y
									   15); // radius
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleRoundDraw(GFX_INDEX_0,
								   365, // p1x
								   297, // p1y
								   460, // p2x
								   422, // p2y
								   15); // radius
			
			break;
		}	
		case Rectangle7:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_LEFT);
			GFX_GradientColorSet(GFX_INDEX_0,
			                    GFX_RGBConvert(0x00, 0x00, 0xF8),
			                    GFX_RGBConvert(0x00, 0xFC, 0x00));	
			GFX_RectangleRoundFillDraw(GFX_INDEX_0,
									   216, // p1x
									   297, // p1y
									   311, // p2x
									   422, // p2y
									   15); // radius
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleRoundDraw(GFX_INDEX_0,
								   216, // p1x
								   297, // p1y
								   311, // p2x
								   422, // p2y
								   15); // radius
			
			break;
		}	
		case Rectangle6:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_RIGHT);
			GFX_GradientColorSet(GFX_INDEX_0,
			                    GFX_RGBConvert(0x00, 0x00, 0xF8),
			                    GFX_RGBConvert(0xF8, 0xFC, 0x00));	
			GFX_RectangleRoundFillDraw(GFX_INDEX_0,
									   510, // p1x
									   131, // p1y
									   605, // p2x
									   256, // p2y
									   15); // radius
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleRoundDraw(GFX_INDEX_0,
								   510, // p1x
								   131, // p1y
								   605, // p2x
								   256, // p2y
								   15); // radius
			
			break;
		}	
		case Rectangle5:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_DOWN);
			GFX_GradientColorSet(GFX_INDEX_0,
			                    GFX_RGBConvert(0x00, 0xFC, 0xF8),
			                    GFX_RGBConvert(0xE8, 0x00, 0xF8));	
			GFX_RectangleRoundFillDraw(GFX_INDEX_0,
									   365, // p1x
									   130, // p1y
									   460, // p2x
									   255, // p2y
									   15); // radius
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleRoundDraw(GFX_INDEX_0,
								   365, // p1x
								   130, // p1y
								   460, // p2x
								   255, // p2y
								   15); // radius
			
			break;
		}	
		case Rectangle4:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_UP);
			GFX_GradientColorSet(GFX_INDEX_0,
			                    GFX_RGBConvert(0xF8, 0x00, 0x00),
			                    GFX_RGBConvert(0x00, 0xFC, 0x00));	
			GFX_RectangleRoundFillDraw(GFX_INDEX_0,
									   215, // p1x
									   129, // p1y
									   310, // p2x
									   254, // p2y
									   15); // radius
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleRoundDraw(GFX_INDEX_0,
								   215, // p1x
								   129, // p1y
								   310, // p2x
								   254, // p2y
								   15); // radius
			
			break;
		}	
		case Rectangle3:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xC8, 0xF0, 0xF8));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  174,  // p1x
								  6,  // p1y
								  634,  // p2x
								  76); // p2y
			
			break;
		}	
		case Rectangle10:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xC8, 0xF0, 0xF8));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  174,  // p1x
								  6,  // p1y
								  634,  // p2x
								  76); // p2y
			
			break;
		}	
		case Rectangle11:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xC8, 0xF0, 0xF8));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  174,  // p1x
								  6,  // p1y
								  634,  // p2x
								  76); // p2y
			
			break;
		}	
		case Image2:
		{
			GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xCC)); // enable transparency
			GFX_ImageDraw(GFX_INDEX_0,
			              176, // draw point x
						  16, // draw point y
						  (GFX_RESOURCE_HDR*)&file_browser); // image
			GFX_TransparentColorDisable(GFX_INDEX_0); // disable transparency
			break;
		}	
		case Image4:
		{
			GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xCC)); // enable transparency
			GFX_ImageDraw(GFX_INDEX_0,
			              176, // draw point x
						  16, // draw point y
						  (GFX_RESOURCE_HDR*)&appointment_new); // image
			GFX_TransparentColorDisable(GFX_INDEX_0); // disable transparency
			break;
		}	
		case Image3:
		{
			GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xCC)); // enable transparency
			GFX_ImageDraw(GFX_INDEX_0,
			              176, // draw point x
						  16, // draw point y
						  (GFX_RESOURCE_HDR*)&file_browser); // image
			GFX_TransparentColorDisable(GFX_INDEX_0); // disable transparency
			break;
		}	
		case Image1:
		{
			GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xCC)); // enable transparency
			GFX_ImageDraw(GFX_INDEX_0,
			              176, // draw point x
						  16, // draw point y
						  (GFX_RESOURCE_HDR*)&file_browser); // image
			GFX_TransparentColorDisable(GFX_INDEX_0); // disable transparency
			break;
		}	
		case Image5:
		{
			GFX_TransparentColorEnable(GFX_INDEX_0, GFX_RGBConvert(0xFF, 0x00, 0xCC)); // enable transparency
			GFX_ImageDraw(GFX_INDEX_0,
			              176, // draw point x
						  16, // draw point y
						  (GFX_RESOURCE_HDR*)&help_faq); // image
			GFX_TransparentColorDisable(GFX_INDEX_0); // disable transparency
			break;
		}	
		case Text1:
		{
			char Text1_text[] = "Home";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8, 0xBC, 0xB8)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringBoxDraw(GFX_INDEX_0,
			                      232, // draw point x
						          20, // draw point y
						          331, // clip area bottom right point x
						          50, // clip area bottom right point y
								  (char*)&Text1_text, // string
								  0, // length
								  GFX_ALIGN_LEFT); // alignment
			break;
		}	
		case Text5:
		{
			char Text5_text[] = "Temperature";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0x80, 0x00)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   228, // draw point x
						       190, // draw point y
                               (char*)&Text5_text, // string
							   0); // length
			break;
		}	
		case Text4:
		{
			char Text4_text[] = "Cool";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0x80, 0x00)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   505, // draw point x
						       242, // draw point y
                               (char*)&Text4_text, // string
							   0); // length
			break;
		}	
		case Text3:
		{
			char Text3_text[] = "Heat";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0x80, 0x00)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   502, // draw point x
						       158, // draw point y
                               (char*)&Text3_text, // string
							   0); // length
			break;
		}	
		case Text2:
		{
			char Text2_text[] = "Comfort";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8, 0xBC, 0xB8)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   232, // draw point x
						       20, // draw point y
                               (char*)&Text2_text, // string
							   0); // length
			break;
		}	
		case Text6:
		{
			char Text6_text[] = "Home";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8, 0xBC, 0xB8)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringBoxDraw(GFX_INDEX_0,
			                      232, // draw point x
						          20, // draw point y
						          284, // clip area bottom right point x
						          40, // clip area bottom right point y
								  (char*)&Text6_text, // string
								  0, // length
								  GFX_ALIGN_LEFT); // alignment
			break;
		}	
		case Text9:
		{
			char Text9_text[] = "Fading Using Alpha Blending";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0xF8)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   180, // draw point x
						       100, // draw point y
                               (char*)&Text9_text, // string
							   0); // length
			break;
		}	
		case Text7:
		{
			char Text7_text[] = "Home";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8, 0xBC, 0xB8)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringBoxDraw(GFX_INDEX_0,
			                      232, // draw point x
						          20, // draw point y
						          284, // clip area bottom right point x
						          40, // clip area bottom right point y
								  (char*)&Text7_text, // string
								  0, // length
								  GFX_ALIGN_LEFT); // alignment
			break;
		}	
		case Text11:
		{
			char Text11_text[] = "MPLABX Harmony Graphics Composer\n16bpp Color Depth\nDynamic Alpha Blending\nColor Gradient\nMulti-Buffering\nBacklight Control\nPIP Support\nOn-Chip 16bit Parallel Master Port\nEpson S1D13517 Display Controller";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x78, 0x7C, 0x78)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringBoxDraw(GFX_INDEX_0,
			                      188, // draw point x
						          122, // draw point y
						          612, // clip area bottom right point x
						          322, // clip area bottom right point y
								  (char*)&Text11_text, // string
								  0, // length
								  GFX_ALIGN_LEFT); // alignment
			break;
		}	
		case Text8:
		{
			char Text8_text[] = "Info";
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xB8, 0xBC, 0xB8)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Arial); // set font
			GFX_TextStringBoxDraw(GFX_INDEX_0,
			                      232, // draw point x
						          20, // draw point y
						          284, // clip area bottom right point x
						          40, // clip area bottom right point y
								  (char*)&Text8_text, // string
								  0, // length
								  GFX_ALIGN_LEFT); // alignment
			break;
		}	
	default:
		return false; // process by default
    }

    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Button events
 */
bool GFX_HGC_MsgButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case Button6:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Info);
            }
			
            return true;
        case Button5:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(AlphaBlend);
            }
			
            return true;
        case Button4:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Gradients);
            }
			
            return true;
        case Button3:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// CustomSpeedAction
				APP_LaunchSpeedTest();
				
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button1:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Comfort);
            }
			
            return true;
        case Button22:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button21),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button21),GFX_GOL_BUTTON_DRAW_STATE);
            }
			
            return true;
        case Button21:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button22),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button22),GFX_GOL_BUTTON_DRAW_STATE);
            }
			
            return true;
        case Button18:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button19),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button19),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button20),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button20),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button17),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button17),GFX_GOL_BUTTON_DRAW_STATE);

            }
			
            return true;
        case Button20:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button19),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button19),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button18),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button18),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button17),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button17),GFX_GOL_BUTTON_DRAW_STATE);

            }
			
            return true;
        case Button19:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button17),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button17),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button20),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button20),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button18),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button18),GFX_GOL_BUTTON_DRAW_STATE);

            }
			
            return true;
        case Button17:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button19),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button19),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button20),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button20),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button18),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button18),GFX_GOL_BUTTON_DRAW_STATE);

            }
			
            return true;
        case Button16:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_UpdateTemperatureReadings(pObj);
            }
			
            return true;
        case Button15:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_UpdateTemperatureReadings(pObj);
            }
			
            return true;
        case Button14:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_UpdateTemperatureReadings(pObj);
            }
			
            return true;
        case Button13:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				APP_UpdateTemperatureReadings(pObj);
            }
			
            return true;
        case Button12:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_StaticTextSet(((GFX_GOL_STATICTEXT*)(GFX_GOL_ObjectFind(GFX_INDEX_0, StaticText1))), (GFX_XCHAR*)"Upstairs");
				GFX_GOL_ObjectStateSet(((GFX_GOL_STATICTEXT*)(GFX_GOL_ObjectFind(GFX_INDEX_0, StaticText1))), GFX_GOL_STATICTEXT_DRAW_STATE);
				
				// CustomAction
				APP_UpdateTemperatureReadings(pObj);
            }
			
            return true;
        case Button2:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_StaticTextSet(((GFX_GOL_STATICTEXT*)(GFX_GOL_ObjectFind(GFX_INDEX_0, StaticText1))), (GFX_XCHAR*)"Downstairs");
				GFX_GOL_ObjectStateSet(((GFX_GOL_STATICTEXT*)(GFX_GOL_ObjectFind(GFX_INDEX_0, StaticText1))), GFX_GOL_STATICTEXT_DRAW_STATE);
				
				// CustomAction
				APP_UpdateTemperatureReadings(pObj);
            }
			
            return true;
        case Button11:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button10:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// CustomSpeedAction
				APP_LaunchSpeedTest();
				
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button9:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Gradients);
            }
			
            return true;
        case Button8:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(AlphaBlend);
            }
			
            return true;
        case Button7:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Info);
            }
			
            return true;
        case Button30:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Comfort);
            }
			
            return true;
        case Button29:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// CustomSpeedAction
				APP_LaunchSpeedTest();
				
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button28:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button27:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(AlphaBlend);
            }
			
            return true;
        case Button26:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button34:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// CustomSpeedAction
				APP_LaunchSpeedTest();
				
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button33:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Gradients);
            }
			
            return true;
        case Button32:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button31:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Info);
            }
			
            return true;
        case Button40:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Comfort);
            }
			
            return true;
        case Button39:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// CustomSpeedAction
				APP_LaunchSpeedTest();
				
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button38:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(Gradients);
            }
			
            return true;
        case Button37:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        case Button36:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MainScreen);
            }
			
            return true;
        default:
            return false; // process by default
    }

    return true;
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgGroupBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Group Boxes events
 */
bool GFX_HGC_MsgGroupBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgStaticTexts(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Static Text events
 */
bool GFX_HGC_MsgStaticTexts(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgPictures(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Picture Control events
 */
bool GFX_HGC_MsgPictures(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgWindows(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Window events
 */
bool GFX_HGC_MsgWindows(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}


