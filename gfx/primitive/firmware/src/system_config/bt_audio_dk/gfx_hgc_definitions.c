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

/*** Generated Asset References ***/
extern const GFX_RESOURCE_HDR flower16bit;
extern const GFX_RESOURCE_HDR Font25;

/*** Generated ASCII Text Labels ***/
/*** HGC Object Global ***/
HGC_OBJECTS hgcObj;
static HGC_STATES hgcState;

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
}


/******************************************************************************
  Function:
    void GFX_HGC_Setup ( void )

  Summary:
    This function sets up the GOL message callback and draw callbacks.  
 */
void GFX_HGC_Setup ( void )
{
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
            //Drive screen state machine
            GFX_HGC_DrawScreenTask();
            break;

        default:
            break;
    }
}

/******************************************************************************
  Function: 
    void GFX_HGC_DrawScreenTask( void )

  Remarks: 
    Task loop to drive the HGC generated screen state machine for HGC design
    that has primitives only
 */
void GFX_HGC_DrawScreenTask( void )
{
    switch (hgcObj.screenState)
    {
        case HGC_SCREEN_STATE_INIT:
            //Draw the primary screen as selected in the Composer
            GFX_HGC_SetScreenState(HGC_SCREEN_STATE_SETUP_SCREEN_Screen1);
            break;
        case HGC_SCREEN_STATE_SETUP_SCREEN_Screen1:
            GFX_HGC_SetupScreen(Screen1);

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
            GFX_HGC_SetupScreen(Screen2);

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
            GFX_HGC_SetupScreen(Screen3);

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
        default:
            break;
    }
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
			
            break;
        case Screen2:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
            break;
        case Screen3:
            GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00,0x00,0x00));
            GFX_ScreenClear(GFX_INDEX_0);
			
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
            GFX_HGC_DrawItem(Line1);
            GFX_HGC_DrawItem(Line2);
            GFX_HGC_DrawItem(Line3);
            GFX_HGC_DrawItem(Line4);
            GFX_HGC_DrawItem(Line5);
            GFX_HGC_DrawItem(Line6);
            GFX_HGC_DrawItem(Line7);
            GFX_HGC_DrawItem(Circle2);
            GFX_HGC_DrawItem(Circle4);
            GFX_HGC_DrawItem(Circle5);
            GFX_HGC_DrawItem(Circle6);
            GFX_HGC_DrawItem(Circle7);
            GFX_HGC_DrawItem(Circle8);
            GFX_HGC_DrawItem(Line8);
            GFX_HGC_DrawItem(Line9);
            GFX_HGC_DrawItem(Line10);
            GFX_HGC_DrawItem(Line11);
            GFX_HGC_DrawItem(Line12);
            GFX_HGC_DrawItem(Line13);
            break;
        case Screen2:
            GFX_HGC_DrawItem(Text1);
            GFX_HGC_DrawItem(Image1);
            break;
        case Screen3:
            GFX_HGC_DrawItem(Rectangle3);
            GFX_HGC_DrawItem(Rectangle2);
            GFX_HGC_DrawItem(Rectangle1);
            GFX_HGC_DrawItem(Rectangle4);
            GFX_HGC_DrawItem(Rectangle5);
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
		case Line13:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF5, 0xF9, 0xF5));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 133,  // p1x
						 2,  // p1y
						 87,  // p2x
						 172); // p2y
			break;
		}		
		case Line12:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF5, 0xF9, 0xF5));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 86,  // p1x
						 2,  // p1y
						 134,  // p2x
						 171); // p2y
			break;
		}		
		case Line11:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF5, 0xF9, 0xF5));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 182,  // p1x
						 2,  // p1y
						 34,  // p2x
						 170); // p2y
			break;
		}		
		case Line10:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF5, 0xF9, 0xF5));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 33,  // p1x
						 3,  // p1y
						 187,  // p2x
						 172); // p2y
			break;
		}		
		case Line9:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF5, 0xF9, 0xF5));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 156,  // p1x
						 4,  // p1y
						 60,  // p2x
						 170); // p2y
			break;
		}		
		case Line8:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF5, 0xF9, 0xF5));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 61,  // p1x
						 2,  // p1y
						 160,  // p2x
						 170); // p2y
			break;
		}		
		case Line7:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF5, 0xF9, 0xF5));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 110,  // p1x
						 0,  // p1y
						 110,  // p2x
						 171); // p2y
			break;
		}		
		case Line6:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 171,  // p1y
						 221,  // p2x
						 0); // p2y
			break;
		}		
		case Line5:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF8, 0xFC, 0xF8));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 0,  // p1y
						 221,  // p2x
						 171); // p2y
			break;
		}		
		case Line4:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xFF));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 218,  // p1x
						 3,  // p1y
						 218,  // p2x
						 174); // p2y
			break;
		}		
		case Line3:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF3, 0xEB, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 0,  // p1y
						 0,  // p2x
						 171); // p2y
			break;
		}		
		case Line2:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 0,  // p1x
						 0,  // p1y
						 219,  // p2x
						 0); // p2y
			break;
		}		
		case Line1:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0xFF, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_LineDraw(GFX_INDEX_0,
						 219,  // p1x
						 171,  // p1y
						 0,  // p2x
						 171); // p2y
			break;
		}		
		case Rectangle5:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xFC));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleDraw(GFX_INDEX_0,
							  19,  // p1x
							  8,  // p1y
							  195,  // p2x
							  165); // p2y
			
			break;
		}	
		case Rectangle4:
		{
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xFC));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleDraw(GFX_INDEX_0,
							  38,  // p1x
							  21,  // p1y
							  177,  // p2x
							  150); // p2y
			
			break;
		}	
		case Rectangle1:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  80,  // p1x
								  59,  // p1y
								  137,  // p2x
								  111); // p2y
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleDraw(GFX_INDEX_0,
							  80,  // p1x
							  59,  // p1y
							  137,  // p2x
							  111); // p2y
			
			break;
		}	
		case Rectangle2:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x92, 0x2E));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  66,  // p1x
								  49,  // p1y
								  150,  // p2x
								  121); // p2y
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x83, 0x31));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleDraw(GFX_INDEX_0,
							  66,  // p1x
							  49,  // p1y
							  150,  // p2x
							  121); // p2y
			
			break;
		}	
		case Rectangle3:
		{
			GFX_FillStyleSet(GFX_INDEX_0, GFX_FILL_STYLE_COLOR);
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0xFC));
			GFX_RectangleFillDraw(GFX_INDEX_0,
								  51,  // p1x
								  34,  // p1y
								  166,  // p2x
								  136); // p2y
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0x00, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_RectangleDraw(GFX_INDEX_0,
							  51,  // p1x
							  34,  // p1y
							  166,  // p2x
							  136); // p2y
			
			break;
		}	
		case Circle8:
		{
			GFX_ColorSet(GFX_INDEX_0,GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_CircleDraw(GFX_INDEX_0,
						   110, // p1x
						   87, // p1y
						   81); // radius
						   
			break;
		}	
		case Circle7:
		{
			GFX_ColorSet(GFX_INDEX_0,GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_CircleDraw(GFX_INDEX_0,
						   112, // p1x
						   88, // p1y
						   65); // radius
						   
			break;
		}	
		case Circle6:
		{
			GFX_ColorSet(GFX_INDEX_0,GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_CircleDraw(GFX_INDEX_0,
						   111, // p1x
						   89, // p1y
						   49); // radius
						   
			break;
		}	
		case Circle5:
		{
			GFX_ColorSet(GFX_INDEX_0,GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_CircleDraw(GFX_INDEX_0,
						   112, // p1x
						   90, // p1y
						   36); // radius
						   
			break;
		}	
		case Circle4:
		{
			GFX_ColorSet(GFX_INDEX_0,GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_CircleDraw(GFX_INDEX_0,
						   110, // p1x
						   89, // p1y
						   24); // radius
						   
			break;
		}	
		case Circle2:
		{
			GFX_ColorSet(GFX_INDEX_0,GFX_RGBConvert(0xFC, 0x00, 0x00));
			GFX_LineStyleSet(GFX_INDEX_0, GFX_LINE_STYLE_THIN_SOLID);
			GFX_CircleDraw(GFX_INDEX_0,
						   111, // p1x
						   89, // p1y
						   13); // radius
						   
			break;
		}	
		case Image1:
		{
			GFX_ImageDraw(GFX_INDEX_0,
			              0, // draw point x
						  0, // draw point y
						  (GFX_RESOURCE_HDR*)&flower16bit); // image
			break;
		}	
		case Text1:
		{
			GFX_XCHAR Text1_text[] = { 0x31, 0x36, 0x20, 0x42, 0x50, 0x50, 0x0 };
			
			GFX_ColorSet(GFX_INDEX_0, GFX_RGBConvert(0xF5, 0xF9, 0xF5)); // set color
			GFX_FontSet(GFX_INDEX_0, (GFX_RESOURCE_HDR*)&Font25); // set font
			GFX_TextStringDraw(GFX_INDEX_0,
			                   91, // draw point x
						       5, // draw point y
                               Text1_text, // string
							   0); // length
			break;
		}	
	default:
		return false; // process by default
    }

    return true;
}


