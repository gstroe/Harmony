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

    Created with MPLAB Harmony Version 1.08
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
static GFX_GOL_OBJ_SCHEME *gfxScheme7;

/*** Generated Asset References ***/
extern const GFX_RESOURCE_HDR mchpIcon0;
extern const GFX_RESOURCE_HDR bulboff;
extern const GFX_RESOURCE_HDR bulbon;
extern const GFX_RESOURCE_HDR mchpIcon;
extern const GFX_RESOURCE_HDR Times_New_Roman;
extern const GFX_RESOURCE_HDR Comic_Sans_MS;
extern const GFX_RESOURCE_HDR Bookman_Old_Style;

/*** Generated ASCII Text Labels ***/
static const GFX_XCHAR buttonStr_0[] = { 0x4f, 0x66, 0x66, 0x0 }; // Off
static const GFX_XCHAR buttonStr_1[] = { 0x4f, 0x6e, 0x0 }; // On
static const GFX_XCHAR buttonStr_2[] = { 0x44, 0x69, 0x73, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x0 }; // Disabled Button
static const GFX_XCHAR buttonStr_3[] = { 0x4e, 0x65, 0x78, 0x74, 0x0 }; // Next
static const GFX_XCHAR buttonStr_4[] = { 0x54, 0x77, 0x6f, 0x20, 0x54, 0x6f, 0x6e, 0x65, 0x0 }; // Two Tone
static const GFX_XCHAR buttonStr_5[] = { 0x52, 0x6f, 0x75, 0x6e, 0x64, 0x65, 0x64, 0x20, 0x43, 0x6f, 0x72, 0x6e, 0x65, 0x72, 0x0 }; // Rounded Corner
static const GFX_XCHAR buttonStr_6[] = { 0x0 }; //  
static const GFX_XCHAR buttonStr_7[] = { 0x53, 0x69, 0x6d, 0x70, 0x6c, 0x65, 0x20, 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x0 }; // Simple Button
static const GFX_XCHAR buttonStr_8[] = { 0x4e, 0x65, 0x78, 0x74, 0x0 }; // Next
static const GFX_XCHAR buttonStr_9[] = { 0x50, 0x72, 0x65, 0x76, 0x2e, 0x0 }; // Prev.
static const GFX_XCHAR buttonStr_10[] = { 0x4e, 0x65, 0x78, 0x74, 0x0 }; // Next
static const GFX_XCHAR buttonStr_11[] = { 0x50, 0x72, 0x65, 0x76, 0x2e, 0x0 }; // Prev.
static const GFX_XCHAR buttonStr_12[] = { 0x50, 0x72, 0x65, 0x76, 0x2e, 0x0 }; // Prev.
static const GFX_XCHAR buttonStr_13[] = { 0x4e, 0x65, 0x78, 0x74, 0x0 }; // Next
static const GFX_XCHAR buttonStr_14[] = { 0x4e, 0x65, 0x78, 0x74, 0x0 }; // Next
static const GFX_XCHAR buttonStr_15[] = { 0x76, 0x0 }; // v
static const GFX_XCHAR buttonStr_16[] = { 0x5e, 0x0 }; // ^
static const GFX_XCHAR buttonStr_17[] = { 0x50, 0x72, 0x65, 0x76, 0x2e, 0x0 }; // Prev.
static const GFX_XCHAR buttonStr_18[] = { 0x41, 0x63, 0x63, 0x65, 0x6c, 0x65, 0x72, 0x61, 0x74, 0x65, 0x0 }; // Accelerate
static const GFX_XCHAR buttonStr_19[] = { 0x50, 0x72, 0x65, 0x76, 0x2e, 0x0 }; // Prev.
static const GFX_XCHAR checkBoxStr_0[] = { 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x0 }; // Enabled
static const GFX_XCHAR radioButtonStr_0[] = { 0x54, 0x6f, 0x70, 0x0 }; // Top
static const GFX_XCHAR radioButtonStr_1[] = { 0x42, 0x6f, 0x74, 0x74, 0x6f, 0x6d, 0x0 }; // Bottom
static const GFX_XCHAR radioButtonStr_2[] = { 0x43, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x0 }; // Center
static const GFX_XCHAR radioButtonStr_3[] = { 0x52, 0x69, 0x67, 0x68, 0x74, 0x0 }; // Right
static const GFX_XCHAR radioButtonStr_4[] = { 0x43, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x0 }; // Center
static const GFX_XCHAR radioButtonStr_5[] = { 0x4c, 0x65, 0x66, 0x74, 0x0 }; // Left
static const GFX_XCHAR radioButtonStr_6[] = { 0x4f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x43, 0x0 }; // Option C
static const GFX_XCHAR radioButtonStr_7[] = { 0x4f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x42, 0x0 }; // Option B
static const GFX_XCHAR radioButtonStr_8[] = { 0x4f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x41, 0x0 }; // Option A
static const GFX_XCHAR radioButtonStr_9[] = { 0x52, 0x69, 0x67, 0x68, 0x74, 0x0 }; // Right
static const GFX_XCHAR radioButtonStr_10[] = { 0x43, 0x65, 0x6e, 0x74, 0x65, 0x72, 0x0 }; // Center
static const GFX_XCHAR radioButtonStr_11[] = { 0x4c, 0x65, 0x66, 0x74, 0x0 }; // Left
static const GFX_XCHAR meterStr_0[] = { 0x4d, 0x65, 0x74, 0x65, 0x72, 0x0 }; // Meter
static const GFX_XCHAR meterStr_1[] = { 0x4d, 0x65, 0x74, 0x65, 0x72, 0x0 }; // Meter
static const GFX_XCHAR editBoxStr_0[] = { 0x45, 0x64, 0x69, 0x74, 0x20, 0x42, 0x6f, 0x78, 0x0 }; // Edit Box
static GFX_XCHAR ListBox2_item_0_text[] = { 0x41, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x0 }; // Applications
static GFX_XCHAR ListBox2_item_1_text[] = { 0x48, 0x6f, 0x6d, 0x65, 0x20, 0x41, 0x70, 0x70, 0x6c, 0x69, 0x61, 0x6e, 0x63, 0x65, 0x73, 0x0 }; // Home Appliances
static GFX_XCHAR ListBox2_item_2_text[] = { 0x48, 0x6f, 0x6d, 0x65, 0x20, 0x41, 0x75, 0x74, 0x6f, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0 }; // Home Automation
static GFX_XCHAR ListBox2_item_3_text[] = { 0x49, 0x6e, 0x64, 0x75, 0x73, 0x74, 0x72, 0x69, 0x61, 0x6c, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x0 }; // Industrial Controls
static GFX_XCHAR ListBox2_item_4_text[] = { 0x4d, 0x65, 0x64, 0x69, 0x63, 0x61, 0x6c, 0x20, 0x44, 0x65, 0x76, 0x69, 0x63, 0x65, 0x73, 0x0 }; // Medical Devices
static GFX_XCHAR ListBox2_item_5_text[] = { 0x41, 0x75, 0x74, 0x6f, 0x6d, 0x6f, 0x74, 0x69, 0x76, 0x65, 0x0 }; // Automotive
static GFX_XCHAR ListBox2_item_6_text[] = { 0x4d, 0x6f, 0x74, 0x6f, 0x72, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x73, 0x0 }; // Motor Controllers
static GFX_XCHAR ListBox2_item_7_text[] = { 0x52, 0x65, 0x6d, 0x6f, 0x74, 0x65, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x73, 0x0 }; // Remote Controls
static GFX_XCHAR ListBox2_item_8_text[] = { 0x54, 0x6f, 0x79, 0x73, 0x0 }; // Toys
static GFX_XCHAR ListBox2_item_9_text[] = { 0x41, 0x6e, 0x64, 0x20, 0x6d, 0x61, 0x6e, 0x79, 0x20, 0x6d, 0x6f, 0x72, 0x65, 0x2e, 0x2e, 0x2e, 0x0 }; // And many more...

