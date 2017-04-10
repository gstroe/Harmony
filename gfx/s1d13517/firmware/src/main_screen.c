/*****************************************************************************
 * Microchip Graphics Library Demo Application
 * This program shows how to use the Graphics Objects Layer.
 *****************************************************************************
 * File Name:       main_screen.c
 * Dependencies:    See Includes Section
 * Processor:       PIC24, PIC32
 * Compiler:       	MPLAB C30 V3.00, MPLAB C32
 * Linker:          MPLAB LINK30, MPLAB LINK32
 * Company:         Microchip Technology Inc.
 *
 *
 * Copyright 2011 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).  
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 *****************************************************************************/

/*****************************************************************************
 * SECTION: Includes
 *****************************************************************************/
#include "app.h"
#include "gfx_schemes.h"
#include "gfx_strings.h"
#include "gfx_screens.h"
#include "gol_ids.h"
//#include "src/gfx_local.h"

#include "gfx/gfx_gol_button.h"

/*****************************************************************************
 * SECTION: Defines
 *****************************************************************************/
#define MAIN_SCREEN_BUTTON_HEIGHT       (GFX_MaxYGet(GFX_INDEX_0) / 10)
#define MAIN_SCREEN_BUTTON_RADIUS       0

#define GFX_BlockUntilFinished(function)   while(function == GFX_STATUS_FAILURE)

/*****************************************************************************
 * SECTION: Constants
 *****************************************************************************/
const GFX_XCHAR mainScreenStr[] = { 'H', 'o', 'm', 'e', '\0' };
/*****************************************************************************
 * void CreateMainScreen(void)
 *****************************************************************************/
