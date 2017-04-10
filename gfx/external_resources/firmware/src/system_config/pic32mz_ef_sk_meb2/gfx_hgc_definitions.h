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
    HGC_SCREEN_STATE_SETUP_SCREEN_Screen1,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen1,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen1,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen1,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen1,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen1,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen1,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen1,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_Screen2,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen2,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen2,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen2,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen2,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen2,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen2,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen2,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_Screen3,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen3,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen3,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen3,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen3,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen3,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen3,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen3,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_Screen4,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_Screen4,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_Screen4,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_Screen4,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_Screen4,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_Screen4,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_Screen4,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_Screen4,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen5,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen5,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen5,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen5,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen5,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen5,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen5,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen5,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen6,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen6,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen6,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen6,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen6,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen6,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen6,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen6,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen7,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen7,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen7,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen7,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen7,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen7,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen7,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen7,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen8,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen8,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen8,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen8,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen8,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen8,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen8,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen8,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen9,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen9,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen9,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen9,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen9,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen9,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen9,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen9,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen10,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen10,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen10,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen10,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen10,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen10,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen10,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen10,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen11,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen11,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen11,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen11,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen11,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen11,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen11,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen11,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen12,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen12,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen12,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen12,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen12,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen12,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen12,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen12,
	
} HGC_SCREEN_STATES;

/*** GFX GOL Scheme Definitions ***/

#define GFX_SCHEME_NAME_0                       "default"
#define GFX_SCHEME_ALPHA_0                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_0      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_0     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_0          0xFF
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_0        0xFF
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_0         0xFF

#define GFX_SCHEME_SECONDARY_COLOR_RED_0        0x40
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_0      0x40
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_0       0x40

#define GFX_SCHEME_DISABLED_COLOR_RED_0         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_0       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_0        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_0       0xE8
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_0     0xE8
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_0      0xE8

#define GFX_SCHEME_EMBOSS_SIZE_0                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_0     0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_0   0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_0    0xC0

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_0      0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_0    0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_0     0x40

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_0     0x18
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_0   0x1C
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_0    0x00

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_0   0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_0 0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_0  0xFF

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_0    0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_0  0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_0   0x40

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_0    0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_0  0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_0   0x00

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_0    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_0  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_0   0xFF

#define GFX_SCHEME_FILL_STYLE_0                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_0           GFX_BACKGROUND_COLOR

		

#define GFX_SCHEME_NAME_1                       "Untitled"
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

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_1     0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_1   0x00
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

		

#define GFX_SCHEME_NAME_2                       "internal_font"
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

#define GFX_SCHEME_BACKGROUND_COLOR_RED_2       0x00
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_2     0x00
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_2      0x00

#define GFX_SCHEME_EMBOSS_SIZE_2                0

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_2     0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_2   0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_2    0xC0

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_2      0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_2    0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_2     0x40

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_2     0xB0
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_2   0x18
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_2    0x10

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

		

#define GFX_SCHEME_NAME_3                       "extenal_font"
#define GFX_SCHEME_ALPHA_3                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_3      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_3     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_3          0x78
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_3        0x20
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_3         0x28

#define GFX_SCHEME_SECONDARY_COLOR_RED_3        0x18
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_3      0x3C
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_3       0x30

#define GFX_SCHEME_DISABLED_COLOR_RED_3         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_3       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_3        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_3       0xD8
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_3     0xDC
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_3      0xD8

#define GFX_SCHEME_EMBOSS_SIZE_3                0

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_3     0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_3   0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_3    0xC0

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_3      0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_3    0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_3     0x40

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_3     0x20
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_3   0xD0
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_3    0x28

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_3   0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_3 0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_3  0xFF

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_3    0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_3  0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_3   0x40

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_3    0xD8
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_3  0xD8
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_3   0xD8

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_3    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_3  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_3   0xFF

#define GFX_SCHEME_FILL_STYLE_3                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_3           GFX_BACKGROUND_NONE

		
/*** Screen IDs ***/
#define Screen1                 0 
	
#define Screen2                 1 
	
#define Screen3                 2 
	
#define Screen4                 3 
	
#define screen5                 4 
	
#define screen6                 5 
	
#define screen7                 6 
	
#define screen8                 7 
	
#define screen9                 8 
	
#define screen10                 9 
	
#define screen11                 10 
	
#define screen12                 11 
	