static GFX_XCHAR GroupBox5_text[] = { 0x56, 0x65, 0x72, 0x74, 0x69, 0x63, 0x61, 0x6c, 0x20, 0x41, 0x6c, 0x69, 0x67, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x0 }; // Vertical Alignment
static GFX_XCHAR GroupBox3_text[] = { 0x48, 0x6f, 0x72, 0x69, 0x7a, 0x6f, 0x6e, 0x74, 0x61, 0x6c, 0x20, 0x41, 0x6c, 0x69, 0x67, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x0 }; // Horizontal Alignment
static GFX_XCHAR GroupBox4_text[] = { 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x0 }; // Enable
static GFX_XCHAR GroupBox1_text[] = { 0x56, 0x6f, 0x74, 0x65, 0x0 }; // Vote
static GFX_XCHAR GroupBox2_text[] = { 0x41, 0x6c, 0x69, 0x67, 0x6e, 0x6d, 0x65, 0x6e, 0x74, 0x0 }; // Alignment
static const GFX_XCHAR staticTextStr_0[] = { 0x4f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x43, 0x3a, 0x0 }; // Option C:
static const GFX_XCHAR staticTextStr_1[] = { 0x4f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x42, 0x3a, 0x0 }; // Option B:
static const GFX_XCHAR staticTextStr_2[] = { 0x4f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x41, 0x3a, 0x0 }; // Option A:
static const GFX_XCHAR staticTextStr_3[] = { 0x61, 0x6e, 0x64, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x4f, 0x6b, 0x0 }; // and Press Ok
static const GFX_XCHAR staticTextStr_4[] = { 0x0 }; //  
static const GFX_XCHAR staticTextStr_5[] = { 0x45, 0x6e, 0x74, 0x65, 0x72, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x0 }; // Enter your name
static GFX_XCHAR TextEntry2_text[] = { 0x43, 0x6f, 0x6d, 0x70, 0x6f, 0x73, 0x65, 0x72, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 }; // Composer
static GFX_XCHAR TextEntry2_cell_text_0_0[] = { 0x41, 0x0 }; // A
static GFX_XCHAR TextEntry2_cell_text_0_1[] = { 0x42, 0x0 }; // B
static GFX_XCHAR TextEntry2_cell_text_0_2[] = { 0x43, 0x0 }; // C
static GFX_XCHAR TextEntry2_cell_text_0_3[] = { 0x44, 0x0 }; // D
static GFX_XCHAR TextEntry2_cell_text_1_0[] = { 0x45, 0x0 }; // E
static GFX_XCHAR TextEntry2_cell_text_1_1[] = { 0x46, 0x0 }; // F
static GFX_XCHAR TextEntry2_cell_text_1_2[] = { 0x47, 0x0 }; // G
static GFX_XCHAR TextEntry2_cell_text_1_3[] = { 0x48, 0x0 }; // H
static GFX_XCHAR TextEntry2_cell_text_2_0[] = { 0x49, 0x0 }; // I
static GFX_XCHAR TextEntry2_cell_text_2_1[] = { 0x4a, 0x0 }; // J
static GFX_XCHAR TextEntry2_cell_text_2_2[] = { 0x4b, 0x0 }; // K
static GFX_XCHAR TextEntry2_cell_text_2_3[] = { 0x4c, 0x0 }; // L
static GFX_XCHAR TextEntry2_cell_text_3_0[] = { 0x4d, 0x0 }; // M
static GFX_XCHAR TextEntry2_cell_text_3_1[] = { 0x4e, 0x0 }; // N
static GFX_XCHAR TextEntry2_cell_text_3_2[] = { 0x4f, 0x0 }; // O
static GFX_XCHAR TextEntry2_cell_text_3_3[] = { 0x50, 0x0 }; // P
static GFX_XCHAR TextEntry2_cell_text_4_0[] = { 0x51, 0x0 }; // Q
static GFX_XCHAR TextEntry2_cell_text_4_1[] = { 0x52, 0x0 }; // R
static GFX_XCHAR TextEntry2_cell_text_4_2[] = { 0x53, 0x0 }; // S
static GFX_XCHAR TextEntry2_cell_text_4_3[] = { 0x54, 0x0 }; // T
static GFX_XCHAR TextEntry2_cell_text_5_0[] = { 0x55, 0x0 }; // U
static GFX_XCHAR TextEntry2_cell_text_5_1[] = { 0x56, 0x0 }; // V
static GFX_XCHAR TextEntry2_cell_text_5_2[] = { 0x57, 0x0 }; // W
static GFX_XCHAR TextEntry2_cell_text_5_3[] = { 0x58, 0x0 }; // X
static GFX_XCHAR TextEntry2_cell_text_6_0[] = { 0x59, 0x0 }; // Y
static GFX_XCHAR TextEntry2_cell_text_6_1[] = { 0x5a, 0x0 }; // Z
static GFX_XCHAR TextEntry2_cell_text_6_2[] = { 0x3c, 0x2d, 0x0 }; // <-
static GFX_XCHAR TextEntry2_cell_text_6_3[] = { 0x4f, 0x6b, 0x0 }; // Ok
static GFX_XCHAR* TextEntry2_cell_text[28] =
{
	TextEntry2_cell_text_0_0,
	TextEntry2_cell_text_0_1,
	TextEntry2_cell_text_0_2,
	TextEntry2_cell_text_0_3,
	TextEntry2_cell_text_1_0,
	TextEntry2_cell_text_1_1,
	TextEntry2_cell_text_1_2,
	TextEntry2_cell_text_1_3,
	TextEntry2_cell_text_2_0,
	TextEntry2_cell_text_2_1,
	TextEntry2_cell_text_2_2,
	TextEntry2_cell_text_2_3,
	TextEntry2_cell_text_3_0,
	TextEntry2_cell_text_3_1,
	TextEntry2_cell_text_3_2,
	TextEntry2_cell_text_3_3,
	TextEntry2_cell_text_4_0,
	TextEntry2_cell_text_4_1,
	TextEntry2_cell_text_4_2,
	TextEntry2_cell_text_4_3,
	TextEntry2_cell_text_5_0,
	TextEntry2_cell_text_5_1,
	TextEntry2_cell_text_5_2,
	TextEntry2_cell_text_5_3,
	TextEntry2_cell_text_6_0,
	TextEntry2_cell_text_6_1,
	TextEntry2_cell_text_6_2,
	TextEntry2_cell_text_6_3,
};

static const GFX_XCHAR windowTextStr_0[] = { 0x42, 0x75, 0x74, 0x74, 0x6f, 0x6e, 0x73, 0x0 }; // Buttons
static const GFX_XCHAR windowTextStr_1[] = { 0x45, 0x64, 0x69, 0x74, 0x20, 0x42, 0x6f, 0x78, 0x0 }; // Edit Box
static const GFX_XCHAR windowTextStr_2[] = { 0x50, 0x72, 0x6f, 0x67, 0x72, 0x65, 0x73, 0x73, 0x20, 0x42, 0x61, 0x72, 0x0 }; // Progress Bar
static const GFX_XCHAR windowTextStr_3[] = { 0x54, 0x65, 0x78, 0x74, 0x20, 0x45, 0x6e, 0x74, 0x72, 0x79, 0x0 }; // Text Entry
static const GFX_XCHAR windowTextStr_4[] = { 0x4c, 0x69, 0x73, 0x74, 0x20, 0x42, 0x6f, 0x78, 0x0 }; // List Box
static const GFX_XCHAR windowTextStr_5[] = { 0x4d, 0x65, 0x74, 0x65, 0x72, 0x0 }; // Meter

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
    gfxScheme0->pFont =             (GFX_RESOURCE_HDR*)&Bookman_Old_Style;
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
    gfxScheme1->pFont =             (GFX_RESOURCE_HDR*)&Bookman_Old_Style;
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
    gfxScheme2->pFont =             (GFX_RESOURCE_HDR*)&Bookman_Old_Style;
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
    gfxScheme3->pFont =             (GFX_RESOURCE_HDR*)&Bookman_Old_Style;
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
    gfxScheme4->pFont =             (GFX_RESOURCE_HDR*)&Times_New_Roman;
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
    gfxScheme5->pFont =             (GFX_RESOURCE_HDR*)&Bookman_Old_Style;
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
    gfxScheme6->pFont =             (GFX_RESOURCE_HDR*)&Bookman_Old_Style;
    gfxScheme6->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme6->fillStyle =         GFX_SCHEME_FILL_STYLE_6;
	gfxScheme6->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_6;

    gfxScheme7 = GFX_HGC_SchemeCreate();

#ifndef GFX_CONFIG_ALPHABLEND_DISABLE
    gfxScheme7->AlphaValue =        GFX_SCHEME_ALPHA_7;