void CreateMainScreen(uint8_t clock)
{

    GFX_AlphaParamsSet(GFX_INDEX_0,BACKGROUND_BUFFER,0,0,BACKGROUND_BUFFER,0,0,GFX_PageGet(GFX_INDEX_0,ACTIVE_PAGE),0,0);

    while(GFX_CopyPageWindow(GFX_INDEX_0,GFX_MaxXGet(GFX_INDEX_0), GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);

    GFX_GOL_OBJ_SCHEME *currentScheme;

    currentScheme = GFX_SchemeGetCurrentScheme();

    GFX_AlphaParamsSet(GFX_INDEX_0,BACKGROUND_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2), 0,
                           BACKGROUND_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2), 0,
                            GFX_PageGet(GFX_INDEX_0, ACTIVE_PAGE),(GFX_MaxXGet(GFX_INDEX_0) >> 2), 0);

    while(GFX_AlphaBlendWindow(GFX_INDEX_0,
				     GFX_MaxXGet(GFX_INDEX_0)-(GFX_MaxXGet(GFX_INDEX_0) >> 2),
	    	                     GFX_MaxYGet(GFX_INDEX_0),
				     50) == GFX_STATUS_FAILURE);

    GFX_ColorSet(GFX_INDEX_0, ORANGE);                       // Orange

    while(GFX_RectangleFillDraw(GFX_INDEX_0, (GFX_MaxXGet(GFX_INDEX_0) >> 2)-2, 0 , (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 2, GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);
 
    GFX_GOL_ObjectListFree(GFX_INDEX_0);                              // free memory for the objects in the previous linked list and start new list
 
    GFX_AlphaParamsSet(GFX_INDEX_0, BACKGROUND_BUFFER,0,0,BACKGROUND_BUFFER,0,0,GFX_PageGet(GFX_INDEX_0,ACTIVE_PAGE),0,0);

    while(GFX_CopyPageWindow(GFX_INDEX_0,
                        (GFX_MaxXGet(GFX_INDEX_0) >> 2) - 5, GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);

    GFX_GOL_ButtonCreate
    (
        GFX_INDEX_0,
        MAIN_SCREEN_ID_COMFORT_BUT,                         // button ID
        5,
        MAIN_SCREEN_BUTTON_HEIGHT << 1,
        (GFX_MaxXGet(GFX_INDEX_0) >> 2) - 5,
        MAIN_SCREEN_BUTTON_HEIGHT *3,                                // dimension
        MAIN_SCREEN_BUTTON_RADIUS,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)ComfortStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    );

//    GFX_GOL_ButtonCreate
//    (
//        GFX_INDEX_0,
//        MAIN_SCREEN_ID_SLIDE_SHOW_BUT,                         // button ID
//        5,
//        (MAIN_SCREEN_BUTTON_HEIGHT *3) + 10,
//        (GFX_MaxXGet(GFX_INDEX_0) >> 2) - 5,
//        (MAIN_SCREEN_BUTTON_HEIGHT << 2) + 10,                 // dimension
//        MAIN_SCREEN_BUTTON_RADIUS,
//        GFX_GOL_BUTTON_DRAW_STATE,                           // will be displayed after creation
//        NULL,           // use bitmap
//        NULL,
//        (GFX_XCHAR *)SlideShowStr,                   // "HOME", 	    // text
//        GFX_ALIGN_HCENTER,
//        currentScheme
//    );                                      // alternative GOL scheme

    GFX_GOL_ButtonCreate
    (
        GFX_INDEX_0,
        MAIN_SCREEN_ID_SPEED_BUT,                         // button ID
        5,
        (MAIN_SCREEN_BUTTON_HEIGHT *3) + 10,
        (GFX_MaxXGet(GFX_INDEX_0) >> 2) - 5,
        (MAIN_SCREEN_BUTTON_HEIGHT << 2) + 10,                 // dimension
        MAIN_SCREEN_BUTTON_RADIUS,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,              // draw a vertical capsule button
        NULL,
        NULL, // no bitmap
        (GFX_XCHAR *)SpeedStr,                    // "LO",       	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    );                          // use alternate scheme

    GFX_GOL_ButtonCreate
    (
        GFX_INDEX_0,
        MAIN_SCREEN_ID_GRADIENT_BUT,             // button ID
        5,
         (MAIN_SCREEN_BUTTON_HEIGHT << 2) + 20,
        (GFX_MaxXGet(GFX_INDEX_0) >> 2) - 5,
        (MAIN_SCREEN_BUTTON_HEIGHT * 5) + 20,                 // dimension
        MAIN_SCREEN_BUTTON_RADIUS,                // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                     // draw a vertical capsule button
        NULL,                         // no bitmap
        NULL,
        (GFX_XCHAR *)GradientStr,           // "ON",		// text
        GFX_ALIGN_HCENTER,
        currentScheme
    );                          // use alternate scheme

    GFX_GOL_ButtonCreate
    (
        GFX_INDEX_0,
        MAIN_SCREEN_ID_ALPHA_BUT,             // button ID
        5,
        (MAIN_SCREEN_BUTTON_HEIGHT * 5) + 30,
        (GFX_MaxXGet(GFX_INDEX_0) >> 2) - 5,
        (MAIN_SCREEN_BUTTON_HEIGHT * 6) +  30,      // dimension
        MAIN_SCREEN_BUTTON_RADIUS,                     // set radius
        GFX_GOL_BUTTON_DRAW_STATE, // draw a vertical capsule button
        NULL,  // no bitmap
        NULL,
        (GFX_XCHAR *)BlendingStr,                    // "OFF",      	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    );                      // use alternate scheme

    GFX_GOL_ButtonCreate
    (
        GFX_INDEX_0,
        MAIN_SCREEN_ID_INFO_BUT,             // button ID
        5,
        (MAIN_SCREEN_BUTTON_HEIGHT * 6) +  40,
        (GFX_MaxXGet(GFX_INDEX_0) >> 2) - 5,
        (MAIN_SCREEN_BUTTON_HEIGHT * 7) +  40,     // dimension
        MAIN_SCREEN_BUTTON_RADIUS,                     // set radius
        GFX_GOL_BUTTON_DRAW_STATE, // draw a vertical capsule button
        NULL,  // no bitmap
        NULL,
        (GFX_XCHAR *)InfoStr,                    // "OFF",      	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    );                      // use alternate scheme 

	GFX_ColorSet(GFX_INDEX_0, currentScheme->Color0);

	while(GFX_RectangleFillDraw(GFX_INDEX_0, (GFX_MaxXGet(GFX_INDEX_0) >> 2)+20,10 ,(GFX_MaxXGet(GFX_INDEX_0) - 10), 60)==GFX_STATUS_FAILURE);
	while(GFX_ImageDraw(GFX_INDEX_0, (GFX_MaxXGet(GFX_INDEX_0) >> 2)+20, 10, (void *) &file_browser)==GFX_STATUS_FAILURE);

        GFX_FontSet(GFX_INDEX_0,(void *) &Gentium_16);
        GFX_ColorSet(GFX_INDEX_0,BLACK);
        while(GFX_TextStringDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2) + 80,20,(GFX_XCHAR *)mainScreenStr,0) == GFX_STATUS_FAILURE);


       GFX_AlphaParamsSet(GFX_INDEX_0, GFX_PageGet(GFX_INDEX_0, ACTIVE_PAGE), (GFX_MaxXGet(GFX_INDEX_0) >> 2)+15, 5,
                                   BACKGROUND_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2)+15, 5,
                                   GFX_PageGet(GFX_INDEX_0, ACTIVE_PAGE), (GFX_MaxXGet(GFX_INDEX_0) >> 2)+15, 5);

	while(GFX_AlphaBlendWindow(GFX_INDEX_0,
				     (GFX_MaxXGet(GFX_INDEX_0)) - ((GFX_MaxXGet(GFX_INDEX_0) >> 2)+20),
				     60,
				     GFX_SchemeGetDefaultScheme()->AlphaValue) == GFX_STATUS_FAILURE);
				     		     				  
	

 
}
/*****************************************************************************
 * WORD MsgMainScreen(WORD objMsg, OBJ_HEADER *pObj)
 *****************************************************************************/
uint16_t MsgMainScreen(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)
{

    switch(GFX_GOL_ObjectIDGet(pObj))
    {   
        case MAIN_SCREEN_ID_COMFORT_BUT:
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                 screenState = CREATE_COMFORT;   // switch to next state
            }
            return (1);                 // process by default

         case MAIN_SCREEN_ID_SLIDE_SHOW_BUT:

            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {     
                screenState = CREATE_SCROLLING;
            }
            return (1);                 // process by default

        case MAIN_SCREEN_ID_ALPHA_BUT:
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                screenState = CREATE_ALPHABLEND;
            }

            return (1);                 // Do not process by default

        case MAIN_SCREEN_ID_INFO_BUT:    //Info
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
		screenState = CREATE_INFO;  
            }
            return (1);                 // Do not process by default

        case MAIN_SCREEN_ID_GRADIENT_BUT:    //Upload

            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
		screenState = CREATE_GRADIENT;
            }
            return (1);                 // Do not process by default

        case MAIN_SCREEN_ID_SPEED_BUT:   //Performance Screen
            if((objMsg == GFX_GOL_BUTTON_ACTION_RELEASED))
            {

            screenState = CREATE_SPEED;

            }
            return (1);                 // process by default

        default:
            return (1);                 // process by default
    }
}
