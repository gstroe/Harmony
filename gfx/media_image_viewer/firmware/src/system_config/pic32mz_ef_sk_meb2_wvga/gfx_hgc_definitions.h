/*******************************************************************************
  MPLAB Harmony Graphics Composer Generated Definitions Header

  File Name:
    gfx_hgc_definitions.h

  Summary:
    Build-time generated definitions header based on output by the MPLAB Harmony
    Graphics Composer.

  Description:
    Build-time generated definitions header based on output by the MPLAB Harmony
    Graphics Composer.

    Created with MPLAB Harmony Version 1.10
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


#ifndef _GFX_HGC_DEFINITIONS_H
#define _GFX_HGC_DEFINITIONS_H

#include "system_config.h"
#include "system_definitions.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END 

typedef enum
{
    HGC_STATE_INIT = 0,
    HGC_STATE_RUNNING
} HGC_STATES;

typedef enum
{
    HGC_SCREEN_STATE_INIT = 0,
    HGC_SCREEN_STATE_SETUP_SCREEN_MainMenu,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_MainMenu,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_MainMenu,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_MainMenu,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_MainMenu,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_MainMenu,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_MainMenu,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_MainMenu,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_SlideShowInstructions,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SlideShowInstructions,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SlideShowInstructions,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SlideShowInstructions,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SlideShowInstructions,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideShowInstructions,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_Settings,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Settings,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Settings,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Settings,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Settings,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Settings,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Settings,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_Settings,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_FeatureList,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_FeatureList,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_FeatureList,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_FeatureList,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_FeatureList,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_FeatureList,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_FeatureList,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_FeatureList,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_SlideScreen,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_SlideScreen,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_SlideScreen,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_SlideScreen,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_SlideScreen,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_SlideScreen,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_SlideScreen,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_SlideScreen,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_WaitForMediaConnect,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_WaitForMediaConnect,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_WaitForMediaConnect,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_WaitForMediaConnect,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_WaitForMediaConnect,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_WaitForMediaConnect,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_ReadingMedia,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_ReadingMedia,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_ReadingMedia,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_ReadingMedia,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_ReadingMedia,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_ReadingMedia,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_ReadingMedia,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_ReadingMedia,
	
} HGC_SCREEN_STATES;

/*** GFX GOL Scheme Definitions ***/

#define GFX_SCHEME_NAME_0                       "default"
#define GFX_SCHEME_ALPHA_0                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_0      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_0     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_0          0xFF
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_0        0xFF
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_0         0xFF

#define GFX_SCHEME_SECONDARY_COLOR_RED_0        0xF8
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_0      0xFC
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_0       0xF8

#define GFX_SCHEME_DISABLED_COLOR_RED_0         0xF8
#define GFX_SCHEME_DISABLED_COLOR_GREEN_0       0xFC
#define GFX_SCHEME_DISABLED_COLOR_BLUE_0        0xF8

#define GFX_SCHEME_BACKGROUND_COLOR_RED_0       0xF8
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_0     0xFC
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_0      0xF8

#define GFX_SCHEME_EMBOSS_SIZE_0                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_0     0xF8
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_0   0xFC
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_0    0xF8

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_0      0xF8
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_0    0xFC
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_0     0xF8

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_0     0xF8
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_0   0xFC
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_0    0xF8

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_0   0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_0 0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_0  0xFF

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_0    0xF8
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_0  0xFC
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_0   0xF8

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_0    0xF8
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_0  0xFC
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_0   0xF8

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_0    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_0  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_0   0xFF

#define GFX_SCHEME_FILL_STYLE_0                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_0           GFX_BACKGROUND_NONE

		

#define GFX_SCHEME_NAME_1                       "MetaDataTextTheme"
#define GFX_SCHEME_ALPHA_1                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_1      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_1     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_1          0xFF
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_1        0xFF
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_1         0xFF

#define GFX_SCHEME_SECONDARY_COLOR_RED_1        0x40
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_1      0x40
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_1       0x40

#define GFX_SCHEME_DISABLED_COLOR_RED_1         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_1       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_1        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_1       0x00
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_1     0x00
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_1      0x00

#define GFX_SCHEME_EMBOSS_SIZE_1                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_1     0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_1   0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_1    0xC0

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_1      0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_1    0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_1     0x40

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_1     0xF8
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_1   0xFC
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_1    0x00

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_1   0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_1 0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_1  0xFF

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_1    0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_1  0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_1   0x40

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_1    0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_1  0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_1   0x00

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_1    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_1  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_1   0xFF

#define GFX_SCHEME_FILL_STYLE_1                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_1           GFX_BACKGROUND_NONE

		

#define GFX_SCHEME_NAME_2                       "TextLabelThemeLarge"
#define GFX_SCHEME_ALPHA_2                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_2      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_2     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_2          0xFF
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_2        0xFF
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_2         0xFF

#define GFX_SCHEME_SECONDARY_COLOR_RED_2        0x40
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_2      0x40
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_2       0x40