#endif
    gfxScheme7->Color0 =            GFX_RGBConvert(GFX_SCHEME_PRIMARY_COLOR_RED_7, GFX_SCHEME_PRIMARY_COLOR_GREEN_7, GFX_SCHEME_PRIMARY_COLOR_BLUE_7);
    gfxScheme7->Color1 =            GFX_RGBConvert(GFX_SCHEME_SECONDARY_COLOR_RED_7, GFX_SCHEME_SECONDARY_COLOR_GREEN_7, GFX_SCHEME_SECONDARY_COLOR_BLUE_7);
    gfxScheme7->ColorDisabled =     GFX_RGBConvert(GFX_SCHEME_DISABLED_COLOR_RED_7, GFX_SCHEME_DISABLED_COLOR_GREEN_7, GFX_SCHEME_DISABLED_COLOR_BLUE_7);
    gfxScheme7->CommonBkColor =     GFX_RGBConvert(GFX_SCHEME_BACKGROUND_COLOR_RED_7, GFX_SCHEME_BACKGROUND_COLOR_GREEN_7, GFX_SCHEME_BACKGROUND_COLOR_BLUE_7);
	gfxScheme7->EmbossSize =        GFX_SCHEME_EMBOSS_SIZE_7;
    gfxScheme7->EmbossDkColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_DARK_COLOR_RED_7, GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_7, GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_7);
    gfxScheme7->EmbossLtColor =     GFX_RGBConvert(GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_7, GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_7, GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_7);
	gfxScheme7->TextColor0 =        GFX_RGBConvert(GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_7, GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_7, GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_7);
    gfxScheme7->TextColor1 =        GFX_RGBConvert(GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_7, GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_7, GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_7);
    gfxScheme7->TextColorDisabled = GFX_RGBConvert(GFX_SCHEME_TEXT_DISABLED_COLOR_RED_7, GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_7, GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_7);
#ifndef GFX_CONFIG_GRADIENT_DISABLE
	gfxScheme7->gradientStartColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_START_COLOR_RED_7, GFX_SCHEME_GRADIENT_START_COLOR_GREEN_7, GFX_SCHEME_GRADIENT_START_COLOR_BLUE_7);
	gfxScheme7->gradientEndColor = GFX_RGBConvert(GFX_SCHEME_GRADIENT_END_COLOR_RED_7, GFX_SCHEME_GRADIENT_END_COLOR_GREEN_7, GFX_SCHEME_GRADIENT_END_COLOR_BLUE_7);