/*** GFX GOL Button Definitions ***/
#define GFX_BUTTON_LEFT_0            328
#define GFX_BUTTON_TOP_0             133
#define GFX_BUTTON_RIGHT_0           436
#define GFX_BUTTON_BOTTOM_0          240
#define GFX_BUTTON_TEXT_0            "0x0"
#define GFX_BUTTON_ALIGNMENT_0       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_0          0
#define GFX_BUTTON_STATE_0           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_0     NULL
#define GFX_BUTTON_RELEASE_IMAGE_0   NULL
#define GFX_BUTTON_SCHEME_0          gfxScheme0
		
#define GFX_BUTTON_LEFT_1            187
#define GFX_BUTTON_TOP_1             133
#define GFX_BUTTON_RIGHT_1           296
#define GFX_BUTTON_BOTTOM_1          239
#define GFX_BUTTON_TEXT_1            "0x0"
#define GFX_BUTTON_ALIGNMENT_1       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_1          0
#define GFX_BUTTON_STATE_1           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_1     NULL
#define GFX_BUTTON_RELEASE_IMAGE_1   NULL
#define GFX_BUTTON_SCHEME_1          gfxScheme0
		
#define GFX_BUTTON_LEFT_2            41
#define GFX_BUTTON_TOP_2             139
#define GFX_BUTTON_RIGHT_2           145
#define GFX_BUTTON_BOTTOM_2          240
#define GFX_BUTTON_TEXT_2            "0x0"
#define GFX_BUTTON_ALIGNMENT_2       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_2          0
#define GFX_BUTTON_STATE_2           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_2     NULL
#define GFX_BUTTON_RELEASE_IMAGE_2   NULL
#define GFX_BUTTON_SCHEME_2          gfxScheme0
		
#define GFX_BUTTON_LEFT_3            25
#define GFX_BUTTON_TOP_3             191
#define GFX_BUTTON_RIGHT_3           89
#define GFX_BUTTON_BOTTOM_3          255
#define GFX_BUTTON_TEXT_3            "0x0"
#define GFX_BUTTON_ALIGNMENT_3       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_3          0
#define GFX_BUTTON_STATE_3           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_3     NULL
#define GFX_BUTTON_RELEASE_IMAGE_3   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_3          gfxScheme0
		
#define GFX_BUTTON_LEFT_4            393
#define GFX_BUTTON_TOP_4             191
#define GFX_BUTTON_RIGHT_4           457
#define GFX_BUTTON_BOTTOM_4          255
#define GFX_BUTTON_TEXT_4            "0x0"
#define GFX_BUTTON_ALIGNMENT_4       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_4          10
#define GFX_BUTTON_STATE_4           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_4     NULL
#define GFX_BUTTON_RELEASE_IMAGE_4   (GFX_RESOURCE_HDR*)&right
#define GFX_BUTTON_SCHEME_4          gfxScheme3
		
#define GFX_BUTTON_LEFT_5            25
#define GFX_BUTTON_TOP_5             191
#define GFX_BUTTON_RIGHT_5           89
#define GFX_BUTTON_BOTTOM_5          255
#define GFX_BUTTON_TEXT_5            "0x0"
#define GFX_BUTTON_ALIGNMENT_5       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_5          0
#define GFX_BUTTON_STATE_5           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_5     NULL
#define GFX_BUTTON_RELEASE_IMAGE_5   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_5          gfxScheme0
		
#define GFX_BUTTON_LEFT_6            393
#define GFX_BUTTON_TOP_6             191
#define GFX_BUTTON_RIGHT_6           457
#define GFX_BUTTON_BOTTOM_6          255
#define GFX_BUTTON_TEXT_6            "0x0"
#define GFX_BUTTON_ALIGNMENT_6       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_6          10
#define GFX_BUTTON_STATE_6           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_6     NULL
#define GFX_BUTTON_RELEASE_IMAGE_6   (GFX_RESOURCE_HDR*)&right
#define GFX_BUTTON_SCHEME_6          gfxScheme3
		
#define GFX_BUTTON_LEFT_7            25
#define GFX_BUTTON_TOP_7             191
#define GFX_BUTTON_RIGHT_7           89
#define GFX_BUTTON_BOTTOM_7          255
#define GFX_BUTTON_TEXT_7            "0x0"
#define GFX_BUTTON_ALIGNMENT_7       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_7          0
#define GFX_BUTTON_STATE_7           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_7     NULL
#define GFX_BUTTON_RELEASE_IMAGE_7   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_7          gfxScheme0
		