#define GFX_SCHEME_DISABLED_COLOR_RED_2         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_2       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_2        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_2       0xFF
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_2     0xFF
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_2      0xFF

#define GFX_SCHEME_EMBOSS_SIZE_2                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_2     0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_2   0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_2    0xC0

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_2      0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_2    0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_2     0x40

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_2     0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_2   0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_2    0x00

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_2   0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_2 0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_2  0xFF

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_2    0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_2  0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_2   0x40

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_2    0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_2  0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_2   0x00

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_2    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_2  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_2   0xFF

#define GFX_SCHEME_FILL_STYLE_2                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_2           GFX_BACKGROUND_NONE

		

#define GFX_SCHEME_NAME_3                       "TextLabelTheme"
#define GFX_SCHEME_ALPHA_3                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_3      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_3     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_3          0xFF
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_3        0xFF
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_3         0xFF

#define GFX_SCHEME_SECONDARY_COLOR_RED_3        0x40
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_3      0x40
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_3       0x40

#define GFX_SCHEME_DISABLED_COLOR_RED_3         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_3       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_3        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_3       0xFF
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_3     0xFF
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_3      0xFF

#define GFX_SCHEME_EMBOSS_SIZE_3                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_3     0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_3   0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_3    0xC0

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_3      0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_3    0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_3     0x40

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_3     0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_3   0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_3    0x00

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_3   0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_3 0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_3  0xFF

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_3    0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_3  0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_3   0x40

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_3    0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_3  0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_3   0x00

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_3    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_3  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_3   0xFF

#define GFX_SCHEME_FILL_STYLE_3                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_3           GFX_BACKGROUND_NONE

		

#define GFX_SCHEME_NAME_4                       "SlidePictureScheme"
#define GFX_SCHEME_ALPHA_4                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_4      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_4     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_4          0x00
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_4        0x00
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_4         0x00

#define GFX_SCHEME_SECONDARY_COLOR_RED_4        0x00
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_4      0x00
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_4       0x00

#define GFX_SCHEME_DISABLED_COLOR_RED_4         0x00
#define GFX_SCHEME_DISABLED_COLOR_GREEN_4       0x00
#define GFX_SCHEME_DISABLED_COLOR_BLUE_4        0x00

#define GFX_SCHEME_BACKGROUND_COLOR_RED_4       0x00
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_4     0x00
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_4      0x00

#define GFX_SCHEME_EMBOSS_SIZE_4                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_4     0x00
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_4   0x00
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_4    0x00

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_4      0x00
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_4    0x00
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_4     0x00

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_4     0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_4   0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_4    0x00

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_4   0x00
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_4 0x00
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_4  0x00

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_4    0x00
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_4  0x00
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_4   0x00

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_4    0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_4  0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_4   0x00

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_4    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_4  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_4   0xFF

#define GFX_SCHEME_FILL_STYLE_4                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_4           GFX_BACKGROUND_NONE

		
/*** Screen IDs ***/
#define MainMenu                 0 
	
#define SlideShowInstructions                 1 
	
#define Settings                 2 
	
#define FeatureList                 3 
	
#define SlideScreen                 4 
	
#define WaitForMediaConnect                 5 
	
#define ReadingMedia                 6 
	
/*** GFX GOL Button Definitions ***/
#define GFX_BUTTON_LEFT_0            543
#define GFX_BUTTON_TOP_0             260
#define GFX_BUTTON_RIGHT_0           671
#define GFX_BUTTON_BOTTOM_0          387
#define GFX_BUTTON_TEXT_0            "0x0"
#define GFX_BUTTON_ALIGNMENT_0       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_0          0
#define GFX_BUTTON_STATE_0           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_0     (GFX_RESOURCE_HDR*)&script_invert
#define GFX_BUTTON_RELEASE_IMAGE_0   (GFX_RESOURCE_HDR*)&script_outline
#define GFX_BUTTON_SCHEME_0          gfxScheme0
		
#define GFX_BUTTON_LEFT_1            343
#define GFX_BUTTON_TOP_1             260
#define GFX_BUTTON_RIGHT_1           471
#define GFX_BUTTON_BOTTOM_1          387
#define GFX_BUTTON_TEXT_1            "0x0"
#define GFX_BUTTON_ALIGNMENT_1       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_1          0
#define GFX_BUTTON_STATE_1           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_1     (GFX_RESOURCE_HDR*)&cog
#define GFX_BUTTON_RELEASE_IMAGE_1   (GFX_RESOURCE_HDR*)&cog_outline
#define GFX_BUTTON_SCHEME_1          gfxScheme0
		
#define GFX_BUTTON_LEFT_2            140
#define GFX_BUTTON_TOP_2             260
#define GFX_BUTTON_RIGHT_2           268
#define GFX_BUTTON_BOTTOM_2          387
#define GFX_BUTTON_TEXT_2            "0x0"
#define GFX_BUTTON_ALIGNMENT_2       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_2          0
#define GFX_BUTTON_STATE_2           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_2     (GFX_RESOURCE_HDR*)&layers_image
#define GFX_BUTTON_RELEASE_IMAGE_2   (GFX_RESOURCE_HDR*)&layers_image_outline
#define GFX_BUTTON_SCHEME_2          gfxScheme0
		
