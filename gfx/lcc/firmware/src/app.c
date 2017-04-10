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
#include "gfx/gfx.h"
#include "driver/spi/drv_spi.h"
#include "alpha_blend_screen.h"
#include "gfx/jpeg_image.h"
#include "peripheral/tmr/plib_tmr.h"
#include "system/msg/sys_msg.h"

#include "gfx/gfx_gol_button.h"
/////////////////////////////////////////////////////////////////////////////
//                            DEMO STATES
/////////////////////////////////////////////////////////////////////////////
typedef enum
{
    CREATE_MAINMENU = 0,
    DISPLAY_MAINMENU,
    CREATE_ALPHABLEND,
    DISPLAY_ALPHABLEND,
} SCREEN_STATES;

/////////////////////////////////////////////////////////////////////////////
//                              OBJECT'S IDs
/////////////////////////////////////////////////////////////////////////////
#define ID_ICON1 		    0xF010
#define ID_ICON2 		    0xF011
#define ID_ICON3 		    0xF012
#define ID_ICON4 		    0xF013
#define ID_SCROLL1 		    0xF014
#define ID_SCROLL2 		    0xF015
#define ID_SCROLL3 		    0xF016
#define ID_SCROLL4 		    0xF017
#define ID_BACK                     0xF050

/////////////////////////////////////////////////////////////////////////////
//                              OBJECT DIMENSIONS
/////////////////////////////////////////////////////////////////////////////
#define ICON_WIDTH          (72)
#define ICON_HEIGHT         (100)
#define ICON_COLUMNSNUM     (2)
#define ICON_ROWSNUM        (2)
#define ICON_XINDENT        ((GFX_MaxXGet(GFX_INDEX_0) - ICON_COLUMNSNUM * ICON_WIDTH) / (ICON_COLUMNSNUM + 1))
#define ICON_YINDENT        ((GFX_MaxYGet(GFX_INDEX_0) - ICON_ROWSNUM * ICON_HEIGHT) / (ICON_ROWSNUM + 1))
#define IconTop(row)        (((row + 1) * ICON_YINDENT) + (row * ICON_HEIGHT))
#define IconBottom(row)     ((row + 1) * (ICON_YINDENT + ICON_HEIGHT))
#define IconLeft(column)    (((column + 1) * ICON_XINDENT) + (column * ICON_WIDTH))
#define IconRight(column)   ((column + 1) * (ICON_XINDENT + ICON_WIDTH))

extern uint16_t scroll,scrollLine,scrollPage;
#define PIP_BUFFER  (3)

extern IMG_FILE_SYSTEM_API _jpegFileApi; 

/////////////////////////////////////////////////////////////////////////////
//                            IMAGES USED
/////////////////////////////////////////////////////////////////////////////
// iinternal flash image
//extern const IMAGE_FLASH    MCHPFolderFile_8bpp_72x72;
//extern const IMAGE_FLASH    MCHPFolderEmpty_8bpp_72x72;

/////////////////////////////////////////////////////////////////////////////
//                            FONTS USED
/////////////////////////////////////////////////////////////////////////////
//extern const FONT_FLASH     GOLFontDefault; // default GOL font
//extern const FONT_FLASH     Gentium;

/////////////////////////////////////////////////////////////////////////////
//                            LOCAL PROTOTYPES
/////////////////////////////////////////////////////////////////////////////
void            TickInit(void);            // starts tick counter
uint16_t        CreateMainMenu();
uint16_t        CreateBackButton();
void            SpeedDemo(void);
void            PIPDemo(void);
void            PagingDemo(void);
void            ScrollScreen(uint8_t direction, uint16_t delay);
void            TouchMessageCallback(SYS_MSG_OBJECT *pMsg);
void APP_TMR_DelayMS ( unsigned int delayMs );

volatile uint32_t  tick = 0, prevTick;             // tick counter,


/////////////////////////////////////////////////////////////////////////////
//                            IMAGES USED
/////////////////////////////////////////////////////////////////////////////
// see InternalResources.h

/////////////////////////////////////////////////////////////////////////////
//                                  MAIN
/////////////////////////////////////////////////////////////////////////////
GFX_GOL_OBJ_SCHEME      *demoScheme;                // alternative style scheme
GFX_GOL_OBJ_SCHEME      *AlphaScheme;                // alternative style scheme

// current state of main demo state mashine
SCREEN_STATES   screenState = CREATE_MAINMENU;


GFX_XCHAR Labels[4][10] = { {'P','I','P',0},
                       {'S','p','e','e','d',0},
                       {'A','.','B','l','e','n','d',0},
                       {'P','a','g','i','n','g',0},
                     };

GFX_XCHAR Scroll[4][3] = { {'<',0},
                       {'/',0x5c,0},
                       {'>',0},
                       {0x5c,'/',0},
                     };