#define GFX_BUTTON_LEFT_8            393
#define GFX_BUTTON_TOP_8             191
#define GFX_BUTTON_RIGHT_8           457
#define GFX_BUTTON_BOTTOM_8          255
#define GFX_BUTTON_TEXT_8            "0x0"
#define GFX_BUTTON_ALIGNMENT_8       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_8          0
#define GFX_BUTTON_STATE_8           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_8     NULL
#define GFX_BUTTON_RELEASE_IMAGE_8   (GFX_RESOURCE_HDR*)&right
#define GFX_BUTTON_SCHEME_8          gfxScheme3
		
#define GFX_BUTTON_LEFT_9            25
#define GFX_BUTTON_TOP_9             191
#define GFX_BUTTON_RIGHT_9           89
#define GFX_BUTTON_BOTTOM_9          255
#define GFX_BUTTON_TEXT_9            "0x0"
#define GFX_BUTTON_ALIGNMENT_9       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_9          0
#define GFX_BUTTON_STATE_9           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_9     NULL
#define GFX_BUTTON_RELEASE_IMAGE_9   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_9          gfxScheme0
		
#define GFX_BUTTON_LEFT_10            393
#define GFX_BUTTON_TOP_10             191
#define GFX_BUTTON_RIGHT_10           457
#define GFX_BUTTON_BOTTOM_10          255
#define GFX_BUTTON_TEXT_10            "0x0"
#define GFX_BUTTON_ALIGNMENT_10       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_10          0
#define GFX_BUTTON_STATE_10           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_10     NULL
#define GFX_BUTTON_RELEASE_IMAGE_10   (GFX_RESOURCE_HDR*)&right
#define GFX_BUTTON_SCHEME_10          gfxScheme3
		
#define GFX_BUTTON_LEFT_11            25
#define GFX_BUTTON_TOP_11             191
#define GFX_BUTTON_RIGHT_11           89
#define GFX_BUTTON_BOTTOM_11          255
#define GFX_BUTTON_TEXT_11            "0x0"
#define GFX_BUTTON_ALIGNMENT_11       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_11          0
#define GFX_BUTTON_STATE_11           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_11     NULL
#define GFX_BUTTON_RELEASE_IMAGE_11   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_11          gfxScheme0
		
#define GFX_BUTTON_LEFT_12            393
#define GFX_BUTTON_TOP_12             191
#define GFX_BUTTON_RIGHT_12           457
#define GFX_BUTTON_BOTTOM_12          255
#define GFX_BUTTON_TEXT_12            "0x0"
#define GFX_BUTTON_ALIGNMENT_12       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_12          0
#define GFX_BUTTON_STATE_12           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_12     NULL
#define GFX_BUTTON_RELEASE_IMAGE_12   (GFX_RESOURCE_HDR*)&right
#define GFX_BUTTON_SCHEME_12          gfxScheme3
		
#define GFX_BUTTON_LEFT_13            25
#define GFX_BUTTON_TOP_13             191
#define GFX_BUTTON_RIGHT_13           89
#define GFX_BUTTON_BOTTOM_13          255
#define GFX_BUTTON_TEXT_13            "0x0"
#define GFX_BUTTON_ALIGNMENT_13       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_13          0
#define GFX_BUTTON_STATE_13           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_13     NULL
#define GFX_BUTTON_RELEASE_IMAGE_13   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_13          gfxScheme0
		
#define GFX_BUTTON_LEFT_14            393
#define GFX_BUTTON_TOP_14             191
#define GFX_BUTTON_RIGHT_14           457
#define GFX_BUTTON_BOTTOM_14          255
#define GFX_BUTTON_TEXT_14            "0x0"
#define GFX_BUTTON_ALIGNMENT_14       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_14          0
#define GFX_BUTTON_STATE_14           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_14     NULL
#define GFX_BUTTON_RELEASE_IMAGE_14   (GFX_RESOURCE_HDR*)&right
#define GFX_BUTTON_SCHEME_14          gfxScheme3
		
#define GFX_BUTTON_LEFT_15            25
#define GFX_BUTTON_TOP_15             191
#define GFX_BUTTON_RIGHT_15           89
#define GFX_BUTTON_BOTTOM_15          255
#define GFX_BUTTON_TEXT_15            "0x0"
#define GFX_BUTTON_ALIGNMENT_15       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_15          0
#define GFX_BUTTON_STATE_15           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_15     NULL
#define GFX_BUTTON_RELEASE_IMAGE_15   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_15          gfxScheme0
		