#define GFX_BUTTON_LEFT_3            670
#define GFX_BUTTON_TOP_3             350
#define GFX_BUTTON_RIGHT_3           798
#define GFX_BUTTON_BOTTOM_3          477
#define GFX_BUTTON_TEXT_3            "0x0"
#define GFX_BUTTON_ALIGNMENT_3       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_3          0
#define GFX_BUTTON_STATE_3           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_3     (GFX_RESOURCE_HDR*)&layers_image
#define GFX_BUTTON_RELEASE_IMAGE_3   (GFX_RESOURCE_HDR*)&layers_image_outline
#define GFX_BUTTON_SCHEME_3          gfxScheme3
		
#define GFX_BUTTON_LEFT_4            670
#define GFX_BUTTON_TOP_4             350
#define GFX_BUTTON_RIGHT_4           798
#define GFX_BUTTON_BOTTOM_4          477
#define GFX_BUTTON_TEXT_4            "0x0"
#define GFX_BUTTON_ALIGNMENT_4       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_4          0
#define GFX_BUTTON_STATE_4           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_4     (GFX_RESOURCE_HDR*)&RoundHomeButton
#define GFX_BUTTON_RELEASE_IMAGE_4   (GFX_RESOURCE_HDR*)&RoundHomeButton_Outline
#define GFX_BUTTON_SCHEME_4          gfxScheme0
		
#define GFX_BUTTON_LEFT_5            670
#define GFX_BUTTON_TOP_5             350
#define GFX_BUTTON_RIGHT_5           798
#define GFX_BUTTON_BOTTOM_5          477
#define GFX_BUTTON_TEXT_5            "0x0"
#define GFX_BUTTON_ALIGNMENT_5       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_5          0
#define GFX_BUTTON_STATE_5           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_5     (GFX_RESOURCE_HDR*)&RoundHomeButton
#define GFX_BUTTON_RELEASE_IMAGE_5   (GFX_RESOURCE_HDR*)&RoundHomeButton_Outline
#define GFX_BUTTON_SCHEME_5          gfxScheme0
		
#define GFX_BUTTON_LEFT_6            670
#define GFX_BUTTON_TOP_6             350
#define GFX_BUTTON_RIGHT_6           798
#define GFX_BUTTON_BOTTOM_6          477
#define GFX_BUTTON_TEXT_6            "0x0"
#define GFX_BUTTON_ALIGNMENT_6       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_6          0
#define GFX_BUTTON_STATE_6           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_6     (GFX_RESOURCE_HDR*)&RoundHomeButton
#define GFX_BUTTON_RELEASE_IMAGE_6   (GFX_RESOURCE_HDR*)&RoundHomeButton_Outline
#define GFX_BUTTON_SCHEME_6          gfxScheme0
		
/*** Button IDs ***/
#define ButtonFeatureList                  1000 
	
#define ButtonSettings                  1001 
	
#define ButtonSlides                  1002 
	
#define ButtonProceedToSlide                  1003 
	
#define ButtonSettingsToMain                  1004 
	
#define ButtonFeatureListToMain                  1005 
	
#define ButtonSlideToHome                  1006 
	
/*** GFX GOL Radio Button Definitions ***/

#define GFX_RADIOBUTTON_LEFT_0            390
#define GFX_RADIOBUTTON_TOP_0             361
#define GFX_RADIOBUTTON_RIGHT_0           510
#define GFX_RADIOBUTTON_BOTTOM_0          411
#define GFX_RADIOBUTTON_TEXT_0            "0x4f, 0x4e, 0x0"
#define GFX_RADIOBUTTON_STATE_0    		  GFX_GOL_RADIOBUTTON_DRAW_STATE
#define GFX_RADIOBUTTON_ALIGNMENT_0       GFX_ALIGN_LEFT | GFX_ALIGN_VCENTER
#define GFX_RADIOBUTTON_SCHEME_0          gfxScheme2
#define GFX_RADIOBUTTON_GROUPNO_0          1
#define GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_0   2
		

#define GFX_RADIOBUTTON_LEFT_1            540
#define GFX_RADIOBUTTON_TOP_1             361
#define GFX_RADIOBUTTON_RIGHT_1           660
#define GFX_RADIOBUTTON_BOTTOM_1          411
#define GFX_RADIOBUTTON_TEXT_1            "0x4f, 0x46, 0x46, 0x0"
#define GFX_RADIOBUTTON_STATE_1    		  GFX_GOL_RADIOBUTTON_DRAW_STATE
#define GFX_RADIOBUTTON_ALIGNMENT_1       GFX_ALIGN_LEFT | GFX_ALIGN_VCENTER
#define GFX_RADIOBUTTON_SCHEME_1          gfxScheme2
#define GFX_RADIOBUTTON_GROUPNO_1          1
#define GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_1   2
		