GFX_XCHAR MainMenuStr[5] = {'M','A','I','N',0};


bool GFX_GOL_DrawCallback (void);
bool GFX_GOL_MessageCallback (
                              GFX_GOL_TRANSLATED_ACTION translatedMsg,
                              GFX_GOL_OBJ_HEADER *pObj,
                              GFX_GOL_MESSAGE * pMsg);

extern const GFX_GOL_OBJ_SCHEME GOLSchemeDefault;

GFX_GOL_OBJ_SCHEME *GFX_GOL_SchemeCreate(void)
{
    GFX_GOL_OBJ_SCHEME  *pTemp;

    pTemp = (GFX_GOL_OBJ_SCHEME *)GFX_malloc(sizeof(GFX_GOL_OBJ_SCHEME));

    if(pTemp != NULL)
    {
        memcpy(pTemp, &GOLSchemeDefault, sizeof(GFX_GOL_OBJ_SCHEME));
    }

    return (pTemp);
}

SYS_MSG_INSTANCE iSysMsg = SYS_MSG_0;
SYS_OBJ_HANDLE hSysMsg, hMsgType, hMailbox;

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
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback funtions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary local functions.
*/


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
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;

    ImageDecoderInit();

    JPEGInit();

    hMsgType = SYS_MSG_TypeCreate(SYS_MSG_0, TYPE_TOUCHSCREEN , 0);
    hMailbox = SYS_MSG_MailboxOpen( iSysMsg, (SYS_MSG_RECEIVE_CALLBACK)&TouchMessageCallback );
    SYS_MSG_MailboxMsgAdd(hMailbox, hMsgType);
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
            if ( GFX_Status (sysObj.gfxObject0) == SYS_STATUS_READY )
                appData.state = APP_STATE_GFX_INIT;

            break;

        case APP_STATE_GFX_INIT:
            demoScheme = GFX_GOL_SchemeCreate();  // create alternative style scheme
            AlphaScheme = GFX_GOL_SchemeCreate();  // create alternative style scheme

            demoScheme->TextColor0 = BLUE;
            demoScheme->TextColor1 = RED;
            demoScheme->pFont = (void*)&Gentium_16;
            demoScheme->fillStyle = GFX_FILL_STYLE_COLOR;

            AlphaScheme->Color0 = GFX_RGBConvert(0x4C, 0x8E, 0xFF);
            AlphaScheme->Color1 = GFX_RGBConvert(255, 102, 0);
            AlphaScheme->EmbossDkColor = GFX_RGBConvert(0x1E, 0x00, 0xE5);
            AlphaScheme->EmbossLtColor = GFX_RGBConvert(0xA9, 0xDB, 0xEF);
            AlphaScheme->ColorDisabled = GFX_RGBConvert(0xD4, 0xE1, 0xF7);
            AlphaScheme->TextColor1 = BLUE;
            AlphaScheme->TextColor0 = GFX_RGBConvert(255, 102, 0);
            AlphaScheme->TextColorDisabled = GFX_RGBConvert(0xB8, 0xB9, 0xBC);
            AlphaScheme->AlphaValue = 50;
            AlphaScheme->pFont = (void*)&Gentium_16;
            AlphaScheme->fillStyle = GFX_FILL_STYLE_ALPHA_COLOR;
            AlphaScheme->CommonBkType = GFX_BACKGROUND_IMAGE;
            AlphaScheme->pCommonBkImage = (GFX_RESOURCE_HDR*)&harmony;

            GFX_GOL_MessageCallbackSet(GFX_INDEX_0, &GFX_GOL_MessageCallback);
            GFX_GOL_DrawCallbackSet(GFX_INDEX_0, &GFX_GOL_DrawCallback);

            CreateMainMenu();
            appData.state = APP_STATE_DONE;
            break;

        default:
            break;
   }
}
}

/////////////////////////////////////////////////////////////////////////////
// Function: uint16_t CreateBackButton()
// Input: none
// Output: Returns 0 if the screen is created and 0 if not.
// Overview: Creates the four icons to launch each of the application
//           note demos.
/////////////////////////////////////////////////////////////////////////////
uint16_t CreateBackButton()
{
    GFX_GOL_BUTTON *pObj;

    pObj = GFX_GOL_ButtonCreate (
            GFX_INDEX_0,
                        ID_BACK,     // object?s ID
                        20, 10,
                        70, 35, 0,
                        GFX_GOL_BUTTON_DRAW_STATE,
                        NULL,
                        NULL,
                        MainMenuStr,
                        GFX_ALIGN_HCENTER,
                        demoScheme
                     );

    if(pObj == NULL)
    {
        return (0);
    }
    return 1;

}