#endif
    gfxScheme7->CommonBkLeft =      GFX_SCHEME_BACKGROUND_OFFSET_TOP_7;
    gfxScheme7->CommonBkTop =       GFX_SCHEME_BACKGROUND_OFFSET_LEFT_7;
    gfxScheme7->pFont =             (GFX_RESOURCE_HDR*)&Bookman_Old_Style;
    gfxScheme7->pCommonBkImage =    (GFX_RESOURCE_HDR*)NULL;
	
	gfxScheme7->fillStyle =         GFX_SCHEME_FILL_STYLE_7;
	gfxScheme7->CommonBkType =      GFX_SCHEME_BACKGROUND_TYPE_7;

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
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ButtonScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgCheckBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgTextEntrys(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EditBoxScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgCheckBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgTextEntrys(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgressBarScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgCheckBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgTextEntrys(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_TextEntryScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgCheckBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgTextEntrys(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ListBoxScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgCheckBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgTextEntrys(objMsg, pObj, pMsg) == true)
                return true;
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MeterScreen:
            if (GFX_HGC_MsgButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgDigitalMeters(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgCheckBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgRadioButtons(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgScrollBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgProgressBars(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgEditBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgListBoxes(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgStaticTexts(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgWindows(objMsg, pObj, pMsg) == true)
                return true;
            if (GFX_HGC_MsgTextEntrys(objMsg, pObj, pMsg) == true)
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
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ButtonScreen);
            return true;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ButtonScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ButtonScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ButtonScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ButtonScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ButtonScreen:
            GFX_HGC_SetupScreen(ButtonScreen);
            GFX_HGC_DrawScreen_GOL(ButtonScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ButtonScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ButtonScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ButtonScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ButtonScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ButtonScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ButtonScreen:
            GFX_HGC_DrawScreen_Primitives(ButtonScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ButtonScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ButtonScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ButtonScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ButtonScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_EditBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_EditBoxScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_EditBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_EditBoxScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_EditBoxScreen:
            GFX_HGC_SetupScreen(EditBoxScreen);
            GFX_HGC_DrawScreen_GOL(EditBoxScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_EditBoxScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_EditBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_EditBoxScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_EditBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_EditBoxScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_EditBoxScreen:
            GFX_HGC_DrawScreen_Primitives(EditBoxScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_EditBoxScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_EditBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_EditBoxScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EditBoxScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ProgressBarScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ProgressBarScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ProgressBarScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ProgressBarScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ProgressBarScreen:
            GFX_HGC_SetupScreen(ProgressBarScreen);
            GFX_HGC_DrawScreen_GOL(ProgressBarScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ProgressBarScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ProgressBarScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ProgressBarScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ProgressBarScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ProgressBarScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ProgressBarScreen:
            GFX_HGC_DrawScreen_Primitives(ProgressBarScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ProgressBarScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ProgressBarScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgressBarScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgressBarScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_TextEntryScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_TextEntryScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_TextEntryScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_TextEntryScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_TextEntryScreen:
            GFX_HGC_SetupScreen(TextEntryScreen);
            GFX_HGC_DrawScreen_GOL(TextEntryScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_TextEntryScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_TextEntryScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_TextEntryScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_TextEntryScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_TextEntryScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_TextEntryScreen:
            GFX_HGC_DrawScreen_Primitives(TextEntryScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_TextEntryScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_TextEntryScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_TextEntryScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_TextEntryScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_ListBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ListBoxScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ListBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ListBoxScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ListBoxScreen:
            GFX_HGC_SetupScreen(ListBoxScreen);
            GFX_HGC_DrawScreen_GOL(ListBoxScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ListBoxScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ListBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ListBoxScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ListBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ListBoxScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ListBoxScreen:
            GFX_HGC_DrawScreen_Primitives(ListBoxScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ListBoxScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ListBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_ListBoxScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ListBoxScreen:
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_MeterScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MeterScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MeterScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MeterScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MeterScreen:
            GFX_HGC_SetupScreen(MeterScreen);
            GFX_HGC_DrawScreen_GOL(MeterScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MeterScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MeterScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MeterScreen);
            break;
        case HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MeterScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MeterScreen);
            break;
        case HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MeterScreen:
            GFX_HGC_DrawScreen_Primitives(MeterScreen);
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MeterScreen);
            break;
        case HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MeterScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_DISPLAY_SCREEN_MeterScreen);
            break;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MeterScreen:
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
        case ButtonScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case EditBoxScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ProgressBarScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case TextEntryScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case ListBoxScreen:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            GFX_GOL_ObjectListFree(GFX_INDEX_0); // free memory for the objects in the previous linked list and start new list
            break;
        case MeterScreen:
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
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ButtonScreen:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_EditBoxScreen:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ProgressBarScreen:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_TextEntryScreen:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_ListBoxScreen:
            return true;
        case HGC_SCREEN_STATE_DISPLAY_SCREEN_MeterScreen:
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
        case ButtonScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ButtonScreen);
            break;
        case EditBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_EditBoxScreen);
            break;
        case ProgressBarScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ProgressBarScreen);
            break;
        case TextEntryScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_TextEntryScreen);
            break;
        case ListBoxScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_ListBoxScreen);
            break;
        case MeterScreen:
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_MeterScreen);
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
        case ButtonScreen:
            GFX_HGC_DrawItem(Window6);
            GFX_HGC_DrawItem(Button18);
            GFX_HGC_DrawItem(Button19);
            GFX_HGC_DrawItem(Button20);
            GFX_HGC_DrawItem(Button21);
            GFX_HGC_DrawItem(Button22);
            GFX_HGC_DrawItem(Button23);
            GFX_HGC_DrawItem(Button24);
            GFX_HGC_DrawItem(Button25);
            break;
        case EditBoxScreen:
            GFX_HGC_DrawItem(Window1);
            GFX_HGC_DrawItem(EditBox3);
            GFX_HGC_DrawItem(Button1);
            GFX_HGC_DrawItem(GroupBox4);
            GFX_HGC_DrawItem(CheckBox1);
            GFX_HGC_DrawItem(Button2);
            GFX_HGC_DrawItem(GroupBox3);
            GFX_HGC_DrawItem(RadioButton7);
            GFX_HGC_DrawItem(RadioButton8);
            GFX_HGC_DrawItem(RadioButton9);
            GFX_HGC_DrawItem(GroupBox5);
            GFX_HGC_DrawItem(RadioButton11);
            GFX_HGC_DrawItem(RadioButton12);
            GFX_HGC_DrawItem(RadioButton10);
            break;
        case ProgressBarScreen:
            GFX_HGC_DrawItem(Window2);
            GFX_HGC_DrawItem(Button3);
            GFX_HGC_DrawItem(Button4);
            GFX_HGC_DrawItem(ProgressBar2);
            GFX_HGC_DrawItem(GroupBox1);
            GFX_HGC_DrawItem(RadioButton1);
            GFX_HGC_DrawItem(RadioButton2);
            GFX_HGC_DrawItem(RadioButton3);
            GFX_HGC_DrawItem(ProgressBar1);
            GFX_HGC_DrawItem(ProgressBar3);
            GFX_HGC_DrawItem(StaticText1);
            GFX_HGC_DrawItem(StaticText2);
            GFX_HGC_DrawItem(StaticText3);
            break;
        case TextEntryScreen:
            GFX_HGC_DrawItem(Window3);
            GFX_HGC_DrawItem(TextEntry2);
            GFX_HGC_DrawItem(Button6);
            GFX_HGC_DrawItem(Button5);
            GFX_HGC_DrawItem(StaticText4);
            GFX_HGC_DrawItem(StaticText5);
            GFX_HGC_DrawItem(StaticText6);
            break;
        case ListBoxScreen:
            GFX_HGC_DrawItem(Window4);
            GFX_HGC_DrawItem(Button7);
            GFX_HGC_DrawItem(GroupBox2);
            GFX_HGC_DrawItem(RadioButton4);
            GFX_HGC_DrawItem(RadioButton5);
            GFX_HGC_DrawItem(RadioButton6);
            GFX_HGC_DrawItem(ListBox2);
            GFX_HGC_DrawItem(Button8);
            GFX_HGC_DrawItem(Button9);
            GFX_HGC_DrawItem(Slider1);
            GFX_HGC_DrawItem(Button10);
            break;
        case MeterScreen:
            GFX_HGC_DrawItem(Window5);
            GFX_HGC_DrawItem(Meter1);
            GFX_HGC_DrawItem(DigitalMeter1);
            GFX_HGC_DrawItem(Button11);
            GFX_HGC_DrawItem(Button12);
            GFX_HGC_DrawItem(Meter2);
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
        case ButtonScreen:
            break;
        case EditBoxScreen:
            break;
        case ProgressBarScreen:
            break;
        case TextEntryScreen:
            break;
        case ListBoxScreen:
            break;
        case MeterScreen:
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
    case Button25:
        hgcObj.pButton25Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button25,      // button ID
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
    case Button24:
        hgcObj.pButton24Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button24,      // button ID
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
    case Button23:
        hgcObj.pButton23Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button23,      // button ID
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
    case Button22:
        hgcObj.pButton22Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button22,      // button ID
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
    case Button21:
        hgcObj.pButton21Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button21,      // button ID
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
    case Button20:
        hgcObj.pButton20Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button20,      // button ID
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
    case Button19:
        hgcObj.pButton19Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button19,      // button ID
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
    case Button1:
        hgcObj.pButton1Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button1,      // button ID
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
    case Button4:
        hgcObj.pButton4Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button4,      // button ID
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
    case Button3:
        hgcObj.pButton3Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button3,      // button ID
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
    case Button5:
        hgcObj.pButton5Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button5,      // button ID
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
    case Button6:
        hgcObj.pButton6Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button6,      // button ID
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
    case Button10:
        hgcObj.pButton10Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button10,      // button ID
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
    case Button9:
        hgcObj.pButton9Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button9,      // button ID
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
    case Button12:
        hgcObj.pButton12Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button12,      // button ID
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
    case Button11:
        hgcObj.pButton11Obj = GFX_GOL_ButtonCreate
                (
                 GFX_INDEX_0,
                 Button11,      // button ID
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
    case DigitalMeter1:
        hgcObj.pDigitalMeter1Obj = GFX_GOL_DigitalMeterCreate
                (
                 GFX_INDEX_0,
                 DigitalMeter1,      // digital meter ID
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
    case CheckBox1:
        hgcObj.pCheckBox1Obj = GFX_GOL_CheckBoxCreate
                (
                 GFX_INDEX_0,
                 CheckBox1,      // Check Box ID
                 GFX_CHECKBOX_LEFT_0,    // left
                 GFX_CHECKBOX_TOP_0,     // top
                 GFX_CHECKBOX_RIGHT_0,   // right
                 GFX_CHECKBOX_BOTTOM_0,  // bottom 
                 GFX_CHECKBOX_STATE_0,   // state
                 (GFX_XCHAR*)checkBoxStr_0,			 		 
                 GFX_CHECKBOX_ALIGNMENT_0,//alignment
                 GFX_CHECKBOX_SCHEME_0	//scheme
                 ); // use alternate scheme
        break;
    case RadioButton10:
        hgcObj.pRadioButton10Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton10,      // Radio button Box ID
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
    case RadioButton12:
        hgcObj.pRadioButton12Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton12,      // Radio button Box ID
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
    case RadioButton11:
        hgcObj.pRadioButton11Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton11,      // Radio button Box ID
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
    case RadioButton9:
        hgcObj.pRadioButton9Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton9,      // Radio button Box ID
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
    case RadioButton8:
        hgcObj.pRadioButton8Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton8,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_4,    // left
                 GFX_RADIOBUTTON_TOP_4,     // top
                 GFX_RADIOBUTTON_RIGHT_4,   // right
                 GFX_RADIOBUTTON_BOTTOM_4,  // bottom 
                 GFX_RADIOBUTTON_STATE_4,   // state
                 (GFX_XCHAR*)radioButtonStr_4,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_4,//alignment
                 GFX_RADIOBUTTON_SCHEME_4,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_4,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_4 //number of groups on screen
                 ); // use alternate scheme
        break;
    case RadioButton7:
        hgcObj.pRadioButton7Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton7,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_5,    // left
                 GFX_RADIOBUTTON_TOP_5,     // top
                 GFX_RADIOBUTTON_RIGHT_5,   // right
                 GFX_RADIOBUTTON_BOTTOM_5,  // bottom 
                 GFX_RADIOBUTTON_STATE_5,   // state
                 (GFX_XCHAR*)radioButtonStr_5,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_5,//alignment
                 GFX_RADIOBUTTON_SCHEME_5,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_5,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_5 //number of groups on screen
                 ); // use alternate scheme
        break;
    case RadioButton3:
        hgcObj.pRadioButton3Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton3,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_6,    // left
                 GFX_RADIOBUTTON_TOP_6,     // top
                 GFX_RADIOBUTTON_RIGHT_6,   // right
                 GFX_RADIOBUTTON_BOTTOM_6,  // bottom 
                 GFX_RADIOBUTTON_STATE_6,   // state
                 (GFX_XCHAR*)radioButtonStr_6,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_6,//alignment
                 GFX_RADIOBUTTON_SCHEME_6,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_6,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_6 //number of groups on screen
                 ); // use alternate scheme
        break;
    case RadioButton2:
        hgcObj.pRadioButton2Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton2,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_7,    // left
                 GFX_RADIOBUTTON_TOP_7,     // top
                 GFX_RADIOBUTTON_RIGHT_7,   // right
                 GFX_RADIOBUTTON_BOTTOM_7,  // bottom 
                 GFX_RADIOBUTTON_STATE_7,   // state
                 (GFX_XCHAR*)radioButtonStr_7,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_7,//alignment
                 GFX_RADIOBUTTON_SCHEME_7,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_7,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_7 //number of groups on screen
                 ); // use alternate scheme
        break;
    case RadioButton1:
        hgcObj.pRadioButton1Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton1,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_8,    // left
                 GFX_RADIOBUTTON_TOP_8,     // top
                 GFX_RADIOBUTTON_RIGHT_8,   // right
                 GFX_RADIOBUTTON_BOTTOM_8,  // bottom 
                 GFX_RADIOBUTTON_STATE_8,   // state
                 (GFX_XCHAR*)radioButtonStr_8,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_8,//alignment
                 GFX_RADIOBUTTON_SCHEME_8,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_8,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_8 //number of groups on screen
                 ); // use alternate scheme
        break;
    case RadioButton6:
        hgcObj.pRadioButton6Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton6,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_9,    // left
                 GFX_RADIOBUTTON_TOP_9,     // top
                 GFX_RADIOBUTTON_RIGHT_9,   // right
                 GFX_RADIOBUTTON_BOTTOM_9,  // bottom 
                 GFX_RADIOBUTTON_STATE_9,   // state
                 (GFX_XCHAR*)radioButtonStr_9,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_9,//alignment
                 GFX_RADIOBUTTON_SCHEME_9,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_9,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_9 //number of groups on screen
                 ); // use alternate scheme
        break;
    case RadioButton5:
        hgcObj.pRadioButton5Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton5,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_10,    // left
                 GFX_RADIOBUTTON_TOP_10,     // top
                 GFX_RADIOBUTTON_RIGHT_10,   // right
                 GFX_RADIOBUTTON_BOTTOM_10,  // bottom 
                 GFX_RADIOBUTTON_STATE_10,   // state
                 (GFX_XCHAR*)radioButtonStr_10,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_10,//alignment
                 GFX_RADIOBUTTON_SCHEME_10,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_10,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_10 //number of groups on screen
                 ); // use alternate scheme
        break;
    case RadioButton4:
        hgcObj.pRadioButton4Obj = GFX_GOL_RadioButtonListCreate
                (
                 GFX_INDEX_0,
                 RadioButton4,      // Radio button Box ID
                 GFX_RADIOBUTTON_LEFT_11,    // left
                 GFX_RADIOBUTTON_TOP_11,     // top
                 GFX_RADIOBUTTON_RIGHT_11,   // right
                 GFX_RADIOBUTTON_BOTTOM_11,  // bottom 
                 GFX_RADIOBUTTON_STATE_11,   // state
                 (GFX_XCHAR*)radioButtonStr_11,			 		 
                 GFX_RADIOBUTTON_ALIGNMENT_11,//alignment
                 GFX_RADIOBUTTON_SCHEME_11,	  //scheme
                 GFX_RADIOBUTTON_GROUPNO_11,  //group number
                 GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_11 //number of groups on screen
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
    case ProgressBar3:
        hgcObj.pProgressBar3Obj = GFX_GOL_ProgressBarCreate
                (
                 GFX_INDEX_0,
                 ProgressBar3,      // progressbar ID
                 GFX_PROGRESSBAR_LEFT_0,    // left
                 GFX_PROGRESSBAR_TOP_0,     // top
                 GFX_PROGRESSBAR_RIGHT_0,   // right				 
                 GFX_PROGRESSBAR_BOTTOM_0,  // bottom
				 GFX_PROGRESSBAR_STATE_0,   // state
				 GFX_PROGRESSBAR_POS_0,     //position                 
                 GFX_PROGRESSBAR_RANGE_0,   // range				 
                 GFX_PROGRESSBAR_SCHEME_0
                 );
        GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar3Obj, GFX_PROGRESSBAR_POS_0);
        break;
    case ProgressBar1:
        hgcObj.pProgressBar1Obj = GFX_GOL_ProgressBarCreate
                (
                 GFX_INDEX_0,
                 ProgressBar1,      // progressbar ID
                 GFX_PROGRESSBAR_LEFT_1,    // left
                 GFX_PROGRESSBAR_TOP_1,     // top
                 GFX_PROGRESSBAR_RIGHT_1,   // right				 
                 GFX_PROGRESSBAR_BOTTOM_1,  // bottom
				 GFX_PROGRESSBAR_STATE_1,   // state
				 GFX_PROGRESSBAR_POS_1,     //position                 
                 GFX_PROGRESSBAR_RANGE_1,   // range				 
                 GFX_PROGRESSBAR_SCHEME_1
                 );
        GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar1Obj, GFX_PROGRESSBAR_POS_1);
        break;
    case ProgressBar2:
        hgcObj.pProgressBar2Obj = GFX_GOL_ProgressBarCreate
                (
                 GFX_INDEX_0,
                 ProgressBar2,      // progressbar ID
                 GFX_PROGRESSBAR_LEFT_2,    // left
                 GFX_PROGRESSBAR_TOP_2,     // top
                 GFX_PROGRESSBAR_RIGHT_2,   // right				 
                 GFX_PROGRESSBAR_BOTTOM_2,  // bottom
				 GFX_PROGRESSBAR_STATE_2,   // state
				 GFX_PROGRESSBAR_POS_2,     //position                 
                 GFX_PROGRESSBAR_RANGE_2,   // range				 
                 GFX_PROGRESSBAR_SCHEME_2
                 );
        GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar2Obj, GFX_PROGRESSBAR_POS_2);
        break;
    case Meter2:
        hgcObj.pMeter2Obj = GFX_GOL_MeterCreate
                (
                 GFX_INDEX_0,
                 Meter2,      // meter ID
                 GFX_METER_LEFT_0,    // left
                 GFX_METER_TOP_0,     // top
                 GFX_METER_RIGHT_0,   // right				 
                 GFX_METER_BOTTOM_0,  // bottom
				 GFX_METER_STATE_0,   // state
                 GFX_METER_TYPE_0, // type
				 GFX_METER_VALUE_0,     //value                 
                 GFX_METER_MIN_VALUE_0,   // min value
                 GFX_METER_MAX_VALUE_0,   // max value
                 (GFX_RESOURCE_HDR*) &Times_New_Roman,   // title font
                 (GFX_RESOURCE_HDR*) &Times_New_Roman,   // value font
                 (GFX_XCHAR*)meterStr_0,    // text
                 GFX_METER_SCHEME_0
                 );
        GFX_GOL_MeterScaleColorsSet(hgcObj.pMeter2Obj, 
                        GFX_RGBConvert(GFX_METER_COLOR1_RED_0, GFX_METER_COLOR1_GREEN_0, GFX_METER_COLOR1_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR2_RED_0, GFX_METER_COLOR2_GREEN_0, GFX_METER_COLOR2_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR3_RED_0, GFX_METER_COLOR3_GREEN_0, GFX_METER_COLOR3_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR4_RED_0, GFX_METER_COLOR4_GREEN_0, GFX_METER_COLOR4_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR5_RED_0, GFX_METER_COLOR5_GREEN_0, GFX_METER_COLOR5_BLUE_0),
                        GFX_RGBConvert(GFX_METER_COLOR6_RED_0, GFX_METER_COLOR6_GREEN_0, GFX_METER_COLOR6_BLUE_0));
        break;
    case Meter1:
        hgcObj.pMeter1Obj = GFX_GOL_MeterCreate
                (
                 GFX_INDEX_0,
                 Meter1,      // meter ID
                 GFX_METER_LEFT_1,    // left
                 GFX_METER_TOP_1,     // top
                 GFX_METER_RIGHT_1,   // right				 
                 GFX_METER_BOTTOM_1,  // bottom
				 GFX_METER_STATE_1,   // state
                 GFX_METER_TYPE_1, // type
				 GFX_METER_VALUE_1,     //value                 
                 GFX_METER_MIN_VALUE_1,   // min value
                 GFX_METER_MAX_VALUE_1,   // max value
                 (GFX_RESOURCE_HDR*) &Times_New_Roman,   // title font
                 (GFX_RESOURCE_HDR*) &Times_New_Roman,   // value font
                 (GFX_XCHAR*)meterStr_1,    // text
                 GFX_METER_SCHEME_1
                 );
        GFX_GOL_MeterScaleColorsSet(hgcObj.pMeter1Obj, 
                        GFX_RGBConvert(GFX_METER_COLOR1_RED_1, GFX_METER_COLOR1_GREEN_1, GFX_METER_COLOR1_BLUE_1),
                        GFX_RGBConvert(GFX_METER_COLOR2_RED_1, GFX_METER_COLOR2_GREEN_1, GFX_METER_COLOR2_BLUE_1),
                        GFX_RGBConvert(GFX_METER_COLOR3_RED_1, GFX_METER_COLOR3_GREEN_1, GFX_METER_COLOR3_BLUE_1),
                        GFX_RGBConvert(GFX_METER_COLOR4_RED_1, GFX_METER_COLOR4_GREEN_1, GFX_METER_COLOR4_BLUE_1),
                        GFX_RGBConvert(GFX_METER_COLOR5_RED_1, GFX_METER_COLOR5_GREEN_1, GFX_METER_COLOR5_BLUE_1),
                        GFX_RGBConvert(GFX_METER_COLOR6_RED_1, GFX_METER_COLOR6_GREEN_1, GFX_METER_COLOR6_BLUE_1));
        break;
    case EditBox3:
        hgcObj.pEditBox3Obj = GFX_GOL_EditBoxCreate
                (
                 GFX_INDEX_0,
                 EditBox3,      // button ID
                 GFX_EDITBOX_LEFT_0,    // left
                 GFX_EDITBOX_TOP_0,     // top
                 GFX_EDITBOX_RIGHT_0,   // right
                 GFX_EDITBOX_BOTTOM_0,  // bottom
				 GFX_EDITBOX_STATE_0,   // state
				 (GFX_XCHAR*)editBoxStr_0,    // text
                 GFX_EDITBOX_NOOFCHARS_0,   // no. of chars
                 GFX_EDITBOX_ALIGNMENT_0,       //alignment
                 GFX_EDITBOX_SCHEME_0
                 ); // use alternate scheme
        break;
    case ListBox2:
        hgcObj.pListBox2Obj = GFX_GOL_ListBoxCreate(
                GFX_INDEX_0,
                ListBox2, // id
                GFX_LISTBOX_LEFT_0, // left
                GFX_LISTBOX_TOP_0, // top
                GFX_LISTBOX_RIGHT_0, // right
                GFX_LISTBOX_BOTTOM_0, // bottom
				GFX_LISTBOX_STATE_0, // state
				NULL, // default text
                GFX_LISTBOX_ALIGNMENT_0, //alignment
                GFX_LISTBOX_SCHEME_0); // scheme
		
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				NULL,
				ListBox2_item_0_text,
				NULL,
				GFX_GOL_LISTBOX_ITEM_STATUS_SELECTED,
				GFX_LISTBOX_0_ITEM_0_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_1_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_1_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_2_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_2_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_3_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_3_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_4_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_4_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_5_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_5_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_6_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_6_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_7_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_7_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_8_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_8_USERDATA);
				
		hgcObj.pListBoxItem = GFX_GOL_ListBoxItemAdd(
				hgcObj.pListBox2Obj,
				hgcObj.pListBoxItem,
				ListBox2_item_9_text,
				NULL,
				0,
				GFX_LISTBOX_0_ITEM_9_USERDATA);
				
        break;
    case GroupBox5:
        hgcObj.pGroupBox5Obj = GFX_GOL_GroupboxCreate(
                GFX_INDEX_0,
                GroupBox5, // id
                GFX_GROUPBOX_LEFT_0, // left
                GFX_GROUPBOX_TOP_0, // top
                GFX_GROUPBOX_RIGHT_0, // right
                GFX_GROUPBOX_BOTTOM_0, // bottom
				GFX_GROUPBOX_STATE_0, // state
				GroupBox5_text, // text
                GFX_GROUPBOX_ALIGNMENT_0, //alignment
                GFX_GROUPBOX_SCHEME_0); // scheme
				
		break;
		
    case GroupBox3:
        hgcObj.pGroupBox3Obj = GFX_GOL_GroupboxCreate(
                GFX_INDEX_0,
                GroupBox3, // id
                GFX_GROUPBOX_LEFT_1, // left
                GFX_GROUPBOX_TOP_1, // top
                GFX_GROUPBOX_RIGHT_1, // right
                GFX_GROUPBOX_BOTTOM_1, // bottom
				GFX_GROUPBOX_STATE_1, // state
				GroupBox3_text, // text
                GFX_GROUPBOX_ALIGNMENT_1, //alignment
                GFX_GROUPBOX_SCHEME_1); // scheme
				
		break;
		
    case GroupBox4:
        hgcObj.pGroupBox4Obj = GFX_GOL_GroupboxCreate(
                GFX_INDEX_0,
                GroupBox4, // id
                GFX_GROUPBOX_LEFT_2, // left
                GFX_GROUPBOX_TOP_2, // top
                GFX_GROUPBOX_RIGHT_2, // right
                GFX_GROUPBOX_BOTTOM_2, // bottom
				GFX_GROUPBOX_STATE_2, // state
				GroupBox4_text, // text
                GFX_GROUPBOX_ALIGNMENT_2, //alignment
                GFX_GROUPBOX_SCHEME_2); // scheme
				
		break;
		
    case GroupBox1:
        hgcObj.pGroupBox1Obj = GFX_GOL_GroupboxCreate(
                GFX_INDEX_0,
                GroupBox1, // id
                GFX_GROUPBOX_LEFT_3, // left
                GFX_GROUPBOX_TOP_3, // top
                GFX_GROUPBOX_RIGHT_3, // right
                GFX_GROUPBOX_BOTTOM_3, // bottom
				GFX_GROUPBOX_STATE_3, // state
				GroupBox1_text, // text
                GFX_GROUPBOX_ALIGNMENT_3, //alignment
                GFX_GROUPBOX_SCHEME_3); // scheme
				
		break;
		
    case GroupBox2:
        hgcObj.pGroupBox2Obj = GFX_GOL_GroupboxCreate(
                GFX_INDEX_0,
                GroupBox2, // id
                GFX_GROUPBOX_LEFT_4, // left
                GFX_GROUPBOX_TOP_4, // top
                GFX_GROUPBOX_RIGHT_4, // right
                GFX_GROUPBOX_BOTTOM_4, // bottom
				GFX_GROUPBOX_STATE_4, // state
				GroupBox2_text, // text
                GFX_GROUPBOX_ALIGNMENT_4, //alignment
                GFX_GROUPBOX_SCHEME_4); // scheme
				
		break;
		
    case StaticText3:
        hgcObj.pStaticText3Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText3,      // button ID
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
    case StaticText1:
        hgcObj.pStaticText1Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText1,      // button ID
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
    case StaticText6:
        hgcObj.pStaticText6Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText6,      // button ID
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
    case StaticText5:
        hgcObj.pStaticText5Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText5,      // button ID
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
    case StaticText4:
        hgcObj.pStaticText4Obj = GFX_GOL_StaticTextCreate
                (
                 GFX_INDEX_0,
                 StaticText4,      // button ID
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
    case TextEntry2:
        hgcObj.pTextEntry2Obj = GFX_GOL_TextEntryCreate(
                GFX_INDEX_0,
                TextEntry2, // id
                HGC_TEXTENTRY_LEFT_0, // left
                HGC_TEXTENTRY_TOP_0, // top
                HGC_TEXTENTRY_RIGHT_0, // right
                HGC_TEXTENTRY_BOTTOM_0, // bottom
				HGC_TEXTENTRY_STATE_0, // state				
				HGC_TEXTENTRY_COLUMN_COUNT_0, // columns
				HGC_TEXTENTRY_ROW_COUNT_0, // rows
				TextEntry2_cell_text, // cell text
				TextEntry2_text, // initial text
                HGC_TEXTENTRY_ALIGNMENT_0, //alignment
				HGC_TEXTENTRY_BUFFERSIZE_0,
				(GFX_RESOURCE_HDR*)&Times_New_Roman, // font
                HGC_TEXTENTRY_SCHEME_0); // scheme
				
        break;
    case Window6:
        hgcObj.pWindow6Obj = GFX_GOL_WindowCreate
                (
                 GFX_INDEX_0,
                 Window6,      // button ID
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
    case Window1:
        hgcObj.pWindow1Obj = GFX_GOL_WindowCreate
                (
                 GFX_INDEX_0,
                 Window1,      // button ID
                 GFX_WINDOW_LEFT_1,    // left
                 GFX_WINDOW_TOP_1,     // top
                 GFX_WINDOW_RIGHT_1,   // right				 
                 GFX_WINDOW_BOTTOM_1,  // bottom
                 GFX_WINDOW_STATE_1,   // state
                 GFX_WINDOW_IMAGE_1,     // press image                 
                 (GFX_XCHAR*)windowTextStr_1,    // text
                 GFX_WINDOW_ALIGNMENT_1,       //alignment
                 GFX_WINDOW_SCHEME_1
                 ); // use alternate scheme
        break;
    case Window2:
        hgcObj.pWindow2Obj = GFX_GOL_WindowCreate
                (
                 GFX_INDEX_0,
                 Window2,      // button ID
                 GFX_WINDOW_LEFT_2,    // left
                 GFX_WINDOW_TOP_2,     // top
                 GFX_WINDOW_RIGHT_2,   // right				 
                 GFX_WINDOW_BOTTOM_2,  // bottom
                 GFX_WINDOW_STATE_2,   // state
                 GFX_WINDOW_IMAGE_2,     // press image                 
                 (GFX_XCHAR*)windowTextStr_2,    // text
                 GFX_WINDOW_ALIGNMENT_2,       //alignment
                 GFX_WINDOW_SCHEME_2
                 ); // use alternate scheme
        break;
    case Window3:
        hgcObj.pWindow3Obj = GFX_GOL_WindowCreate
                (
                 GFX_INDEX_0,
                 Window3,      // button ID
                 GFX_WINDOW_LEFT_3,    // left
                 GFX_WINDOW_TOP_3,     // top
                 GFX_WINDOW_RIGHT_3,   // right				 
                 GFX_WINDOW_BOTTOM_3,  // bottom
                 GFX_WINDOW_STATE_3,   // state
                 GFX_WINDOW_IMAGE_3,     // press image                 
                 (GFX_XCHAR*)windowTextStr_3,    // text
                 GFX_WINDOW_ALIGNMENT_3,       //alignment
                 GFX_WINDOW_SCHEME_3
                 ); // use alternate scheme
        break;
    case Window4:
        hgcObj.pWindow4Obj = GFX_GOL_WindowCreate
                (
                 GFX_INDEX_0,
                 Window4,      // button ID
                 GFX_WINDOW_LEFT_4,    // left
                 GFX_WINDOW_TOP_4,     // top
                 GFX_WINDOW_RIGHT_4,   // right				 
                 GFX_WINDOW_BOTTOM_4,  // bottom
                 GFX_WINDOW_STATE_4,   // state
                 GFX_WINDOW_IMAGE_4,     // press image                 
                 (GFX_XCHAR*)windowTextStr_4,    // text
                 GFX_WINDOW_ALIGNMENT_4,       //alignment
                 GFX_WINDOW_SCHEME_4
                 ); // use alternate scheme
        break;
    case Window5:
        hgcObj.pWindow5Obj = GFX_GOL_WindowCreate
                (
                 GFX_INDEX_0,
                 Window5,      // button ID
                 GFX_WINDOW_LEFT_5,    // left
                 GFX_WINDOW_TOP_5,     // top
                 GFX_WINDOW_RIGHT_5,   // right				 
                 GFX_WINDOW_BOTTOM_5,  // bottom
                 GFX_WINDOW_STATE_5,   // state
                 GFX_WINDOW_IMAGE_5,     // press image                 
                 (GFX_XCHAR*)windowTextStr_5,    // text
                 GFX_WINDOW_ALIGNMENT_5,       //alignment
                 GFX_WINDOW_SCHEME_5
                 ); // use alternate scheme
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
        case Button25:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// CustomAction
				GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
				                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button24),GFX_GOL_BUTTON_DISABLED_STATE);
				                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button24),GFX_GOL_BUTTON_DRAW_STATE);

            }
			
            return true;
        case Button24:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// CustomAction
				GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
				                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,Button25),GFX_GOL_BUTTON_DISABLED_STATE);
				                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,Button25),GFX_GOL_BUTTON_DRAW_STATE);

            }
			
            return true;
        case Button22:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(EditBoxScreen);
            }
			
            return true;
        case Button2:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(ProgressBarScreen);
				
				// CustomAction
				APP_ResetVotesPolled();

            }
			
            return true;
        case Button1:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(ButtonScreen);
            }
			
            return true;
        case Button4:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(TextEntryScreen);
            }
			
            return true;
        case Button3:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(EditBoxScreen);
            }
			
            return true;
        case Button5:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(ProgressBarScreen);
				
				// CustomAction
				APP_ResetVotesPolled();

            }
			
            return true;
        case Button6:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(ListBoxScreen);
            }
			
            return true;
        case Button10:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(MeterScreen);
				
				// CustomAction
				APP_resetMeterValues();

            }
			
            return true;
        case Button9:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_LISTBOX *pLb = (GFX_GOL_LISTBOX *) GFX_GOL_ObjectFind(GFX_INDEX_0, ListBox2);
				GFX_GOL_SCROLLBAR *pSld = (GFX_GOL_SCROLLBAR *) GFX_GOL_ObjectFind(GFX_INDEX_0, Slider1);
				GFX_GOL_ListBoxItemFocusSet(pLb, GFX_GOL_ListBoxItemFocusGet(pLb) + 1);
				GFX_GOL_ObjectStateSet(pLb, GFX_GOL_LISTBOX_DRAW_ITEMS_STATE);
				if (GFX_GOL_ScrollBarPositionGet(pSld) > 0) {
				 GFX_GOL_ScrollBarPositionSet(pSld, GFX_GOL_ScrollBarPositionGet(pSld) - 1);
				 GFX_GOL_ObjectStateSet(pSld, GFX_GOL_SCROLLBAR_DRAW_THUMB_STATE);
				}

            }
			
            return true;
        case Button8:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_GOL_LISTBOX *pLb = (GFX_GOL_LISTBOX *) GFX_GOL_ObjectFind(GFX_INDEX_0, ListBox2);
				GFX_GOL_SCROLLBAR *pSld = (GFX_GOL_SCROLLBAR *) GFX_GOL_ObjectFind(GFX_INDEX_0, Slider1);
				 if (GFX_GOL_ListBoxItemFocusGet(pLb) > 0) {
				        GFX_GOL_ListBoxItemFocusSet(pLb, GFX_GOL_ListBoxItemFocusGet(pLb) - 1);
				        GFX_GOL_ObjectStateSet(pLb, GFX_GOL_LISTBOX_DRAW_ITEMS_STATE);
				        GFX_GOL_ScrollBarPositionSet(pSld, GFX_GOL_ScrollBarPositionGet(pSld) + 1);
				        GFX_GOL_ObjectStateSet(pSld, GFX_GOL_SCROLLBAR_DRAW_THUMB_STATE);
				  }

            }
			
            return true;
        case Button7:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(TextEntryScreen);
            }
			
            return true;
        case Button12:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// customAction
				changeMeterState();

            }
			
            return true;
        case Button11:
            if (objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                // Button Release Event Code
				// Action
				GFX_HGC_ChangeScreen(ListBoxScreen);
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
    bool GFX_HGC_MsgCheckBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Check Boxes events
 */
bool GFX_HGC_MsgCheckBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case CheckBox1:
			if (objMsg == GFX_GOL_CHECKBOX_ACTION_CHECKED)
            {
				// Checkbox Check Event Code
				// CustomAction
				hgcObj.pEditBox3Obj->hdr.state = GFX_GOL_EDITBOX_DRAW_STATE;
				                GFX_GOL_CheckBoxTextSet(hgcObj.pCheckBox1Obj, (GFX_XCHAR*)"Enabled");
								GFX_GOL_ObjectStateSet(hgcObj.pCheckBox1Obj, GFX_GOL_CHECKBOX_DRAW_STATE);

            }
            if (objMsg == GFX_GOL_CHECKBOX_ACTION_UNCHECKED)
            {
                // Checkbox Uncheck Event Code
				// CustomAction
				GFX_GOL_ObjectStateSet(hgcObj.pEditBox3Obj, GFX_GOL_EDITBOX_DRAW_STATE | GFX_GOL_EDITBOX_DISABLED_STATE);
				                GFX_GOL_CheckBoxTextSet(hgcObj.pCheckBox1Obj, (GFX_XCHAR*)"Disabled");
				                GFX_GOL_ObjectStateSet(hgcObj.pCheckBox1Obj, GFX_GOL_CHECKBOX_DRAW_STATE);

            }
			
            return true;
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
        case RadioButton10:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.vAlign = GFX_ALIGN_TOP;
				                if(appData.hAlign == GFX_ALIGN_LEFT)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_TOP | GFX_ALIGN_LEFT);
				                else if(appData.hAlign == GFX_ALIGN_RIGHT)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_TOP | GFX_ALIGN_RIGHT);
				                else
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_TOP | GFX_ALIGN_HCENTER);
				
				                GFX_GOL_ObjectStateSet(hgcObj.pEditBox3Obj,GFX_GOL_EDITBOX_DRAW_STATE);

            }
			
            return true;
        case RadioButton12:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.vAlign = GFX_ALIGN_BOTTOM;
				                if(appData.hAlign == GFX_ALIGN_LEFT)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_BOTTOM | GFX_ALIGN_LEFT);
				                else if(appData.hAlign == GFX_ALIGN_RIGHT)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_BOTTOM | GFX_ALIGN_RIGHT);
				                else
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_BOTTOM | GFX_ALIGN_HCENTER);
				                GFX_GOL_ObjectStateSet(hgcObj.pEditBox3Obj,GFX_GOL_EDITBOX_DRAW_STATE);

            }
			
            return true;
        case RadioButton11:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.vAlign = GFX_ALIGN_VCENTER;
				                if(appData.hAlign == GFX_ALIGN_LEFT)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_VCENTER | GFX_ALIGN_LEFT);
				                else if(appData.hAlign == GFX_ALIGN_RIGHT)
				                     GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_VCENTER | GFX_ALIGN_RIGHT);
				                else
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_VCENTER | GFX_ALIGN_HCENTER);
				
				                GFX_GOL_ObjectStateSet(hgcObj.pEditBox3Obj,GFX_GOL_EDITBOX_DRAW_STATE);

            }
			
            return true;
        case RadioButton9:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.hAlign = GFX_ALIGN_RIGHT;             
				                if(appData.vAlign == GFX_ALIGN_BOTTOM)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_RIGHT | GFX_ALIGN_BOTTOM);
				                else if(appData.vAlign == GFX_ALIGN_TOP)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_RIGHT | GFX_ALIGN_TOP);
				                else
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_RIGHT | GFX_ALIGN_VCENTER);
				
				                GFX_GOL_ObjectStateSet(hgcObj.pEditBox3Obj,GFX_GOL_EDITBOX_DRAW_STATE);

            }
			
            return true;
        case RadioButton8:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.hAlign = GFX_ALIGN_HCENTER;
				                if(appData.vAlign == GFX_ALIGN_BOTTOM)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_HCENTER | GFX_ALIGN_BOTTOM);
				                else if(appData.vAlign == GFX_ALIGN_TOP)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_HCENTER | GFX_ALIGN_TOP);
				                else
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER);
				
				                GFX_GOL_ObjectStateSet(hgcObj.pEditBox3Obj,GFX_GOL_EDITBOX_DRAW_STATE);

            }
			
            return true;
        case RadioButton7:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.hAlign = GFX_ALIGN_LEFT;
				                if(appData.vAlign == GFX_ALIGN_BOTTOM)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_LEFT | GFX_ALIGN_BOTTOM);
				                else if(appData.vAlign == GFX_ALIGN_TOP)
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_LEFT | GFX_ALIGN_TOP);
				                else
				                    GFX_GOL_EditBoxTextAlignmentSet(hgcObj.pEditBox3Obj, GFX_ALIGN_LEFT | GFX_ALIGN_VCENTER);
				
				                GFX_GOL_ObjectStateSet(hgcObj.pEditBox3Obj,GFX_GOL_EDITBOX_DRAW_STATE);

            }
			
            return true;
        case RadioButton3:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.votesC++;
				                appData.totalVotes++;
				                appData.percentageA = ((appData.votesA * 100) / appData.totalVotes);
				                appData.percentageB = ((appData.votesB * 100) / appData.totalVotes);
				                appData.percentageC = 100 - (appData.percentageA + appData.percentageB);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar1Obj, appData.percentageA);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar1Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar2Obj, appData.percentageB);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar2Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar3Obj, appData.percentageC);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar3Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);

            }
			
            return true;
        case RadioButton2:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.votesB++;
				                appData.totalVotes++;
				                appData.percentageA = ((appData.votesA * 100) / appData.totalVotes);
				                appData.percentageB = ((appData.votesB * 100) / appData.totalVotes);
				                appData.percentageC = 100 - (appData.percentageA + appData.percentageB);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar1Obj, appData.percentageA);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar1Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar2Obj, appData.percentageB);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar2Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar3Obj, appData.percentageC);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar3Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);

            }
			
            return true;
        case RadioButton1:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				appData.votesA++;
				                appData.totalVotes++;
				                appData.percentageA = ((appData.votesA * 100) / appData.totalVotes);
				                appData.percentageB = ((appData.votesB * 100) / appData.totalVotes);
				                appData.percentageC = 100 - (appData.percentageA + appData.percentageB);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar1Obj, appData.percentageA);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar1Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar2Obj, appData.percentageB);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar2Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);
				
				                GFX_GOL_ProgressBarPositionSet(hgcObj.pProgressBar3Obj, appData.percentageC);
				                GFX_GOL_ObjectStateSet(hgcObj.pProgressBar3Obj, GFX_GOL_PROGRESSBAR_DRAW_BAR_STATE);

            }
			
            return true;
        case RadioButton6:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				GFX_GOL_ListBoxTextAlignmentSet(hgcObj.pListBox2Obj, GFX_ALIGN_RIGHT);
				                GFX_GOL_ObjectStateSet(hgcObj.pListBox2Obj,GFX_GOL_LISTBOX_DRAW_STATE);    

            }
			
            return true;
        case RadioButton5:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				GFX_GOL_ListBoxTextAlignmentSet(hgcObj.pListBox2Obj, GFX_ALIGN_CENTER);
				                GFX_GOL_ObjectStateSet(hgcObj.pListBox2Obj,GFX_GOL_LISTBOX_DRAW_STATE);

            }
			
            return true;
        case RadioButton4:
			if (objMsg == GFX_GOL_RADIOBUTTON_ACTION_CHECKED)
            {
				// RadioButton Check Event Code
				// CustomAction
				GFX_GOL_ListBoxTextAlignmentSet(hgcObj.pListBox2Obj, GFX_ALIGN_LEFT);
				                GFX_GOL_ObjectStateSet(hgcObj.pListBox2Obj,GFX_GOL_LISTBOX_DRAW_STATE);

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
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgProgressBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Progress Bar events
 */
bool GFX_HGC_MsgProgressBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgEditBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Edit Boxes events
 */
bool GFX_HGC_MsgEditBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgListBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL List Boxes events
 */
bool GFX_HGC_MsgListBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case ListBox2:
			if (objMsg == GFX_GOL_LISTBOX_ACTION_TOUCHSCREEN)
            {
				// ListBox Touch Event Code
				// Action
				// Set new list box position
				GFX_GOL_SCROLLBAR *pSld = (GFX_GOL_SCROLLBAR *) GFX_GOL_ObjectFind(GFX_INDEX_0, Slider1);
				GFX_GOL_LISTBOX *pLb = (GFX_GOL_LISTBOX *) GFX_GOL_ObjectFind(GFX_INDEX_0, ListBox2);
				GFX_GOL_ScrollBarPositionSet(pSld, GFX_GOL_ListBoxItemCountGet(pLb) - GFX_GOL_ListBoxItemFocusGet
				(pLb));
				GFX_GOL_ObjectStateSet(pSld, GFX_GOL_SCROLLBAR_DRAW_THUMB_STATE);

            }
			
            return true;
        default:
            return false; // default false as it is not processed
    }    
}

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgGroupBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Group Boxes events
 */