#define GFX_RADIOBUTTON_LEFT_2            540
#define GFX_RADIOBUTTON_TOP_2             251
#define GFX_RADIOBUTTON_RIGHT_2           660
#define GFX_RADIOBUTTON_BOTTOM_2          301
#define GFX_RADIOBUTTON_TEXT_2            "0x4f, 0x46, 0x46, 0x0"
#define GFX_RADIOBUTTON_STATE_2    		  GFX_GOL_RADIOBUTTON_DRAW_STATE
#define GFX_RADIOBUTTON_ALIGNMENT_2       GFX_ALIGN_LEFT | GFX_ALIGN_VCENTER
#define GFX_RADIOBUTTON_SCHEME_2          gfxScheme2
#define GFX_RADIOBUTTON_GROUPNO_2          0
#define GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_2   2
		

#define GFX_RADIOBUTTON_LEFT_3            390
#define GFX_RADIOBUTTON_TOP_3             251
#define GFX_RADIOBUTTON_RIGHT_3           510
#define GFX_RADIOBUTTON_BOTTOM_3          301
#define GFX_RADIOBUTTON_TEXT_3            "0x4f, 0x4e, 0x0"
#define GFX_RADIOBUTTON_STATE_3    		  GFX_GOL_RADIOBUTTON_DRAW_STATE | GFX_GOL_RADIOBUTTON_GROUP_STATE
#define GFX_RADIOBUTTON_ALIGNMENT_3       GFX_ALIGN_LEFT | GFX_ALIGN_VCENTER
#define GFX_RADIOBUTTON_SCHEME_3          gfxScheme2
#define GFX_RADIOBUTTON_GROUPNO_3          0
#define GFX_RADIOBUTTON_NUM_GROUPS_ON_SCREEN_3   2
		
/*** Radio Button IDs ***/
#define rb_ImageMetaDataOn                  4000 
	
#define rb_ImageMetaDataOff                  4001 
	
#define rb_DoubleBufferingOff                  4002 
	
#define rb_DoubleBufferingOn                  4003 
	
/*** GFX GOL Scrollbar Definitions ***/
#define GFX_SCROLLBAR_LEFT_0            	71
#define GFX_SCROLLBAR_TOP_0             	100
#define GFX_SCROLLBAR_RIGHT_0           	741
#define GFX_SCROLLBAR_BOTTOM_0          	209
#define GFX_SCROLLBAR_STATE_0            GFX_GOL_SCROLLBAR_DRAW_STATE | GFX_GOL_SCROLLBAR_DRAW_THUMB_STATE | GFX_GOL_SCROLLBAR_SLIDER_MODE_STATE
#define GFX_SCROLLBAR_RANGE_0            5
#define GFX_SCROLLBAR_PAGE_0             1
#define GFX_SCROLLBAR_POS_0              2
#define GFX_SCROLLBAR_SCHEME_0           gfxScheme3
		
/*** Scrollbar IDs ***/
#define Slider1                  5000 
	