/////////////////////////////////////////////////////////////////////////////
// Function: WORD CreateMainMenu()
// Input: none
// Output: Returns 0 if the screen is created and 0 if not.
// Overview: Creates the four icons to launch each of the application
//           note demos.
/////////////////////////////////////////////////////////////////////////////
uint16_t CreateMainMenu()
{
    int i;
    short left = 0, top = 0, right = 0, bottom = 0;

    GFX_DoubleBufferEnable(GFX_INDEX_0);

            GFX_GOL_ButtonCreate (
                                GFX_INDEX_0,

                        ID_SCROLL1,     // object?s ID
                        0, 26,
                        25, GFX_MaxYGet(GFX_INDEX_0)-26,
                        0,
                        GFX_GOL_BUTTON_DRAW_STATE,
                        NULL,  // use this bitmap
                        NULL,
                        Scroll[0],      // use this text
                        GFX_ALIGN_HCENTER,
                        demoScheme);      // use alternative style scheme
            GFX_GOL_ButtonCreate (
                                GFX_INDEX_0,

                        ID_SCROLL2,     // object?s ID
                        0, 0,
                        GFX_MaxXGet(GFX_INDEX_0), 25,
                        0,
                        GFX_GOL_BUTTON_DRAW_STATE,
                        NULL,  // use this bitmap
                        NULL,
                        Scroll[1],      // use this text
                        GFX_ALIGN_HCENTER,
                        demoScheme);      // use alternative style scheme
            GFX_GOL_ButtonCreate (
                                    GFX_INDEX_0,

                        ID_SCROLL3,     // object?s ID
                        GFX_MaxXGet(GFX_INDEX_0)-25, 26,
                        GFX_MaxXGet(GFX_INDEX_0), GFX_MaxYGet(GFX_INDEX_0)-26,
                        0,              // radius if rounded edge
                        // draw the object after creation with
                        // text drawn at the bottom and no panel
                        GFX_GOL_BUTTON_DRAW_STATE,
                        NULL,  // use this bitmap
                        NULL,
                        Scroll[2],      // use this text
                        GFX_ALIGN_HCENTER,
                        demoScheme);      // use alternative style scheme
             GFX_GOL_ButtonCreate(
                                    GFX_INDEX_0,

                        ID_SCROLL4,     // object?s ID
                        0, GFX_MaxYGet(GFX_INDEX_0)-25,
                        GFX_MaxXGet(GFX_INDEX_0), GFX_MaxYGet(GFX_INDEX_0),
                        0,
                        GFX_GOL_BUTTON_DRAW_STATE,
                        NULL,  // use this bitmap
                        NULL,
                        Scroll[3],      // use this text
                        GFX_ALIGN_HCENTER,
                        demoScheme);      // use alternative style scheme

    // loop to create the four icons
    for (i=0; i<4; i++)
    {
        switch (i)
        {
            case 0:
                top    = IconTop(0);
                bottom = IconBottom(0);
                left   = IconLeft(0);
                right  = IconRight(0);
                break;
            case 1:
                top    = IconTop(0);
                bottom = IconBottom(0);
                left   = IconLeft(1);
                right  = IconRight(1);
                break;
            case 2:
                top    = IconTop(1);
                bottom = IconBottom(1);
                left   = IconLeft(0);
                right  = IconRight(0);
                break;
            case 3:
                top    = IconTop(1);
                bottom = IconBottom(1);
                left   = IconLeft(1);
                right  = IconRight(1);
                break;
            default: break;
        }

        if (!GFX_GOL_ButtonCreate (
                            GFX_INDEX_0,

                        ID_ICON1+i,     // object?s ID
                        left, top,
                        right, bottom,
                        0,              // radius if rounded edge
                        // draw the object after creation with
                        // text drawn at the bottom and no panel
                        GFX_GOL_BUTTON_DRAW_STATE|GFX_GOL_BUTTON_NOPANEL_STATE,
                        (void*) &MCHPFolderFile_8bpp_72x72,  // use this bitmap
                        (void*) &MCHPFolderEmpty_8bpp_72x72,
                        Labels[i],      // use this text
                        GFX_ALIGN_HCENTER|GFX_ALIGN_BOTTOM,
                        demoScheme      // use alternative style scheme
                        )
            )
            return 0;
    }
    return 1;

}