#define GFX_BUTTON_LEFT_16            393
#define GFX_BUTTON_TOP_16             191
#define GFX_BUTTON_RIGHT_16           457
#define GFX_BUTTON_BOTTOM_16          255
#define GFX_BUTTON_TEXT_16            "0x0"
#define GFX_BUTTON_ALIGNMENT_16       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_16          0
#define GFX_BUTTON_STATE_16           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_16     NULL
#define GFX_BUTTON_RELEASE_IMAGE_16   (GFX_RESOURCE_HDR*)&home
#define GFX_BUTTON_SCHEME_16          gfxScheme3
		
#define GFX_BUTTON_LEFT_17            25
#define GFX_BUTTON_TOP_17             191
#define GFX_BUTTON_RIGHT_17           89
#define GFX_BUTTON_BOTTOM_17          255
#define GFX_BUTTON_TEXT_17            "0x0"
#define GFX_BUTTON_ALIGNMENT_17       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_17          0
#define GFX_BUTTON_STATE_17           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_17     NULL
#define GFX_BUTTON_RELEASE_IMAGE_17   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_17          gfxScheme0
		
#define GFX_BUTTON_LEFT_18            393
#define GFX_BUTTON_TOP_18             191
#define GFX_BUTTON_RIGHT_18           457
#define GFX_BUTTON_BOTTOM_18          255
#define GFX_BUTTON_TEXT_18            "0x0"
#define GFX_BUTTON_ALIGNMENT_18       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_18          0
#define GFX_BUTTON_STATE_18           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_18     NULL
#define GFX_BUTTON_RELEASE_IMAGE_18   (GFX_RESOURCE_HDR*)&home
#define GFX_BUTTON_SCHEME_18          gfxScheme3
		
#define GFX_BUTTON_LEFT_19            25
#define GFX_BUTTON_TOP_19             191
#define GFX_BUTTON_RIGHT_19           89
#define GFX_BUTTON_BOTTOM_19          255
#define GFX_BUTTON_TEXT_19            "0x0"
#define GFX_BUTTON_ALIGNMENT_19       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_19          0
#define GFX_BUTTON_STATE_19           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_19     NULL
#define GFX_BUTTON_RELEASE_IMAGE_19   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_19          gfxScheme0
		
#define GFX_BUTTON_LEFT_20            393
#define GFX_BUTTON_TOP_20             191
#define GFX_BUTTON_RIGHT_20           457
#define GFX_BUTTON_BOTTOM_20          255
#define GFX_BUTTON_TEXT_20            "0x0"
#define GFX_BUTTON_ALIGNMENT_20       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_20          0
#define GFX_BUTTON_STATE_20           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_20     NULL
#define GFX_BUTTON_RELEASE_IMAGE_20   (GFX_RESOURCE_HDR*)&right
#define GFX_BUTTON_SCHEME_20          gfxScheme3
		
#define GFX_BUTTON_LEFT_21            393
#define GFX_BUTTON_TOP_21             191
#define GFX_BUTTON_RIGHT_21           457
#define GFX_BUTTON_BOTTOM_21          255
#define GFX_BUTTON_TEXT_21            "0x0"
#define GFX_BUTTON_ALIGNMENT_21       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_21          0
#define GFX_BUTTON_STATE_21           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_21     NULL
#define GFX_BUTTON_RELEASE_IMAGE_21   (GFX_RESOURCE_HDR*)&right
#define GFX_BUTTON_SCHEME_21          gfxScheme3
		
#define GFX_BUTTON_LEFT_22            25
#define GFX_BUTTON_TOP_22             191
#define GFX_BUTTON_RIGHT_22           89
#define GFX_BUTTON_BOTTOM_22          255
#define GFX_BUTTON_TEXT_22            "0x0"
#define GFX_BUTTON_ALIGNMENT_22       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_22          0
#define GFX_BUTTON_STATE_22           GFX_GOL_BUTTON_DRAW_STATE
#define GFX_BUTTON_PRESS_IMAGE_22     NULL
#define GFX_BUTTON_RELEASE_IMAGE_22   (GFX_RESOURCE_HDR*)&left
#define GFX_BUTTON_SCHEME_22          gfxScheme2
		