/*** GFX GOL Button Definitions ***/
#define GFX_STATICTEXT_LEFT_0            180
#define GFX_STATICTEXT_TOP_0             191
#define GFX_STATICTEXT_RIGHT_0           640
#define GFX_STATICTEXT_BOTTOM_0          241
#define GFX_STATICTEXT_STATE_0          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_0            "0x50, 0x49, 0x43, 0x33, 0x32, 0x4d, 0x5a, 0x20, 0x53, 0x44, 0x20, 0x43, 0x61, 0x72, 0x64, 0x20, 0x49, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x56, 0x69, 0x65, 0x77, 0x65, 0x72, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_0       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_0          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_1            130
#define GFX_STATICTEXT_TOP_1             401
#define GFX_STATICTEXT_RIGHT_1           280
#define GFX_STATICTEXT_BOTTOM_1          441
#define GFX_STATICTEXT_STATE_1          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_1            "0x53, 0x6c, 0x69, 0x64, 0x65, 0x73, 0x68, 0x6f, 0x77, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_1       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_1          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_2            330
#define GFX_STATICTEXT_TOP_2             400
#define GFX_STATICTEXT_RIGHT_2           480
#define GFX_STATICTEXT_BOTTOM_2          440
#define GFX_STATICTEXT_STATE_2          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_2            "0x53, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_2       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_2          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_3            520
#define GFX_STATICTEXT_TOP_3             400
#define GFX_STATICTEXT_RIGHT_3           670
#define GFX_STATICTEXT_BOTTOM_3          440
#define GFX_STATICTEXT_STATE_3          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_3            "0x46, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x73, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_3       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_3          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_4            10
#define GFX_STATICTEXT_TOP_4             0
#define GFX_STATICTEXT_RIGHT_4           790
#define GFX_STATICTEXT_BOTTOM_4          471
#define GFX_STATICTEXT_STATE_4          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_4            "0x53, 0x6c, 0x69, 0x64, 0x65, 0x73, 0x68, 0x6f, 0x77, 0x20, 0x54, 0x69, 0x70, 0x73, 0xA, 0xA, 0x31, 0x29, 0x20, 0x50, 0x72, 0x65, 0x73, 0x73, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x68, 0x6f, 0x6c, 0x64, 0x20, 0x74, 0x6f, 0x20, 0x72, 0x65, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x63, 0x75, 0x72, 0x72, 0x65, 0x6e, 0x74, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0xA, 0xA, 0x32, 0x29, 0x20, 0x44, 0x6f, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x72, 0x65, 0x6d, 0x6f, 0x76, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x53, 0x44, 0x20, 0x63, 0x61, 0x72, 0x64, 0x20, 0x77, 0x68, 0x69, 0x6c, 0x65, 0x20, 0x74, 0x68, 0x65, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x69, 0x73, 0x20, 0xA, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x61, 0x64, 0x69, 0x6e, 0x67, 0xA, 0xA, 0x33, 0x29, 0x20, 0x54, 0x61, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x73, 0x6b, 0x69, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6e, 0x65, 0x78, 0x74, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_4       GFX_ALIGN_LEFT | GFX_ALIGN_TOP
#define GFX_STATICTEXT_SCHEME_4          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_5            70
#define GFX_STATICTEXT_TOP_5             361
#define GFX_STATICTEXT_RIGHT_5           364
#define GFX_STATICTEXT_BOTTOM_5          411
#define GFX_STATICTEXT_STATE_5          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_5            "0x49, 0x6d, 0x61, 0x67, 0x65, 0x20, 0x4d, 0x65, 0x74, 0x61, 0x20, 0x44, 0x61, 0x74, 0x61, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_5       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_5          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_6            60
#define GFX_STATICTEXT_TOP_6             251
#define GFX_STATICTEXT_RIGHT_6           365
#define GFX_STATICTEXT_BOTTOM_6          301
#define GFX_STATICTEXT_STATE_6          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_6            "0x44, 0x6f, 0x75, 0x62, 0x6c, 0x65, 0x20, 0x42, 0x75, 0x66, 0x66, 0x65, 0x72, 0x69, 0x6e, 0x67, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_6       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_6          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_7            550
#define GFX_STATICTEXT_TOP_7             32
#define GFX_STATICTEXT_RIGHT_7           580
#define GFX_STATICTEXT_BOTTOM_7          72
#define GFX_STATICTEXT_STATE_7          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_7            "0x29, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_7       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_7          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_8            508
#define GFX_STATICTEXT_TOP_8             32
#define GFX_STATICTEXT_RIGHT_8           580
#define GFX_STATICTEXT_BOTTOM_8          72
#define GFX_STATICTEXT_STATE_8          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_8            "0x73, 0x65, 0x63, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_8       GFX_ALIGN_LEFT | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_8          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_9            100
#define GFX_STATICTEXT_TOP_9             36
#define GFX_STATICTEXT_RIGHT_9           432
#define GFX_STATICTEXT_BOTTOM_9          76
#define GFX_STATICTEXT_STATE_9          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_9            "0x53, 0x6c, 0x69, 0x64, 0x65, 0x20, 0x50, 0x61, 0x75, 0x73, 0x65, 0x20, 0x54, 0x69, 0x6d, 0x65, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_9       GFX_ALIGN_RIGHT | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_9          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_10            440
#define GFX_STATICTEXT_TOP_10             32
#define GFX_STATICTEXT_RIGHT_10           461
#define GFX_STATICTEXT_BOTTOM_10          72
#define GFX_STATICTEXT_STATE_10          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_10            "0x28, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_10       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_10          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_11            460
#define GFX_STATICTEXT_TOP_11             32
#define GFX_STATICTEXT_RIGHT_11           494
#define GFX_STATICTEXT_BOTTOM_11          72
#define GFX_STATICTEXT_STATE_11          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_11            "0x32, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_11       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_11          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_12            750
#define GFX_STATICTEXT_TOP_12             130
#define GFX_STATICTEXT_RIGHT_12           773
#define GFX_STATICTEXT_BOTTOM_12          175
#define GFX_STATICTEXT_STATE_12          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_12            "0x35, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_12       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_12          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_13            29
#define GFX_STATICTEXT_TOP_13             126
#define GFX_STATICTEXT_RIGHT_13           61
#define GFX_STATICTEXT_BOTTOM_13          171
#define GFX_STATICTEXT_STATE_13          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_13            "0x30, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_13       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_13          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_14            10
#define GFX_STATICTEXT_TOP_14             10
#define GFX_STATICTEXT_RIGHT_14           790
#define GFX_STATICTEXT_BOTTOM_14          470
#define GFX_STATICTEXT_STATE_14          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_14            "0x44, 0x65, 0x6d, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20, 0x46, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x73, 0xA, 0xA, 0x57, 0x56, 0x47, 0x41, 0x20, 0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0xA, 0x49, 0x6e, 0x74, 0x65, 0x67, 0x72, 0x61, 0x74, 0x65, 0x64, 0x20, 0x4d, 0x54, 0x43, 0x48, 0x36, 0x33, 0x30, 0x33, 0x20, 0x50, 0x43, 0x41, 0x50, 0x20, 0x74, 0x6f, 0x75, 0x63, 0x68, 0x20, 0x69, 0x6e, 0x70, 0x75, 0x74, 0xA, 0x4c, 0x6f, 0x77, 0x2d, 0x43, 0x6f, 0x73, 0x74, 0x20, 0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x6c, 0x65, 0x72, 0x2d, 0x6c, 0x65, 0x73, 0x73, 0x20, 0x47, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x20, 0x64, 0x72, 0x69, 0x76, 0x65, 0x72, 0xA, 0x52, 0x65, 0x61, 0x6c, 0x2d, 0x74, 0x69, 0x6d, 0x65, 0x20, 0x4a, 0x50, 0x45, 0x47, 0x2c, 0x20, 0x42, 0x4d, 0x50, 0x2c, 0x20, 0x47, 0x49, 0x46, 0x20, 0x64, 0x65, 0x63, 0x6f, 0x64, 0x69, 0x6e, 0x67, 0xA, 0x54, 0x72, 0x61, 0x6e, 0x73, 0x70, 0x61, 0x72, 0x65, 0x6e, 0x74, 0x20, 0x47, 0x49, 0x46, 0x20, 0x73, 0x75, 0x70, 0x70, 0x6f, 0x72, 0x74, 0xA, 0x49, 0x6d, 0x61, 0x67, 0x65, 0x73, 0x20, 0x72, 0x65, 0x74, 0x72, 0x69, 0x65, 0x76, 0x65, 0x64, 0x20, 0x66, 0x72, 0x6f, 0x6d, 0x20, 0x53, 0x44, 0x20, 0x63, 0x61, 0x72, 0x64, 0x20, 0x46, 0x41, 0x54, 0x33, 0x32, 0x20, 0x46, 0x69, 0x6c, 0x65, 0x20, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6d, 0xA, 0x55, 0x70, 0x20, 0x74, 0x6f, 0x20, 0x31, 0x36, 0x2d, 0x62, 0x69, 0x74, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x64, 0x65, 0x70, 0x74, 0x68, 0x20, 0x73, 0x75, 0x70, 0x70, 0x6f, 0x72, 0x74, 0xA, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_14       GFX_ALIGN_LEFT | GFX_ALIGN_TOP
#define GFX_STATICTEXT_SCHEME_14          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_15            10
#define GFX_STATICTEXT_TOP_15             10
#define GFX_STATICTEXT_RIGHT_15           790
#define GFX_STATICTEXT_BOTTOM_15          470
#define GFX_STATICTEXT_STATE_15          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_HIDE_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_15            "0x4d, 0x65, 0x74, 0x61, 0x20, 0x44, 0x61, 0x74, 0x61, 0x20, 0x54, 0x65, 0x78, 0x74, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_15       GFX_ALIGN_LEFT | GFX_ALIGN_TOP
#define GFX_STATICTEXT_SCHEME_15          gfxScheme1
		