/////////////////////////////////////////////////////////////////////////////
// Function: WORD GOLMsgCallback(WORD objMsg, OBJ_HEADER* pObj, GOL_MSG* pMsg)
// Input: objMsg - translated message for the object,
//        pObj - pointer to the object,
//        pMsg - pointer to the non-translated, raw GOL message
// Output: if the function returns non-zero the message will be processed by default
// Overview: it's a user defined function. GOLMsg() function calls it each
//           time the valid message for the object received
/////////////////////////////////////////////////////////////////////////////
bool GFX_GOL_MessageCallback(GFX_GOL_TRANSLATED_ACTION objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    uint16_t objID;

    // check first if we need to exit the selected demo (if applicable)
    if ((objMsg == GFX_GOL_BUTTON_ACTION_RELEASED) && (pObj->ID == ID_BACK))
    {
        // check if the button is indeed pressed
        if (GFX_GOL_ObjectStateGet(pObj, GFX_GOL_BUTTON_PRESSED_STATE))
        {
            screenState = CREATE_MAINMENU;
            return 1;
        }
    }
    // process messages for demo screens
    switch(screenState)
    {
        case DISPLAY_MAINMENU:

            // In this portion, all management of the Button states are
            // done here. This portion will always return 0 to inhibit
            // the button default message processing to take place.

            objID = GFX_GOL_ObjectIDGet(pObj);
            if ((objID == ID_ICON1) || (objID == ID_ICON2) ||
                (objID == ID_ICON3) || (objID == ID_ICON4))
            {
                if(objMsg == GFX_GOL_BUTTON_ACTION_PRESSED)
                {
                    // check if button is pressed and show pressed icon
                    GFX_GOL_ObjectStateSet(pObj, GFX_GOL_BUTTON_PRESSED_STATE);
                }
                else if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
                {
                    // check if button is released and show release icon
                    GFX_GOL_ObjectStateClear(pObj, GFX_GOL_BUTTON_PRESSED_STATE);
                    if (objID == ID_ICON1)
                        {
                         while(GFX_DoubleBufferDisable(GFX_INDEX_0) == GFX_STATUS_FAILURE);
                         PIPDemo();
                         screenState = CREATE_MAINMENU;
                         }
                        else if (objID == ID_ICON2)
                        {
                         while(GFX_DoubleBufferDisable(GFX_INDEX_0) == GFX_STATUS_FAILURE);
                         SpeedDemo();
                         screenState = CREATE_MAINMENU;
                        }

                    else if (objID == ID_ICON3)
                        {
                        screenState = CREATE_ALPHABLEND;
                        }
                   else if (objID == ID_ICON4)
                        {
                        while(GFX_DoubleBufferDisable(GFX_INDEX_0) == GFX_STATUS_FAILURE);
                        PagingDemo();
                        screenState = CREATE_MAINMENU;
                        }
                    else
                        // this should not happen
                        screenState = DISPLAY_MAINMENU;
                }
                else if(objMsg == GFX_GOL_BUTTON_ACTION_STILLPRESSED)
                {
                    // do not do anything since it is already pressed
                    return 0;
                }
                else
                {
                    // check if button is released and show release icon
                    GFX_GOL_ObjectStateClear(pObj, GFX_GOL_BUTTON_PRESSED_STATE);              // reset pressed
                }

                GFX_GOL_ObjectStateSet(pObj, GFX_GOL_BUTTON_DRAW_STATE);
                return 0;
            }
            if ((objID == ID_SCROLL1) || (objID == ID_SCROLL2) ||
                (objID == ID_SCROLL3) || (objID == ID_SCROLL4))
            {
                if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
                {
                 switch(objID) //Up = 1, Down = 2, Left = 3, Right = 4
                 {
                    case ID_SCROLL1:
                    ScrollScreen(3,2);
                    break;
                    case ID_SCROLL2:
                    ScrollScreen(1,2);
                    break;
                    case ID_SCROLL3:
                    ScrollScreen(4,2);
                    break;
                    case ID_SCROLL4:
                    ScrollScreen(2,2);
                    break;
                 }

                }
            }
            break;

        case DISPLAY_ALPHABLEND:
            return (MsgAlphaBlendScreenCallback(objMsg, pObj, pMsg));

        default:
            break;
    }

    return (1);
}

/////////////////////////////////////////////////////////////////////////////
// Function: bool GFX_GOL_DrawCallback()
// Output: if the function returns non-zero the draw control will be passed to GOL
// Overview: it's a user defined function. GOLDraw() function calls it each
//           time when GOL objects drawing is completed. User drawing should be done here.
//           GOL will not change color, line type and clipping region settings while
//           this function returns zero.
/////////////////////////////////////////////////////////////////////////////
bool GFX_GOL_DrawCallback(void)
{

   switch(screenState)
    {
        case CREATE_MAINMENU:

            GFX_GOL_ObjectListFree(GFX_INDEX_0);

            GFX_ColorSet(GFX_INDEX_0, WHITE);
            while(GFX_ScreenClear(GFX_INDEX_0) == GFX_STATUS_FAILURE);

            CreateMainMenu();

            screenState = DISPLAY_MAINMENU;       // switch to next state
            break;

        case DISPLAY_MAINMENU:
            break;

        case CREATE_ALPHABLEND:
            GFX_GOL_ObjectListFree(GFX_INDEX_0);

            CreateAlphaBlendScreen();
            CreateBackButton();

            screenState = DISPLAY_ALPHABLEND;         // switch to next state
            break;

        case DISPLAY_ALPHABLEND:
            break;

        default:
            break;
    }
    return (1);
}