#define GFX_BUTTON_LEFT_23            377
#define GFX_BUTTON_TOP_23             189
#define GFX_BUTTON_RIGHT_23           441
#define GFX_BUTTON_BOTTOM_23          253
#define GFX_BUTTON_TEXT_23            "0x0"
#define GFX_BUTTON_ALIGNMENT_23       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_23          0
#define GFX_BUTTON_STATE_23           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_23     NULL
#define GFX_BUTTON_RELEASE_IMAGE_23   (GFX_RESOURCE_HDR*)&home
#define GFX_BUTTON_SCHEME_23          gfxScheme0
		
/*** Button IDs ***/
#define Button22                  1000 
	
#define Button6                  1001 
	
#define Button1                  1002 
	
#define Button14                  1003 
	
#define Button3                  1004 
	
#define Button15                  1005 
	
#define Button4                  1006 
	
#define Button16                  1007 
	
#define Button2                  1008 
	
#define Button17                  1009 
	
#define Button9                  1010 
	
#define Button18                  1011 
	
#define Button11                  1012 
	
#define Button19                  1013 
	
#define Button5                  1014 
	
#define Button20                  1015 
	
#define Button8                  1016 
	
#define Button7                  1017 
	
#define Button10                  1018 
	
#define Button21                  1019 
	
#define Button12                  1020 
	
#define Button24                  1021 
	
#define Button13                  1022 
	
#define Button23                  1023 
	
/*** GFX GOL Button Definitions ***/
#define GFX_STATICTEXT_LEFT_0            130
#define GFX_STATICTEXT_TOP_0             142
#define GFX_STATICTEXT_RIGHT_0           359
#define GFX_STATICTEXT_BOTTOM_0          183
#define GFX_STATICTEXT_STATE_0          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_0            "0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x61, 0x20, 0x4a, 0x50, 0x45, 0x47, 0x20, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_0       GFX_ALIGN_LEFT | GFX_ALIGN_TOP
#define GFX_STATICTEXT_SCHEME_0          gfxScheme0
		
/*** static text IDs ***/
#define StaticText1                  9000 
	
/*** GFX GOL windows Definitions ***/
#define GFX_PICTURE_LEFT_0            2
#define GFX_PICTURE_TOP_0             1
#define GFX_PICTURE_RIGHT_0           479
#define GFX_PICTURE_BOTTOM_0          271
#define GFX_PICTURE_STATE_0          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_0       1
#define GFX_PICTURE_SCHEME_0          gfxScheme0
		
#define GFX_PICTURE_LEFT_1            3
#define GFX_PICTURE_TOP_1             3
#define GFX_PICTURE_RIGHT_1           477
#define GFX_PICTURE_BOTTOM_1          270
#define GFX_PICTURE_STATE_1          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_1       1
#define GFX_PICTURE_SCHEME_1          gfxScheme0
		
#define GFX_PICTURE_LEFT_2            1
#define GFX_PICTURE_TOP_2             1
#define GFX_PICTURE_RIGHT_2           479
#define GFX_PICTURE_BOTTOM_2          271
#define GFX_PICTURE_STATE_2          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_2       1
#define GFX_PICTURE_SCHEME_2          gfxScheme0
		
#define GFX_PICTURE_LEFT_3            2
#define GFX_PICTURE_TOP_3             3
#define GFX_PICTURE_RIGHT_3           478
#define GFX_PICTURE_BOTTOM_3          268
#define GFX_PICTURE_STATE_3          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_3       1
#define GFX_PICTURE_SCHEME_3          gfxScheme0
		
#define GFX_PICTURE_LEFT_4            3
#define GFX_PICTURE_TOP_4             4
#define GFX_PICTURE_RIGHT_4           478
#define GFX_PICTURE_BOTTOM_4          269
#define GFX_PICTURE_STATE_4          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_4       1
#define GFX_PICTURE_SCHEME_4          gfxScheme0
		
#define GFX_PICTURE_LEFT_5            2
#define GFX_PICTURE_TOP_5             2
#define GFX_PICTURE_RIGHT_5           479
#define GFX_PICTURE_BOTTOM_5          269
#define GFX_PICTURE_STATE_5          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_5       1
#define GFX_PICTURE_SCHEME_5          gfxScheme0
		
#define GFX_PICTURE_LEFT_6            3
#define GFX_PICTURE_TOP_6             3
#define GFX_PICTURE_RIGHT_6           478
#define GFX_PICTURE_BOTTOM_6          269
#define GFX_PICTURE_STATE_6          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_6       1
#define GFX_PICTURE_SCHEME_6          gfxScheme0
		