#define GFX_STATICTEXT_LEFT_16            200
#define GFX_STATICTEXT_TOP_16             202
#define GFX_STATICTEXT_RIGHT_16           577
#define GFX_STATICTEXT_BOTTOM_16          271
#define GFX_STATICTEXT_STATE_16          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_16            "0x50, 0x6c, 0x65, 0x61, 0x73, 0x65, 0x20, 0x69, 0x6e, 0x73, 0x65, 0x72, 0x74, 0x20, 0x53, 0x44, 0x20, 0x63, 0x61, 0x72, 0x64, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_16       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_16          gfxScheme2
		
#define GFX_STATICTEXT_LEFT_17            200
#define GFX_STATICTEXT_TOP_17             191
#define GFX_STATICTEXT_RIGHT_17           590
#define GFX_STATICTEXT_BOTTOM_17          261
#define GFX_STATICTEXT_STATE_17          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_17            "0x53, 0x65, 0x61, 0x72, 0x63, 0x68, 0x69, 0x6e, 0x67, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x73, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_17       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_17          gfxScheme2
		
/*** static text IDs ***/
#define DemoName                  9000 
	
#define e_st_Slideshow                  9001 
	
#define e_st_Settings                  9002 
	
#define e_st_Features                  9003 
	
#define e_st_SlideShowTips                  9004 
	
#define e_st_ImageMetaData                  9005 
	
#define e_st_DoubleBuffering                  9006 
	
#define e_st_CloseBracket                  9007 
	
#define e_st_Second                  9008 
	
#define e_st_SlidePauseTime                  9009 
	
#define e_st_OpenBracket                  9010 
	
#define SecondsString                  9011 
	
#define e_st_5                  9012 
	
#define e_st_0                  9013 
	
