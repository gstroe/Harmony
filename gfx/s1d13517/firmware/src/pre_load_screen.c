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
 * Copyright © 2011 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).  
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED “AS IS” WITHOUT WARRANTY OF ANY
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
#include "gfx_strings.h"

#include "gfx_screens.h"
#include "gfx_schemes.h"
#include "gol_ids.h"
#include "timer_tick.h"
#include "gfx/jpeg_image.h"
/*****************************************************************************
 * SECTION: Local Prototypes
 *****************************************************************************/
void PreLoadDrawProgress(void);
/*****************************************************************************
 * SECTION: Defines
 *****************************************************************************/
#define PRE_LOAD_ANIMATION_RADIUS       (10)
#define PRE_LOAD_NUM_ANIMATION_CIRCLES  (5)
#define PRE_LOAD_AMINATION_CIRCLE_X_DELTA (GFX_MaxXGet(GFX_INDEX_0) / (PRE_LOAD_NUM_ANIMATION_CIRCLES + 1))

#define GFX_BlockUntilFinished(function)   while(function == GFX_STATUS_FAILURE)
/*****************************************************************************
 * SECTION: Variables
 *****************************************************************************/
PRE_LOAD_BACKGROUND preLoadBackGroundScheme = PRE_LOAD_BACKGROUND_SCHEME_BLUE;
PRE_LOAD_PAGE preLoadPage = PRE_LOAD_PAGE_1;

/*****************************************************************************
 * void CreatePreLoadScreen(void)
 *****************************************************************************/
void CreatePreLoadScreen(void)
{

    static uint8_t currentPage;

    currentPage = GFX_PageGet(GFX_INDEX_0, ACTIVE_PAGE);

    while (GFX_PageSet(GFX_INDEX_0,ACTIVE_PAGE, BACKGROUND_BUFFER) == GFX_STATUS_FAILURE); //Draw Image to be shown fading in

    GFX_ColorSet(GFX_INDEX_0, WHITE);
    while(GFX_ScreenClear(GFX_INDEX_0) == GFX_STATUS_FAILURE);

    if(preLoadBackGroundScheme == PRE_LOAD_BACKGROUND_SCHEME_RAINBOW)
    {
        GFX_GradientColorSet(GFX_INDEX_0,BRIGHTBLUE,BRIGHTRED);
        GFX_FillStyleSet(GFX_INDEX_0,GFX_FILL_STYLE_GRADIENT_RIGHT);

        //Rainbow Background
        GFX_GradientColorSet(GFX_INDEX_0,RED,DARKORANGE);
        while(GFX_BarGradientDraw(GFX_INDEX_0,0,0,GFX_MaxXGet(GFX_INDEX_0)>>2,GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);
        GFX_GradientColorSet(GFX_INDEX_0,DARKORANGE,GREEN);
        while(GFX_BarGradientDraw(GFX_INDEX_0,GFX_MaxXGet(GFX_INDEX_0)>>2,0,GFX_MaxXGet(GFX_INDEX_0)>>1,GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);
        GFX_GradientColorSet(GFX_INDEX_0,GREEN,BLUE);
        while(GFX_BarGradientDraw(GFX_INDEX_0,GFX_MaxXGet(GFX_INDEX_0)>>1,0,(GFX_MaxXGet(GFX_INDEX_0)*3)>>2,GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);
        GFX_GradientColorSet(GFX_INDEX_0,BLUE,GFX_RGBConvert(128,0,255));
        while(GFX_BarGradientDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0)*3)>>2,0,GFX_MaxXGet(GFX_INDEX_0),GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);

   }
    else
    {

      GFX_ImageDraw(GFX_INDEX_0, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 20,90, (GFX_RESOURCE_HDR*)&harmony_640x480 );
    }

    while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, currentPage) == GFX_STATUS_FAILURE);

    CreateMainScreen(1);
}