/////////////////////////////////////////////////////////////////////////////
// Function: void TickInit(void)
// Input: none
// Output: none
// Overview: Initilizes the tick timer.
/////////////////////////////////////////////////////////////////////////////

/* */
void TickInit(void)
{
    PLIB_TMR_PrescaleSelect(TMR_ID_3, 3);
    PLIB_TMR_Period16BitSet(TMR_ID_3, 50);
    SYS_INT_VectorPrioritySet(INT_VECTOR_T3, INT_PRIORITY_LEVEL5);
    SYS_INT_SourceEnable(INT_SOURCE_TIMER_3);
    PLIB_TMR_Start(TMR_ID_3);

}

void PIPDemo(void)
{
    int x, y;

    GFX_XCHAR Title1[] = {'P', 'I', 'P', ' ', 'D', 'e', 'm', 'o', 0};
    GFX_XCHAR Title2[] = {'P', 'a', 'g', 'e', 0};
    GFX_XCHAR Title3[] = {'S', 't', 'a', 'r', 't', 0};

    while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, 0) == GFX_STATUS_FAILURE);
    while (GFX_PageSet(GFX_INDEX_0, VISUAL_PAGE, 0) == GFX_STATUS_FAILURE);
    GFX_ColorSet(GFX_INDEX_0, BLACK);

    while (GFX_ScreenClear(GFX_INDEX_0) == GFX_STATUS_FAILURE);

    while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, PIP_BUFFER) == GFX_STATUS_FAILURE);

    GFX_ColorSet(GFX_INDEX_0, BLACK);
    while (GFX_ScreenClear(GFX_INDEX_0) == GFX_STATUS_FAILURE);

    while (GFX_ImageDraw(GFX_INDEX_0, 0, 0, (void*) &mouse) == GFX_STATUS_FAILURE); //Draw Mouse in cursor area
    while (GFX_ImageDraw(GFX_INDEX_0, 15, 0, (void*) &Pacman) == GFX_STATUS_FAILURE); //Draw Pacman in cursor area

    while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, 0) == GFX_STATUS_FAILURE);

    GFX_FontSet(GFX_INDEX_0, (void *) &Monospaced_plain_36);
    GFX_ColorSet(GFX_INDEX_0, WHITE);

    while (GFX_TextStringDraw(GFX_INDEX_0, 0, 40, (GFX_XCHAR*) Title1, 0) == GFX_STATUS_FAILURE);
    while (GFX_TextStringDraw(GFX_INDEX_0, 0, 90, (GFX_XCHAR*) Title2, 0) == GFX_STATUS_FAILURE);

    GFX_GradientColorSet(GFX_INDEX_0, WHITE, BLACK);
    GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_DOWN);
    while (GFX_BevelGradientDraw(GFX_INDEX_0, 200, 125, 300, 165, 5) == GFX_STATUS_FAILURE);
    GFX_ColorSet(GFX_INDEX_0, BLACK);
    while (GFX_TextStringDraw(GFX_INDEX_0, 195, 115, (GFX_XCHAR*) Title3, 0) == GFX_STATUS_FAILURE);

    while (GFX_Layer(GFX_INDEX_0, 0, SET_PAGE, PIP_BUFFER, 0) == GFX_STATUS_FAILURE);
    while (GFX_Layer(GFX_INDEX_0, 0, SET_SIZE, 15, 15) == GFX_STATUS_FAILURE);
    while (GFX_Layer(GFX_INDEX_0, 0, SET_LAYER_START, 0, 0) == GFX_STATUS_FAILURE);
    while (GFX_Layer(GFX_INDEX_0, 0, ENABLE, 0, 0) == GFX_STATUS_FAILURE);

    x = 20;
    y = 224;

    while (x < 280)
    {
        while (GFX_Layer(GFX_INDEX_0, 0, SET_PAGE_START, x, y) == GFX_STATUS_FAILURE);
        while (GFX_Layer(GFX_INDEX_0, 0, UPDATE, 0, 0) == GFX_STATUS_FAILURE);
        y--;
        APP_TMR_DelayMS(40);
        x += 5;
    }

    APP_TMR_DelayMS(50);

    GFX_GradientColorSet(GFX_INDEX_0, BLUE, BLACK);
    GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_DOWN);
    while (GFX_BevelGradientDraw(GFX_INDEX_0, 200, 125, 300, 165, 5) == GFX_STATUS_FAILURE);
    GFX_ColorSet(GFX_INDEX_0, WHITE);
    while (GFX_TextStringDraw(GFX_INDEX_0, 195, 115, (GFX_XCHAR*) Title3, 0) == GFX_STATUS_FAILURE);

    APP_TMR_DelayMS(100);
    while (GFX_Layer(GFX_INDEX_0, 0, DISABLE, 0, 0) == GFX_STATUS_FAILURE);
    APP_TMR_DelayMS(100);

    x = GFX_MaxXGet(GFX_INDEX_0) - 50;
    GFX_ColorSet(GFX_INDEX_0, BLACK);

    while (GFX_Layer(GFX_INDEX_0, 0, SET_SIZE, 45, 45) == GFX_STATUS_FAILURE);
    while (GFX_Layer(GFX_INDEX_0, 0, SET_LAYER_START, 15, 0) == GFX_STATUS_FAILURE);
    while (GFX_Layer(GFX_INDEX_0, 0, ENABLE, 0, 0) == GFX_STATUS_FAILURE);

    while (x > 20)
    {
        while (GFX_Layer(GFX_INDEX_0, 0, SET_PAGE_START, x, 32) == GFX_STATUS_FAILURE);
        while (GFX_Layer(GFX_INDEX_0, 0, SET_LAYER_START, 15, 0) == GFX_STATUS_FAILURE);
        while (GFX_Layer(GFX_INDEX_0, 0, UPDATE, 0, 0) == GFX_STATUS_FAILURE);
        APP_TMR_DelayMS(10);
        while (GFX_Layer(GFX_INDEX_0, 0, SET_PAGE_START, x - 5, 32) == GFX_STATUS_FAILURE);
        while (GFX_Layer(GFX_INDEX_0, 0, SET_LAYER_START, 60, 0) == GFX_STATUS_FAILURE);
        while (GFX_Layer(GFX_INDEX_0, 0, UPDATE, 0, 0) == GFX_STATUS_FAILURE);
        APP_TMR_DelayMS(10);
        x -= 11;
    }
    while (GFX_Layer(GFX_INDEX_0, 0, DISABLE, 0, 0) == GFX_STATUS_FAILURE);
}