#define e_st_DemonstratedFeatures                  9014 
	
#define e_st_MetaDataText                  9015 
	
#define e_st_PleaseInsertSDCard                  9016 
	
#define e_st_LoadingMedia                  9017 
	
/*** GFX GOL windows Definitions ***/
#define GFX_PICTURE_LEFT_0            143
#define GFX_PICTURE_TOP_0             60
#define GFX_PICTURE_RIGHT_0           372
#define GFX_PICTURE_BOTTOM_0          180
#define GFX_PICTURE_STATE_0          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_0       1
#define GFX_PICTURE_SCHEME_0          gfxScheme0
		
#define GFX_PICTURE_LEFT_1            490
#define GFX_PICTURE_TOP_1             60
#define GFX_PICTURE_RIGHT_1           661
#define GFX_PICTURE_BOTTOM_1          179
#define GFX_PICTURE_STATE_1          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_1       1
#define GFX_PICTURE_SCHEME_1          gfxScheme3
		
#define GFX_PICTURE_LEFT_2            0
#define GFX_PICTURE_TOP_2             0
#define GFX_PICTURE_RIGHT_2           799
#define GFX_PICTURE_BOTTOM_2          479
#define GFX_PICTURE_STATE_2          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_2       1
#define GFX_PICTURE_SCHEME_2          gfxScheme4
		
/*** Pictures IDs ***/
#define Picture1                  12000 
	
#define MainMenuHarmonyLogo                  12001 
	
#define SlidePicture                  12002 
	



// *****************************************************************************
/* MPLAB Harmony Graphics Composer Objects

  Summary:
    Structure holding the graphics object handles

  Description:
    This structure contains the object handles for all graphics objects 
    generated by the Harmony Graphics Composer

  Remarks:
*/

typedef struct HGC_OBJECTS
{
    HGC_SCREEN_STATES screenState;      // current state of screen state machine
    HGC_SCREEN_STATES prevRefreshState; // previous state of screen state machine

    /*** Touch Event Callback ***/
    SYS_MSG_RECEIVE_CALLBACK msgCallBackFunction;

    /*** GOL Objects References ***/
    GFX_GOL_BUTTON* pButtonFeatureListObj;
    GFX_GOL_BUTTON* pButtonSettingsObj;
    GFX_GOL_BUTTON* pButtonSlidesObj;
    GFX_GOL_BUTTON* pButtonProceedToSlideObj;
    GFX_GOL_BUTTON* pButtonSettingsToMainObj;
    GFX_GOL_BUTTON* pButtonFeatureListToMainObj;
    GFX_GOL_BUTTON* pButtonSlideToHomeObj;
    GFX_GOL_RADIOBUTTON* prb_ImageMetaDataOnObj;
    GFX_GOL_RADIOBUTTON* prb_ImageMetaDataOffObj;
    GFX_GOL_RADIOBUTTON* prb_DoubleBufferingOffObj;
    GFX_GOL_RADIOBUTTON* prb_DoubleBufferingOnObj;
    GFX_GOL_SCROLLBAR* pSlider1Obj;
    GFX_GOL_STATICTEXT* pDemoNameObj;
    GFX_GOL_STATICTEXT* pe_st_SlideshowObj;
    GFX_GOL_STATICTEXT* pe_st_SettingsObj;
    GFX_GOL_STATICTEXT* pe_st_FeaturesObj;
    GFX_GOL_STATICTEXT* pe_st_SlideShowTipsObj;
    GFX_GOL_STATICTEXT* pe_st_ImageMetaDataObj;
    GFX_GOL_STATICTEXT* pe_st_DoubleBufferingObj;
    GFX_GOL_STATICTEXT* pe_st_CloseBracketObj;
    GFX_GOL_STATICTEXT* pe_st_SecondObj;
    GFX_GOL_STATICTEXT* pe_st_SlidePauseTimeObj;
    GFX_GOL_STATICTEXT* pe_st_OpenBracketObj;
    GFX_GOL_STATICTEXT* pSecondsStringObj;
    GFX_GOL_STATICTEXT* pe_st_5Obj;
    GFX_GOL_STATICTEXT* pe_st_0Obj;
    GFX_GOL_STATICTEXT* pe_st_DemonstratedFeaturesObj;
    GFX_GOL_STATICTEXT* pe_st_MetaDataTextObj;
    GFX_GOL_STATICTEXT* pe_st_PleaseInsertSDCardObj;
    GFX_GOL_STATICTEXT* pe_st_LoadingMediaObj;
    GFX_GOL_PICTURECONTROL* pPicture1Obj;
    GFX_GOL_PICTURECONTROL* pMainMenuHarmonyLogoObj;
    GFX_GOL_PICTURECONTROL* pSlidePictureObj;
} HGC_OBJECTS;

extern HGC_OBJECTS hgcObj;

/******************************************************************************
  Function:
    void GFX_HGC_RegisterAppTouchCallback ( SYS_MSG_RECEIVE_CALLBACK msgCallBackFunction )

  Summary:
    This function allows the application to register a callback to allow access 
    to the current touch behavior
 */