bool GFX_HGC_MsgGroupBoxes(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
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

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgTextEntrys(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Text Entry events
 */
bool GFX_HGC_MsgTextEntrys(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    switch (GFX_GOL_ObjectIDGet(pObj))
    {
        case TextEntry2:
			if (objMsg == GFX_GOL_TEXTENTRY_ACTION_PRESSED)
            {
				// Text Entry Press Event Code
				// CustomAction
				GFX_GOL_TextEntryActionSet(GFX_GOL_TEXTENTRY_ACTION_PRESSED, hgcObj.pTextEntry2Obj, NULL);
				                if (GFX_GOL_TextEntryKeyIsPressed(hgcObj.pTextEntry2Obj, 26))
				                {                  
				                    GFX_GOL_TextEntryKeyCommandSet(hgcObj.pTextEntry2Obj, 26, GFX_GOL_TEXTENTRY_DELETE_COM);
				                }
				                else if (GFX_GOL_TextEntryKeyIsPressed(hgcObj.pTextEntry2Obj, 27))
				                {
				                    GFX_XCHAR   *pText = GFX_GOL_TextEntryBufferGet(hgcObj.pTextEntry2Obj);
				                    int32_t i = 0;
				
				                    for( i = 0; i < HGC_TEXTENTRY_BUFFERSIZE_0; i++ ) 
				                    {
				                        appData.tempText[i + 6] = pText[i];
				                    }
				
				                    GFX_GOL_StaticTextSet(hgcObj.pStaticText5Obj, appData.tempText);
				                    GFX_GOL_ObjectStateSet(hgcObj.pStaticText5Obj, GFX_GOL_STATICTEXT_DRAW_STATE);
				                    GFX_GOL_TextEntryBufferClear(hgcObj.pTextEntry2Obj);
				                    GFX_GOL_TextEntryKeyCommandSet(hgcObj.pTextEntry2Obj, 27, GFX_GOL_TEXTENTRY_DELETE_COM);
				                }

            }
			
            return true;
        default:
            return false; // process by default
    }

    return true;
}