void SpeedDemo(void)
{

    uint16_t counter = 0;
    float randl, randt, randr, randb, temp;

    while (counter++ < 150)
    {
        // draw random bars in the middle of the screen
        GFX_ColorSet(GFX_INDEX_0, rand() % 65536);

        randl = rand() % GFX_MaxXGet(GFX_INDEX_0);
        randr = rand() % GFX_MaxXGet(GFX_INDEX_0);

        if (randl > randr) {
            temp = randl;
            randl = randr;
            randr = temp;
        }

        randt = rand() % GFX_MaxYGet(GFX_INDEX_0);
        randb = rand() % GFX_MaxYGet(GFX_INDEX_0);

        if (randt > randb)
        {
            temp = randt;
            randt = randb;
            randb = temp;
        }

        while (GFX_RectangleFillDraw(GFX_INDEX_0, randl, randt, randr, randb) == GFX_STATUS_FAILURE);
    }

}

void PagingDemo(void) {

    int x;
    GFX_XCHAR Scroll[] = {'C', 'o', 'l', 'o', 'r', 's', ' ', 'C', 'h', 'a', 'n', 'g', 'e', ' ', 'w', ' ', 'T', 'e', 'm', 'p', 's', 0};
    GFX_XCHAR Cloud[] = {'C', 'l', 'o', 'u', 'd', 'y', 0};
    GFX_XCHAR Temper[] = {'T', 'e', 'm', 'p', 'e', 'r', 'a', 't', 'u', 'r', 'e', 0};
    GFX_XCHAR SetTemp[] = {'S', 'e', 't', ' ', 'T', 'e', 'm', 'p', 0};
    GFX_XCHAR Time[] = {'8', ':', '2', '0', ' ', 'P', 'M', 0};
    GFX_XCHAR Date[] = {'J', 'u', 'n', 'e', ' ', '1', '1', ',', ' ', '2', '0', '1', '2', 0};
    GFX_XCHAR Room[] = {'7', '4', 0};

    while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, PIP_BUFFER) == GFX_STATUS_FAILURE);
    GFX_GradientColorSet(GFX_INDEX_0, GFX_RGBConvert(55, 0, 0), BLACK);
    GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_DOWN);
    while (GFX_BarGradientDraw(GFX_INDEX_0, 0, 0, GFX_MaxXGet(GFX_INDEX_0), 55) == GFX_STATUS_FAILURE);

    GFX_ColorSet(GFX_INDEX_0, WHITE);
    GFX_FontSet(GFX_INDEX_0, (void *) &Monospaced_plain_36);
    while (GFX_TextStringDraw(GFX_INDEX_0, 0, 0, (GFX_XCHAR*) Scroll, 0) == GFX_STATUS_FAILURE);

    GFX_XCHAR Temp[] = {'7', '3', 0};

    for (x = 0; x < 2; x++) {

        while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, x) == GFX_STATUS_FAILURE);

        if (x == 0)
        {
            GFX_GradientColorSet(GFX_INDEX_0, BRIGHTRED, BLACK);
            while (GFX_BarGradientDraw(GFX_INDEX_0, 0, 0, GFX_MaxXGet(GFX_INDEX_0), GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);
        } else
        {
            GFX_GradientColorSet(GFX_INDEX_0, BRIGHTBLUE, BLACK);
            while (GFX_BarGradientDraw(GFX_INDEX_0, 0, 0, GFX_MaxXGet(GFX_INDEX_0), GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);
        }

        GFX_GradientColorSet(GFX_INDEX_0, WHITE, BLACK);
        while (GFX_BevelGradientDraw(GFX_INDEX_0, 340, 120, 370, 140, 10) == GFX_STATUS_FAILURE);
        while (GFX_BevelGradientDraw(GFX_INDEX_0, 340, 165, 370, 185, 10) == GFX_STATUS_FAILURE);
        GFX_ColorSet(GFX_INDEX_0, WHITE);
        GFX_FontSet(GFX_INDEX_0, (void *) &Gentium_16);
        while (GFX_TextStringDraw(GFX_INDEX_0, 50, 75, (GFX_XCHAR*) Cloud, 0) == GFX_STATUS_FAILURE);
        while (GFX_TextStringDraw(GFX_INDEX_0, 190, 75, (GFX_XCHAR*) Temper, 0) == GFX_STATUS_FAILURE);
        while (GFX_TextStringDraw(GFX_INDEX_0, 380, 75, (GFX_XCHAR*) SetTemp, 0) == GFX_STATUS_FAILURE);

        GFX_ColorSet(GFX_INDEX_0, WHITE);
        while (GFX_TextStringDraw(GFX_INDEX_0, GFX_MaxXGet(GFX_INDEX_0) - 80, 0, (GFX_XCHAR*) Time, 0) == GFX_STATUS_FAILURE);
        while (GFX_TextStringDraw(GFX_INDEX_0, 10, 0, (GFX_XCHAR*) Date, 0) == GFX_STATUS_FAILURE);

        GFX_FontSet(GFX_INDEX_0, (void *) &Monospaced_plain_36);
        while (GFX_TextStringDraw(GFX_INDEX_0, 345, 100, (GFX_XCHAR*) "+", 0) == GFX_STATUS_FAILURE);
        while (GFX_TextStringDraw(GFX_INDEX_0, 345, 145, (GFX_XCHAR*) "-", 0) == GFX_STATUS_FAILURE);

        GFX_FontSet(GFX_INDEX_0, (void *) &Monospaced_bold_Bold_72);

        if (x == 0) {
            while (GFX_TextStringDraw(GFX_INDEX_0, 210, 100, (GFX_XCHAR*) Temp, 0) == GFX_STATUS_FAILURE); //Room Temp
        }

        while (GFX_TextStringDraw(GFX_INDEX_0, 385, 100, (GFX_XCHAR*) Room, 0) == GFX_STATUS_FAILURE);

        while (GFX_ImagePartialDraw
                (GFX_INDEX_0,
                10,
                100,
                10 + clouds_WIDTH,
                100 + clouds_HEIGHT,
                clouds_WIDTH,
                clouds_HEIGHT,
                (GFX_RESOURCE_HDR *) &clouds
                ) == 0xff);

    }

    while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, 0) == GFX_STATUS_FAILURE);
    while (GFX_PageSet(GFX_INDEX_0, VISUAL_PAGE, 0) == GFX_STATUS_FAILURE);

    while (GFX_Layer(GFX_INDEX_0, 0, SET_PAGE, PIP_BUFFER, 0) == GFX_STATUS_FAILURE);
    while (GFX_Layer(GFX_INDEX_0, 0, SET_SIZE, GFX_MaxXGet(GFX_INDEX_0) - 10, 55) == GFX_STATUS_FAILURE);
    while (GFX_Layer(GFX_INDEX_0, 0, SET_PAGE_START, 0, GFX_MaxYGet(GFX_INDEX_0) - 56) == GFX_STATUS_FAILURE);
    while (GFX_Layer(GFX_INDEX_0, 0, SET_LAYER_START, 0, 0) == GFX_STATUS_FAILURE);

    APP_TMR_DelayMS(100);
    x = 0;

    while (x++ < 3)
    {
        while (GFX_Layer(GFX_INDEX_0, 0, DISABLE, 0, 0) == GFX_STATUS_FAILURE);
        APP_TMR_DelayMS(50);
        while (GFX_Layer(GFX_INDEX_0, 0, ENABLE, 0, 0) == GFX_STATUS_FAILURE);
        APP_TMR_DelayMS(50);
    }

    x = 0;

    while (x++ < 445)
    {
        while (GFX_Layer(GFX_INDEX_0, 0, SET_LAYER_START, x, 0) == GFX_STATUS_FAILURE);
        while (GFX_Layer(GFX_INDEX_0, 0, SET_SIZE, GFX_MaxXGet(GFX_INDEX_0) - 10 - x, 55) == GFX_STATUS_FAILURE);
        while (GFX_Layer(GFX_INDEX_0, 0, UPDATE, 0, 0) == GFX_STATUS_FAILURE);
        APP_TMR_DelayMS(2);
    }

    while (GFX_Layer(GFX_INDEX_0, 0, DISABLE, 0, 0) == GFX_STATUS_FAILURE);
    GFX_ColorSet(GFX_INDEX_0, WHITE);

    for (x = 0; x < 1; x++)
    {
        Temp[1] += 1;
        APP_TMR_DelayMS(100);
        GFX_GradientColorSet(GFX_INDEX_0, GFX_RGBConvert(148, 0, 0), BLACK);
        GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_GRADIENT_DOWN);
        while (GFX_BarGradientDraw(GFX_INDEX_0, 250, 116, 300, GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);
        GFX_ColorSet(GFX_INDEX_0, WHITE);
        GFX_FontSet(GFX_INDEX_0, (void *) &Gentium_16);
        while (GFX_TextStringDraw(GFX_INDEX_0, 190, 75, (GFX_XCHAR*) Temper, 0) == GFX_STATUS_FAILURE);
        GFX_FontSet(GFX_INDEX_0, (void *) &Monospaced_bold_Bold_72);
        while (GFX_TextStringDraw(GFX_INDEX_0, 210, 100, (GFX_XCHAR*) Temp, 0) == GFX_STATUS_FAILURE);
    }

    while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, 1) == GFX_STATUS_FAILURE);
    while (GFX_TextStringDraw(GFX_INDEX_0, 210, 100, (GFX_XCHAR*) Temp, 0) == GFX_STATUS_FAILURE);
    while (GFX_PageSet(GFX_INDEX_0, VISUAL_PAGE, 1) == GFX_STATUS_FAILURE);

    APP_TMR_DelayMS(200);
    while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, 0) == GFX_STATUS_FAILURE);
    while (GFX_PageSet(GFX_INDEX_0, VISUAL_PAGE, 0) == GFX_STATUS_FAILURE);
    GFX_ColorSet(GFX_INDEX_0, WHITE);
    while (GFX_ScreenClear(GFX_INDEX_0) == GFX_STATUS_FAILURE);

}