void GFX_HGC_RegisterAppTouchCallback ( SYS_MSG_RECEIVE_CALLBACK msgCallBackFunction );


/******************************************************************************
  Function:
    void GFX_HGC_TouchMessageCallback ( SYS_MSG_OBJECT *pMsg )

  Summary:
    This function sets up the Message System Service to route touch callbacks
    to the GOL message system  
 */
void GFX_HGC_TouchMessageCallback ( SYS_MSG_OBJECT *pMsg );


/******************************************************************************
  Function:
    void GFX_HGC_Initialize ( void )

  Summary:
    This function initializes the HGC state machine.  
 */
void GFX_HGC_Initialize ( void );


/******************************************************************************
  Function:
    void GFX_HGC_Setup ( void )

  Summary:
    This function sets up the GOL message callback and draw callbacks.  
 */
void GFX_HGC_Setup ( void );


/******************************************************************************
  Function:
    HGC_SCREEN_STATES GFX_HGC_GetScreenState ( void )

  Remarks:
    This function returns the screen state
 */
HGC_SCREEN_STATES GFX_HGC_GetScreenState ( void );


/******************************************************************************
  Function:
    void GFX_HGC_SetScreenState ( HGC_SCREEN_STATES newState )

  Remarks:
    This function sets the screen state machine to a new state
 */
void GFX_HGC_SetScreenState ( HGC_SCREEN_STATES newState );


/******************************************************************************
  Function:
    void GFX_HGC_Tasks (SYS_MODULE_OBJ gfxObject);

  Summary:
    This function is called in SYS_Tasks.  The intent wait until the GFX library
    is initialized before supplying items to draw
*/
void GFX_HGC_Tasks  (SYS_MODULE_OBJ gfxObject);


/******************************************************************************
  Function:
    void GFX_HGC_SchemeCreate ( void )

  Summary:
    Allocates memory for a new scheme
 */
GFX_GOL_OBJ_SCHEME *GFX_HGC_SchemeCreate(void);


/******************************************************************************
  Function:
    void GFX_HGC_InitializeSchemes ( void )

  Summary:
    Initializes all HGC-specified schemes
 */
void GFX_HGC_InitializeSchemes( void );


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
bool GFX_HGC_MessageCallback(GFX_GOL_TRANSLATED_ACTION objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg);


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
bool GFX_HGC_DrawCallback( void );
/******************************************************************************
  Function: 
    bool GFX_HGC_DrawScreen_GOL( uint8_t  screenId )

  Output: 
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    HGC-specified GFX GOL objects are drawn here, grouped by screen.
    The draw order is reverse Z-ordered.
 */
bool GFX_HGC_DrawScreen_GOL(uint8_t screenId);


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
bool GFX_HGC_DrawScreen_Primitives(uint8_t screenId);


/******************************************************************************
  Function: 
    void GFX_HGC_SetupScreen( uint8_t  screenId )

  Remarks: 
    Clears current screen and starts a fresh screen with its background color
 */
void GFX_HGC_SetupScreen(uint8_t screenId);


/******************************************************************************
  Function: 
    bool GFX_HGC_HasCurrentScreenDrawn( void )

  Output: 
    Returns true if the current screen is completely drawn

  Remarks: 
    Allows application to know if the current screen is finished drawing
 */
bool GFX_HGC_HasCurrentScreenDrawn( void );


/******************************************************************************
  Function: 
    bool GFX_HGC_ChangeScreen( uint8_t  screenId )

  Output: 
    Returns true if a screenId matches an existing screen identifier

  Remarks: 
    Can be called to initiate GFX Library to draw a new screen
 */
bool GFX_HGC_ChangeScreen(uint8_t screenId);


/******************************************************************************
  Function: 
    bool GFX_HGC_DrawItem(int itemId)

  Output:
    Returns true if a itemId matches an existing item identifier

  Remarks: 
    Every item specified in every screen in HGC is listed in this function
 */
bool GFX_HGC_DrawItem(int itemId);


/******************************************************************************
  Function: 
    bool GFX_HGC_MsgButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Button events
 */
bool GFX_HGC_MsgButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg);

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgRadioButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Radio Button events
 */
bool GFX_HGC_MsgRadioButtons(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg);

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgScrollBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Scroll Bar events
 */
bool GFX_HGC_MsgScrollBars(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg);

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgPictures(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Picture Control events
 */
bool GFX_HGC_MsgPictures(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg);

/******************************************************************************
  Function: 
    bool GFX_HGC_MsgStaticTexts(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg)

  Output:
    Returns true if a Object ID matches an existing item identifier

  Remarks: 
    Handles GFX GOL Static Text events
 */
bool GFX_HGC_MsgStaticTexts(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj, GFX_GOL_MESSAGE *pMsg);


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // _GFX_HGC_DEFINITIONS_H
/*******************************************************************************
 End of File
*/
