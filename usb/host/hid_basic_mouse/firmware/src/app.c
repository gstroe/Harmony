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
#include "gfx/gfx_gol_surface.h"

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
// Section: MACROS
// *****************************************************************************
// *****************************************************************************
#define MIN(x,y)                ((x > y)? y: x)
#define ID_SURFACE1              10
// *****************************************************************************
// *****************************************************************************
// Section: Global Variable Definitions
// *****************************************************************************
// *****************************************************************************
static GFX_INDEX            gfxIndex=0;
static GFX_GOL_OBJ_SCHEME * surfaceScheme; // style scheme the surface
static GFX_GOL_SURFACE *    pS1;

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Routines
// *****************************************************************************

void InitializeSchemes();
void APP_PrimitiveDraw ( void );
GFX_STATUS APP_PrimitiveSurface1 (void);
bool APP_DrawCallback ();
bool APP_MessageCallback (
                              GFX_GOL_TRANSLATED_ACTION translatedMsg,
                              GFX_GOL_OBJ_HEADER *pObj,
                              GFX_GOL_MESSAGE * pMsg);

#define GFX_SCHEMEDEFAULT GOLSchemeDefault

extern const GFX_GOL_OBJ_SCHEME GFX_SCHEMEDEFAULT;

static uint16_t appStringX = 0;
static uint16_t appStringY = 0;
static uint16_t width = 0;
static uint16_t height = 0;

static uint16_t x_pointer = 0;
static uint16_t y_pointer = 0;
static uint16_t width_pointer = 2;
static uint16_t height_pointer = 2;

GFX_GOL_OBJ_SCHEME *APP_SchemeCreate(void)
{
    GFX_GOL_OBJ_SCHEME  *pTemp;

    pTemp = (GFX_GOL_OBJ_SCHEME *)GFX_malloc(sizeof(GFX_GOL_OBJ_SCHEME));

    if(pTemp != NULL)
    {
        memcpy(pTemp, &GFX_SCHEMEDEFAULT, sizeof(GFX_GOL_OBJ_SCHEME));
    }

    return (pTemp);
}

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************
 * USB HOST Layer Events - Host Event Handler
 *******************************************************/

USB_HOST_EVENT_RESPONSE APP_USBHostEventHandler (USB_HOST_EVENT event, void * eventData, uintptr_t context)
{
    switch(event)
    {
        case USB_HOST_EVENT_DEVICE_UNSUPPORTED:
            break;
        default:
            break;
    }
    return USB_HOST_EVENT_RESPONSE_NONE;
}

/*******************************************************
 * USB HOST HID Layer Events - Application Event Handler
 *******************************************************/

void APP_USBHostHIDMouseEventHandler(USB_HOST_HID_MOUSE_HANDLE handle, 
        USB_HOST_HID_MOUSE_EVENT event, void * pData)
{
    uint8_t loop = 0;
    
    switch ( event)
    {
        case USB_HOST_HID_MOUSE_EVENT_ATTACH:
            appData.handle = handle;
            appData.state =  APP_STATE_DEVICE_ATTACHED;
            break;

        case USB_HOST_HID_MOUSE_EVENT_DETACH:
            appData.handle = handle;
            appData.state = APP_STATE_DEVICE_DETACHED;
            break;

        case USB_HOST_HID_MOUSE_EVENT_REPORT_RECEIVED:
            appData.handle = handle;
            appData.state = APP_STATE_READ_HID;
            /* Mouse Data from device */
            memcpy(&appData.data, pData, sizeof(appData.data));

            for(loop = 0; loop < USB_HOST_HID_MOUSE_BUTTONS_NUMBER; loop ++)
            {
                if((appData.data.buttonState[loop]) &&
                        (USB_HID_USAGE_ID_BUTTON1 == appData.data.buttonID[loop]))
                {
                    /* BUTTON1 pressed */
                    BSP_LEDToggle( APP_USB_LED_1 );
                }
                if((appData.data.buttonState[loop]) &&
                        (USB_HID_USAGE_ID_BUTTON2 == appData.data.buttonID[loop]))
                {
                    /* BUTTON2 pressed */
                    BSP_LEDToggle( APP_USB_LED_2 );
                }
                if((appData.data.buttonState[loop]) &&
                        (USB_HID_USAGE_ID_BUTTON3 == appData.data.buttonID[loop]))
                {
                    /* BUTTON3 pressed */
                    BSP_LEDToggle( APP_USB_LED_3 );
                }
                if((appData.data.buttonState[loop]) &&
                        (USB_HID_USAGE_ID_BUTTON4 == appData.data.buttonID[loop]))
                {
                    /* BUTTON4 pressed */
                    BSP_LEDToggle( APP_USB_LED_4 );
                }
                if((appData.data.buttonState[loop]) &&
                        (USB_HID_USAGE_ID_BUTTON5 == appData.data.buttonID[loop]))
                {
                    /* BUTTON5 pressed */
                    BSP_LEDToggle( APP_USB_LED_5 );
                }
            }
            

        default:
            break;
    }
    return;
}


// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary local functions.
*/
void InitializeSchemes()
{
    // create the alternate schemes
    surfaceScheme = APP_SchemeCreate(); // alternative scheme for the navigate buttons

    /* for Truly display */
    surfaceScheme->Color0 = GFX_RGBConvert(0x4C, 0x8E, 0xFF);
    surfaceScheme->Color1 = GFX_RGBConvert(255, 102, 0);
    surfaceScheme->EmbossDkColor = BLACK;
    surfaceScheme->EmbossLtColor = BLACK;
    surfaceScheme->ColorDisabled = GFX_RGBConvert(0xD4, 0xE1, 0xF7);
    surfaceScheme->TextColor1 = BRIGHTBLUE;
    surfaceScheme->TextColor0 = GFX_RGBConvert(255, 102, 0);
    surfaceScheme->TextColorDisabled = GFX_RGBConvert(0xB8, 0xB9, 0xBC);
    surfaceScheme->CommonBkColor = BLACK;
}

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
    memset(&appData, 0, sizeof(appData));
    appData.state = APP_STATE_INIT;
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
        }

        /* TODO: implement your application state machine.*/
        case APP_STATE_GFX_INIT:

            InitializeSchemes();

            pS1 = GFX_GOL_SurfaceCreate(
                GFX_INDEX_0,
                ID_SURFACE1, // ID
                0,
                0,
                GFX_MaxXGet(gfxIndex),
                GFX_MaxYGet(gfxIndex), // dimension
                GFX_GOL_SURFACE_DRAW_STATE, // will be dislayed after creation
                APP_PrimitiveSurface1,
                (GFX_RESOURCE_HDR *) NULL, // icon
                surfaceScheme
             ); // default GOL scheme

            GFX_GOL_MessageCallbackSet(GFX_INDEX_0, &APP_MessageCallback);
            GFX_GOL_DrawCallbackSet(GFX_INDEX_0, &APP_DrawCallback);

            /* set app state done - surface object callback takes over */
            appData.state = APP_STATE_GFX_DONE;

            break;

        case APP_STATE_GFX_DONE:
            USB_HOST_EventHandlerSet(APP_USBHostEventHandler, 0);
            USB_HOST_HID_MOUSE_EventHandlerSet(APP_USBHostHIDMouseEventHandler);
            
			USB_HOST_BusEnable(0);
			appData.state = APP_STATE_WAIT_FOR_HOST_ENABLE;
            break;
			
		case APP_STATE_WAIT_FOR_HOST_ENABLE:
            /* Check if the host operation has been enabled */
            if(USB_HOST_BusIsEnabled(0))
            {
                /* This means host operation is enabled. We can
                 * move on to the next state */
				appData.state = APP_STATE_WAIT_FOR_DEVICE_ATTACH;

                /* Set the color to white */
                GFX_ColorSet(gfxIndex, WHITE);
                /* Get the width and height */
                width = GFX_TextStringWidthGet((GFX_XCHAR*)"Connect Mouse",
                                                    (GFX_RESOURCE_HDR *) &Font25);
                height = GFX_TextStringHeightGet((GFX_RESOURCE_HDR *) &Font25);
                if(GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR *) &Font25) == GFX_STATUS_FAILURE)
                {
                    appData.state = APP_STATE_ERROR;
                }
                appStringX = ( GFX_MaxXGet(gfxIndex) - width) >> 1;
                appStringY =  ( GFX_MaxYGet(gfxIndex) - height) >> 1;

                GFX_TextStringBoxDraw(
                                        GFX_INDEX_0,
                                        appStringX,
                                        appStringY,
                                        width,
                                        height,
                                        (GFX_XCHAR*)"Connect Mouse",
                                        0,
                                        GFX_ALIGN_LEFT);
            }

        case APP_STATE_WAIT_FOR_DEVICE_ATTACH:

            /* Wait for device attach. The state machine will move
             * to the next state when the attach event
             * is received.  */

            break;

        case APP_STATE_DEVICE_ATTACHED:
            
			appData.state = APP_STATE_READ_HID;
            GFX_ColorSet(gfxIndex, RED);
            GFX_FillStyleSet(gfxIndex, GFX_FILL_STYLE_COLOR);
            /* Remove "Connect Mouse" string */
            GFX_RectangleFillDraw(
                                GFX_INDEX_0,
                                appStringX,
                                appStringY,
                                width + appStringX,
                                height + appStringY);

            /* Add mouse indication */
            GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
            GFX_ColorSet(gfxIndex, WHITE);
            x_pointer = appStringX;
            y_pointer = appStringY;
            GFX_RectangleDraw(
                                GFX_INDEX_0,
                                x_pointer,
                                y_pointer,
                                x_pointer + width_pointer,
                                y_pointer + height_pointer);
            break;

        case APP_STATE_READ_HID:
            
            if((appData.data.xMovement != 0) || (appData.data.yMovement != 0)
                    || (appData.data.zMovement != 0))
            {
                /* Remove mouse indication */
                GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
                GFX_ColorSet(gfxIndex, RED);
                GFX_RectangleDraw(
                                GFX_INDEX_0,
                                x_pointer,
                                y_pointer,
                                x_pointer + width_pointer,
                                y_pointer + height_pointer);

                uint16_t x_pointer_temp = x_pointer;
                uint16_t y_pointer_temp = y_pointer;

                if(appData.data.xMovement != 0)
                {
                    x_pointer_temp = (uint16_t)((int16_t)x_pointer +
                            (int16_t)(0x0000 | (int16_t)appData.data.xMovement));
                }
                if(appData.data.yMovement != 0)
                {
                    y_pointer_temp = (uint16_t)((int16_t)y_pointer +
                            (int16_t)(0x0000 | (int16_t)appData.data.yMovement));
                }
                if(((x_pointer_temp + width_pointer + 2)> GFX_MaxXGet(gfxIndex)) ||
                        ((y_pointer_temp + height_pointer + 2)> GFX_MaxYGet(gfxIndex)))
                {
                    /* Do NOT display mouse */
                }

                else
                {
                    /* Update the latest position */
                    /* Update with the latest co ordinates */
                    x_pointer = x_pointer_temp;
                    y_pointer = y_pointer_temp;
                    
                    GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
                    GFX_ColorSet(gfxIndex, WHITE);
                    GFX_RectangleDraw(
                                    GFX_INDEX_0,
                                    x_pointer,
                                    y_pointer,
                                    x_pointer + width_pointer,
                                    y_pointer + height_pointer);
                }
            }
            /* Clear the app data */
            memset(&appData.data, 0, (size_t)sizeof(appData.data));
            break;

        case APP_STATE_DEVICE_DETACHED:

            BSP_LEDOff( APP_USB_LED_1 );
            BSP_LEDOff( APP_USB_LED_2 );
            BSP_LEDOff( APP_USB_LED_3 );
            BSP_LEDOff( APP_USB_LED_4 );
            BSP_LEDOff( APP_USB_LED_5 );

            /* Remove mouse indication */
            GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THICK_SOLID);
            GFX_ColorSet(gfxIndex, RED);
            GFX_RectangleDraw(
                                GFX_INDEX_0,
                                x_pointer,
                                y_pointer,
                                x_pointer + width_pointer,
                                y_pointer + height_pointer);

            GFX_ColorSet(gfxIndex, WHITE);
            width = GFX_TextStringWidthGet((GFX_XCHAR*)"Connect Mouse",
                    (GFX_RESOURCE_HDR *) &Font25);
            height = GFX_TextStringHeightGet((GFX_RESOURCE_HDR *) &Font25);
            if(GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR *) &Font25) == GFX_STATUS_FAILURE)
            {
                appData.state = APP_STATE_ERROR;
            }
            /* Display "Connect Mouse "*/
            GFX_TextStringBoxDraw(
                                GFX_INDEX_0,
                                appStringX,
                                appStringY,
                                width,
                                height,
                                (GFX_XCHAR*)"Connect Mouse",
                                0,
                                GFX_ALIGN_LEFT);
            /* Reset it to 0 for next attach position*/
            x_pointer = appStringX;
            y_pointer = appStringY;
            
            
            /* The test was successful. Lets idle. */
            appData.state = APP_STATE_WAIT_FOR_DEVICE_ATTACH;
            break;

        case APP_STATE_ERROR:

            /* The application comes here when the demo
             * has failed. Provide LED indication .*/

            BSP_LEDOn( APP_USB_LED_1 );
            break;

        default:
            break;
    }

}

void APP_PrimitiveDraw ( void )
{
    GFX_ColorSet(gfxIndex, RED);
    while(GFX_ScreenClear(gfxIndex) == GFX_STATUS_FAILURE);
}


bool APP_MessageCallback(GFX_GOL_TRANSLATED_ACTION objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)
{
    return true;
}

/////////////////////////////////////////////////////////////////////////////
// Function: uint16_t GFX_GOL_DrawCallback()
// Output: if the function returns non-zero the draw control will be passed to GOL
// Overview: this function must be implemented by user. GFX_GOL_Draw() function calls it each
//           time when GOL objects drawing is completed. User drawing should be done here.
//           GOL will not change color, line type and clipping region settings while
//           this function returns zero.
/////////////////////////////////////////////////////////////////////////////

bool APP_DrawCallback()
{
    return true;
}

GFX_STATUS APP_PrimitiveSurface1 (void)
{
    APP_PrimitiveDraw();   
    return GFX_STATUS_SUCCESS;
}

/*******************************************************************************
 End of File
 */