void ScrollScreen(uint8_t direction, uint16_t delay)
{

    scrollPage = 1;
    //Up = 1, Down = 2, Left = 3, Right = 4

    switch (direction)
    {

        case 1:
            scroll = 1;
            scrollLine = GFX_MaxYGet(GFX_INDEX_0);
            while (scrollLine > 0)
            {
                APP_TMR_DelayMS(delay);
                scrollLine--;
            }
            break;
        case 2:
            scroll = 2;
            scrollLine = 0;
            while (scrollLine < GFX_MaxYGet(GFX_INDEX_0))
            {
                APP_TMR_DelayMS(delay);
                scrollLine++;
            }
            break;
        case 3:
            scroll = 3;
            scrollLine = GFX_MaxXGet(GFX_INDEX_0);
            while (scrollLine > 1)
            {
                APP_TMR_DelayMS(delay);
                scrollLine--;
            }
            break;
        case 4:
            scroll = 4;
            scrollLine = 1;
            while (scrollLine < (GFX_MaxXGet(GFX_INDEX_0)))
            {
                APP_TMR_DelayMS(delay);
                scrollLine++;
            }
            break;

    }

    scroll = 0;
}

void TouchMessageCallback(SYS_MSG_OBJECT *pMsg)
{
    static GFX_GOL_MESSAGE gMsg;

    gMsg.type = pMsg->nMessageTypeID;
    gMsg.uiEvent = pMsg->param0;
    gMsg.param1 = pMsg->param1;
    gMsg.param2 = pMsg->param2;

    GFX_GOL_ObjectMessage(GFX_INDEX_0, &gMsg);
}

void APP_TMR_DelayMS ( unsigned int delayMs )
{
    if(delayMs)
    {
        uint32_t sysClk = SYS_CLK_FREQ;
        uint32_t t0;
        #if   defined (__C32__)
        t0 = _CP0_GET_COUNT();
        while (_CP0_GET_COUNT() - t0 < (sysClk/2000)*delayMs);
        #elif defined (__C30__)
        t0 = ReadTimer23();
        while (ReadTimer23() -  t0 < (sysClk/2000)*mSec);
        #else
        #error "Neither __C32__ nor __C30__ is defined!"
        #endif
    }
}