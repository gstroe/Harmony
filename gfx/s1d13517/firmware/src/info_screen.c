/*****************************************************************************
 * Microchip Graphics Library Demo Application
 * This program shows how to use the Graphics Objects Layer.
 *****************************************************************************
 * File Name:       info_screen.c
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
#include "gfx_schemes.h"
#include "gfx_strings.h"
#include "gfx_screens.h"
#include "gol_ids.h"
//#include "src/gfx_local.h"

#include "gfx/gfx_gol_button.h"

/*****************************************************************************
 * SECTION: Defines
 *****************************************************************************/
#define GFX_BlockUntilFinished(function)   while(function == GFX_STATUS_FAILURE)

/*****************************************************************************
 * void CreateInfo(void)
 *****************************************************************************/
void CreateInfo()
{
    static uint8_t timeThrough = 0;
    static uint8_t currentPage;

    GFX_ColorSet(GFX_INDEX_0, GFX_SchemeGetCurrentScheme()->Color0);

    if(timeThrough == 0)
    {

        currentPage = GFX_PageGet(GFX_INDEX_0, ACTIVE_PAGE);

        while (GFX_PageSet(GFX_INDEX_0,ACTIVE_PAGE, PIP_PAGE_BUFFER) == GFX_STATUS_FAILURE); //Draw Image to be shown fading in

        GFX_AlphaParamsSet(GFX_INDEX_0,BACKGROUND_BUFFER,0,0,BACKGROUND_BUFFER,0,0,PIP_PAGE_BUFFER,0,0);

        while(GFX_CopyPageWindow(GFX_INDEX_0,
                        GFX_MaxXGet(GFX_INDEX_0), GFX_MaxYGet(GFX_INDEX_0)) == GFX_STATUS_FAILURE);


	while(GFX_RectangleRoundFillDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2)+20,10 ,(GFX_MaxXGet(GFX_INDEX_0) - 10), 60,5) == GFX_STATUS_FAILURE);
	while(GFX_ImageDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2)+20, 10, (void *) &help_faq) == GFX_STATUS_FAILURE);
	while(GFX_RectangleRoundFillDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2) + 20,90 ,GFX_MaxXGet(GFX_INDEX_0) - 10, GFX_MaxYGet(GFX_INDEX_0)-10,5) == GFX_STATUS_FAILURE);
  
	GFX_AlphaParamsSet(GFX_INDEX_0,PIP_PAGE_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 5,
                            BACKGROUND_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 5,
                            PIP_PAGE_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 5);

	while(GFX_AlphaBlendWindow(GFX_INDEX_0,
				     (GFX_MaxXGet(GFX_INDEX_0))-((GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15),
				     60,
				     GFX_SchemeGetDefaultScheme()->AlphaValue) == GFX_STATUS_FAILURE);

	GFX_AlphaParamsSet(GFX_INDEX_0,PIP_PAGE_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 85,
                            BACKGROUND_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 85,
                            PIP_PAGE_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 85);

	while(GFX_AlphaBlendWindow(GFX_INDEX_0, 
				     (GFX_MaxXGet(GFX_INDEX_0))-((GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15),
				     GFX_MaxYGet(GFX_INDEX_0) - 90,
				     GFX_SchemeGetDefaultScheme()->AlphaValue) == GFX_STATUS_FAILURE);
				     		     				     
	GFX_ColorSet(GFX_INDEX_0,WHITE);
        GFX_FontSet(GFX_INDEX_0,(void *) &Gentium_16);

        GFX_BlockUntilFinished(GFX_TextStringDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2)+100,20,(GFX_XCHAR *)InfoStr,0));
        GFX_BlockUntilFinished(GFX_TextStringBoxDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2) + 90, 90, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 190, 290, (GFX_XCHAR *)InformationStr,0,GFX_ALIGN_LEFT));

        while (GFX_PageSet(GFX_INDEX_0, ACTIVE_PAGE, currentPage) == GFX_STATUS_FAILURE); //Draw Image to be shown fading in
        timeThrough = 1;
}	

	GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0, MAIN_SCREEN_ID_INFO_BUT),GFX_GOL_BUTTON_DRAW_STATE|GFX_GOL_BUTTON_DISABLED_STATE);
      	
}