#define GFX_PICTURE_LEFT_7            2
#define GFX_PICTURE_TOP_7             6
#define GFX_PICTURE_RIGHT_7           478
#define GFX_PICTURE_BOTTOM_7          269
#define GFX_PICTURE_STATE_7          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_7       1
#define GFX_PICTURE_SCHEME_7          gfxScheme0
		
#define GFX_PICTURE_LEFT_8            3
#define GFX_PICTURE_TOP_8             2
#define GFX_PICTURE_RIGHT_8           478
#define GFX_PICTURE_BOTTOM_8          271
#define GFX_PICTURE_STATE_8          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_8       1
#define GFX_PICTURE_SCHEME_8          gfxScheme0
		
#define GFX_PICTURE_LEFT_9            1
#define GFX_PICTURE_TOP_9             2
#define GFX_PICTURE_RIGHT_9           477
#define GFX_PICTURE_BOTTOM_9          268
#define GFX_PICTURE_STATE_9          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_9       1
#define GFX_PICTURE_SCHEME_9          gfxScheme0
		
#define GFX_PICTURE_LEFT_10            3
#define GFX_PICTURE_TOP_10             2
#define GFX_PICTURE_RIGHT_10           477
#define GFX_PICTURE_BOTTOM_10          269
#define GFX_PICTURE_STATE_10          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_10       1
#define GFX_PICTURE_SCHEME_10          gfxScheme0
		
#define GFX_PICTURE_LEFT_11            2
#define GFX_PICTURE_TOP_11             2
#define GFX_PICTURE_RIGHT_11           477
#define GFX_PICTURE_BOTTOM_11          269
#define GFX_PICTURE_STATE_11          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_11       1
#define GFX_PICTURE_SCHEME_11          gfxScheme0
		
/*** Pictures IDs ***/
#define Picture1                  12000 
	
#define Picture2                  12001 
	
#define Picture3                  12002 
	
#define Picture6                  12003 
	
#define Picture4                  12004 
	
#define Picture5                  12005 
	
#define Picture7                  12006 
	
#define Picture8                  12007 
	
#define Picture9                  12008 
	
#define Picture10                  12009 
	
#define Picture11                  12010 
	
#define Picture12                  12011 
	



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
    GFX_GOL_BUTTON* pButton22Obj;
    GFX_GOL_BUTTON* pButton6Obj;
    GFX_GOL_BUTTON* pButton1Obj;
    GFX_GOL_BUTTON* pButton14Obj;
    GFX_GOL_BUTTON* pButton3Obj;
    GFX_GOL_BUTTON* pButton15Obj;
    GFX_GOL_BUTTON* pButton4Obj;
    GFX_GOL_BUTTON* pButton16Obj;
    GFX_GOL_BUTTON* pButton2Obj;
    GFX_GOL_BUTTON* pButton17Obj;
    GFX_GOL_BUTTON* pButton9Obj;
    GFX_GOL_BUTTON* pButton18Obj;
    GFX_GOL_BUTTON* pButton11Obj;
    GFX_GOL_BUTTON* pButton19Obj;
    GFX_GOL_BUTTON* pButton5Obj;
    GFX_GOL_BUTTON* pButton20Obj;
    GFX_GOL_BUTTON* pButton8Obj;
    GFX_GOL_BUTTON* pButton7Obj;
    GFX_GOL_BUTTON* pButton10Obj;
    GFX_GOL_BUTTON* pButton21Obj;
    GFX_GOL_BUTTON* pButton12Obj;
    GFX_GOL_BUTTON* pButton24Obj;
    GFX_GOL_BUTTON* pButton13Obj;
    GFX_GOL_BUTTON* pButton23Obj;
    GFX_GOL_STATICTEXT* pStaticText1Obj;
    GFX_GOL_PICTURECONTROL* pPicture1Obj;
    GFX_GOL_PICTURECONTROL* pPicture2Obj;
    GFX_GOL_PICTURECONTROL* pPicture3Obj;
    GFX_GOL_PICTURECONTROL* pPicture6Obj;
    GFX_GOL_PICTURECONTROL* pPicture4Obj;
    GFX_GOL_PICTURECONTROL* pPicture5Obj;
    GFX_GOL_PICTURECONTROL* pPicture7Obj;
    GFX_GOL_PICTURECONTROL* pPicture8Obj;
    GFX_GOL_PICTURECONTROL* pPicture9Obj;
    GFX_GOL_PICTURECONTROL* pPicture10Obj;
    GFX_GOL_PICTURECONTROL* pPicture11Obj;
    GFX_GOL_PICTURECONTROL* pPicture12Obj;
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
