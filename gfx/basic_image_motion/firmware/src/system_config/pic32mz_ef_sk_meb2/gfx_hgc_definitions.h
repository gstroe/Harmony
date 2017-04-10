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
    HGC_SCREEN_STATE_SETUP_SCREEN_thermostat,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_thermostat,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_thermostat,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_thermostat,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_thermostat,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_thermostat,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_thermostat,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_thermostat,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_mainmenu,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_mainmenu,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_mainmenu,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_mainmenu,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_mainmenu,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_mainmenu,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_mainmenu,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_mainmenu,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_screen_3D,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_screen_3D,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_screen_3D,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_screen_3D,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_screen_3D,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_screen_3D,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_screen_3D,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_screen_3D,
	
    HGC_SCREEN_STATE_SETUP_SCREEN_flash_screen,
    HGC_SCREEN_STATE_PRE_DRAW_GOL_SCREEN_flash_screen,
    HGC_SCREEN_STATE_DRAW_GOL_SCREEN_flash_screen,
    HGC_SCREEN_STATE_POST_DRAW_GOL_SCREEN_flash_screen,
    HGC_SCREEN_STATE_PRE_DRAW_PRIMITIVE_SCREEN_flash_screen,
    HGC_SCREEN_STATE_DRAW_PRIMITIVE_SCREEN_flash_screen,
    HGC_SCREEN_STATE_POST_DRAW_PRIMITIVE_SCREEN_flash_screen,
    HGC_SCREEN_STATE_DISPLAY_SCREEN_flash_screen,
	
} HGC_SCREEN_STATES;

/*** GFX GOL Scheme Definitions ***/

#define GFX_SCHEME_NAME_0                       "slider"
#define GFX_SCHEME_ALPHA_0                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_0      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_0     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_0          0xF8
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_0        0xFC
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_0         0xF8

#define GFX_SCHEME_SECONDARY_COLOR_RED_0        0x40
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_0      0x28
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_0       0xF8

#define GFX_SCHEME_DISABLED_COLOR_RED_0         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_0       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_0        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_0       0xF8
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_0     0xFC
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_0      0xF8

#define GFX_SCHEME_EMBOSS_SIZE_0                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_0     0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_0   0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_0    0xC0

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_0      0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_0    0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_0     0x40

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_0     0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_0   0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_0    0x00

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_0   0x00
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_0 0x00
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_0  0x00

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_0    0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_0  0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_0   0x40

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_0    0x78
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_0  0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_0   0x00

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_0    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_0  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_0   0xFF

#define GFX_SCHEME_FILL_STYLE_0                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_0           GFX_BACKGROUND_COLOR

		

#define GFX_SCHEME_NAME_1                       "default"
#define GFX_SCHEME_ALPHA_1                      89

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_1      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_1     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_1          0x00
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_1        0x00
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_1         0x00

#define GFX_SCHEME_SECONDARY_COLOR_RED_1        0xF8
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_1      0xFC
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_1       0xF8

#define GFX_SCHEME_DISABLED_COLOR_RED_1         0xF8
#define GFX_SCHEME_DISABLED_COLOR_GREEN_1       0xFC
#define GFX_SCHEME_DISABLED_COLOR_BLUE_1        0xF8

#define GFX_SCHEME_BACKGROUND_COLOR_RED_1       0xF8
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_1     0xFC
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_1      0xF8

#define GFX_SCHEME_EMBOSS_SIZE_1                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_1     0xF8
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_1   0xFC
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_1    0xF8

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_1      0xF8
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_1    0xFC
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_1     0xF8

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

		

#define GFX_SCHEME_NAME_2                       "Button"
#define GFX_SCHEME_ALPHA_2                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_2      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_2     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_2          0xF8
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_2        0xFC
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_2         0xF8

#define GFX_SCHEME_SECONDARY_COLOR_RED_2        0x40
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_2      0x40
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_2       0x40

#define GFX_SCHEME_DISABLED_COLOR_RED_2         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_2       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_2        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_2       0xF8
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_2     0xFC
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_2      0xF0

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
#define GFX_SCHEME_BACKGROUND_TYPE_2           GFX_BACKGROUND_COLOR

		

#define GFX_SCHEME_NAME_3                       "speed_text"
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

#define GFX_SCHEME_BACKGROUND_COLOR_RED_3       0x00
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_3     0x00
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_3      0x00

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

		

#define GFX_SCHEME_NAME_4                       "text"
#define GFX_SCHEME_ALPHA_4                      79

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_4      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_4     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_4          0xFF
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_4        0xFF
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_4         0xFF

#define GFX_SCHEME_SECONDARY_COLOR_RED_4        0x40
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_4      0x40
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_4       0x40

#define GFX_SCHEME_DISABLED_COLOR_RED_4         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_4       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_4        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_4       0xF8
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_4     0xFC
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_4      0xF8

#define GFX_SCHEME_EMBOSS_SIZE_4                3

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_4     0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_4   0xC0
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_4    0xC0

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_4      0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_4    0x40
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_4     0x40

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_4     0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_4   0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_4    0x00

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_4   0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_4 0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_4  0xFF

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_4    0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_4  0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_4   0x40

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_4    0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_4  0x00
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_4   0x00

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_4    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_4  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_4   0xFF

#define GFX_SCHEME_FILL_STYLE_4                GFX_FILL_STYLE_COLOR
#define GFX_SCHEME_BACKGROUND_TYPE_4           GFX_BACKGROUND_NONE

		

#define GFX_SCHEME_NAME_5                       "screen_backgrnd"
#define GFX_SCHEME_ALPHA_5                      100

#define GFX_SCHEME_BACKGROUND_OFFSET_TOP_5      0
#define GFX_SCHEME_BACKGROUND_OFFSET_LEFT_5     0

#define GFX_SCHEME_PRIMARY_COLOR_RED_5          0x60
#define GFX_SCHEME_PRIMARY_COLOR_GREEN_5        0x5C
#define GFX_SCHEME_PRIMARY_COLOR_BLUE_5         0xF8

#define GFX_SCHEME_SECONDARY_COLOR_RED_5        0xF8
#define GFX_SCHEME_SECONDARY_COLOR_GREEN_5      0x48
#define GFX_SCHEME_SECONDARY_COLOR_BLUE_5       0x58

#define GFX_SCHEME_DISABLED_COLOR_RED_5         0xC0
#define GFX_SCHEME_DISABLED_COLOR_GREEN_5       0xC0
#define GFX_SCHEME_DISABLED_COLOR_BLUE_5        0xC0

#define GFX_SCHEME_BACKGROUND_COLOR_RED_5       0xD0
#define GFX_SCHEME_BACKGROUND_COLOR_GREEN_5     0xE0
#define GFX_SCHEME_BACKGROUND_COLOR_BLUE_5      0xF8

#define GFX_SCHEME_EMBOSS_SIZE_5                0

#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_RED_5     0xF8
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_GREEN_5   0x98
#define GFX_SCHEME_EMBOSS_LIGHT_COLOR_BLUE_5    0x78

#define GFX_SCHEME_EMBOSS_DARK_COLOR_RED_5      0xD8
#define GFX_SCHEME_EMBOSS_DARK_COLOR_GREEN_5    0xFC
#define GFX_SCHEME_EMBOSS_DARK_COLOR_BLUE_5     0x60

#define GFX_SCHEME_TEXT_PRIMARY_COLOR_RED_5     0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_GREEN_5   0x00
#define GFX_SCHEME_TEXT_PRIMARY_COLOR_BLUE_5    0x00

#define GFX_SCHEME_TEXT_SECONDARY_COLOR_RED_5   0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_GREEN_5 0xFF
#define GFX_SCHEME_TEXT_SECONDARY_COLOR_BLUE_5  0xFF

#define GFX_SCHEME_TEXT_DISABLED_COLOR_RED_5    0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_GREEN_5  0x40
#define GFX_SCHEME_TEXT_DISABLED_COLOR_BLUE_5   0x40

#define GFX_SCHEME_GRADIENT_START_COLOR_RED_5    0x98
#define GFX_SCHEME_GRADIENT_START_COLOR_GREEN_5  0xA4
#define GFX_SCHEME_GRADIENT_START_COLOR_BLUE_5   0xF8

#define GFX_SCHEME_GRADIENT_END_COLOR_RED_5    0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_GREEN_5  0xFF
#define GFX_SCHEME_GRADIENT_END_COLOR_BLUE_5   0xFF

#define GFX_SCHEME_FILL_STYLE_5                GFX_FILL_STYLE_GRADIENT_DOUBLE_HOR
#define GFX_SCHEME_BACKGROUND_TYPE_5           GFX_BACKGROUND_COLOR

		
/*** Screen IDs ***/
#define thermostat                 0 
	
#define mainmenu                 1 
	
#define screen_3D                 2 
	
#define flash_screen                 3 
	
/*** GFX GOL Button Definitions ***/
#define GFX_BUTTON_LEFT_0            57
#define GFX_BUTTON_TOP_0             179
#define GFX_BUTTON_RIGHT_0           141
#define GFX_BUTTON_BOTTOM_0          256
#define GFX_BUTTON_TEXT_0            "0x0"
#define GFX_BUTTON_ALIGNMENT_0       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_0          0
#define GFX_BUTTON_STATE_0           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_0     (GFX_RESOURCE_HDR*)&House_Blue_80_pressed
#define GFX_BUTTON_RELEASE_IMAGE_0   (GFX_RESOURCE_HDR*)&House_Blue_80
#define GFX_BUTTON_SCHEME_0          gfxScheme1
		
#define GFX_BUTTON_LEFT_1            359
#define GFX_BUTTON_TOP_1             176
#define GFX_BUTTON_RIGHT_1           448
#define GFX_BUTTON_BOTTOM_1          261
#define GFX_BUTTON_TEXT_1            "0x0"
#define GFX_BUTTON_ALIGNMENT_1       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_1          0
#define GFX_BUTTON_STATE_1           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_1     (GFX_RESOURCE_HDR*)&Down_Magenta_80_pressed
#define GFX_BUTTON_RELEASE_IMAGE_1   (GFX_RESOURCE_HDR*)&Down_Magenta_80
#define GFX_BUTTON_SCHEME_1          gfxScheme1
		
#define GFX_BUTTON_LEFT_2            359
#define GFX_BUTTON_TOP_2             17
#define GFX_BUTTON_RIGHT_2           447
#define GFX_BUTTON_BOTTOM_2          102
#define GFX_BUTTON_TEXT_2            "0x0"
#define GFX_BUTTON_ALIGNMENT_2       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_2          0
#define GFX_BUTTON_STATE_2           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_2     (GFX_RESOURCE_HDR*)&Up_Magenta_80_pressed
#define GFX_BUTTON_RELEASE_IMAGE_2   (GFX_RESOURCE_HDR*)&Up_Magenta_80
#define GFX_BUTTON_SCHEME_2          gfxScheme1
		
#define GFX_BUTTON_LEFT_3            276
#define GFX_BUTTON_TOP_3             125
#define GFX_BUTTON_RIGHT_3           378
#define GFX_BUTTON_BOTTOM_3          224
#define GFX_BUTTON_TEXT_3            "0x0"
#define GFX_BUTTON_ALIGNMENT_3       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_3          0
#define GFX_BUTTON_STATE_3           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_3     NULL
#define GFX_BUTTON_RELEASE_IMAGE_3   NULL
#define GFX_BUTTON_SCHEME_3          gfxScheme1
		
#define GFX_BUTTON_LEFT_4            84
#define GFX_BUTTON_TOP_4             127
#define GFX_BUTTON_RIGHT_4           182
#define GFX_BUTTON_BOTTOM_4          228
#define GFX_BUTTON_TEXT_4            "0x0"
#define GFX_BUTTON_ALIGNMENT_4       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_4          0
#define GFX_BUTTON_STATE_4           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_4     NULL
#define GFX_BUTTON_RELEASE_IMAGE_4   NULL
#define GFX_BUTTON_SCHEME_4          gfxScheme1
		
#define GFX_BUTTON_LEFT_5            8
#define GFX_BUTTON_TOP_5             189
#define GFX_BUTTON_RIGHT_5           82
#define GFX_BUTTON_BOTTOM_5          259
#define GFX_BUTTON_TEXT_5            "0x0"
#define GFX_BUTTON_ALIGNMENT_5       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_BUTTON_RADIUS_5          0
#define GFX_BUTTON_STATE_5           GFX_GOL_BUTTON_DRAW_STATE | GFX_GOL_BUTTON_NOPANEL_STATE
#define GFX_BUTTON_PRESS_IMAGE_5     (GFX_RESOURCE_HDR*)&House_Blue_80_pressed
#define GFX_BUTTON_RELEASE_IMAGE_5   (GFX_RESOURCE_HDR*)&House_Blue_80
#define GFX_BUTTON_SCHEME_5          gfxScheme1
		
/*** Button IDs ***/
#define Button8                  1000 
	
#define temp_dec_fan_fast                  1001 
	
#define temp_inc_fan_slow                  1002 
	
#define Button3                  1003 
	
#define Button2                  1004 
	
#define Button1                  1005 
	
/*** GFX GOL Scrollbar Definitions ***/
#define GFX_SCROLLBAR_LEFT_0            	172
#define GFX_SCROLLBAR_TOP_0             	191
#define GFX_SCROLLBAR_RIGHT_0           	401
#define GFX_SCROLLBAR_BOTTOM_0          	250
#define GFX_SCROLLBAR_STATE_0            GFX_GOL_SCROLLBAR_DRAW_STATE | GFX_GOL_SCROLLBAR_DRAW_THUMB_STATE | GFX_GOL_SCROLLBAR_SLIDER_MODE_STATE
#define GFX_SCROLLBAR_RANGE_0            5
#define GFX_SCROLLBAR_PAGE_0             1
#define GFX_SCROLLBAR_POS_0              2
#define GFX_SCROLLBAR_SCHEME_0           gfxScheme0
		
/*** Scrollbar IDs ***/
#define speedSlider                  5000 
	
/*** GFX GOL Button Definitions ***/
#define GFX_STATICTEXT_LEFT_0            347
#define GFX_STATICTEXT_TOP_0             108
#define GFX_STATICTEXT_RIGHT_0           447
#define GFX_STATICTEXT_BOTTOM_0          165
#define GFX_STATICTEXT_STATE_0          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_0            "0x31, 0x30, 0x30, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_0       GFX_ALIGN_HCENTER | GFX_ALIGN_TOP
#define GFX_STATICTEXT_SCHEME_0          gfxScheme4
		
#define GFX_STATICTEXT_LEFT_1            372
#define GFX_STATICTEXT_TOP_1             55
#define GFX_STATICTEXT_RIGHT_1           426
#define GFX_STATICTEXT_BOTTOM_1          89
#define GFX_STATICTEXT_STATE_1          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_1            "0x72, 0x70, 0x6d, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_1       GFX_ALIGN_LEFT | GFX_ALIGN_TOP
#define GFX_STATICTEXT_SCHEME_1          gfxScheme3
		
#define GFX_STATICTEXT_LEFT_2            410
#define GFX_STATICTEXT_TOP_2             199
#define GFX_STATICTEXT_RIGHT_2           444
#define GFX_STATICTEXT_BOTTOM_2          248
#define GFX_STATICTEXT_STATE_2          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_2            "0x2b, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_2       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_2          gfxScheme4
		
#define GFX_STATICTEXT_LEFT_3            133
#define GFX_STATICTEXT_TOP_3             202
#define GFX_STATICTEXT_RIGHT_3           159
#define GFX_STATICTEXT_BOTTOM_3          236
#define GFX_STATICTEXT_STATE_3          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_3            "0x2d, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_3       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_3          gfxScheme4
		
#define GFX_STATICTEXT_LEFT_4            359
#define GFX_STATICTEXT_TOP_4             89
#define GFX_STATICTEXT_RIGHT_4           424
#define GFX_STATICTEXT_BOTTOM_4          154
#define GFX_STATICTEXT_STATE_4          GFX_GOL_STATICTEXT_DRAW_STATE
#define GFX_STATICTEXT_TEXT_4            "0x31, 0x32, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_4       GFX_ALIGN_HCENTER | GFX_ALIGN_VCENTER
#define GFX_STATICTEXT_SCHEME_4          gfxScheme4
		
#define GFX_STATICTEXT_LEFT_5            354
#define GFX_STATICTEXT_TOP_5             21
#define GFX_STATICTEXT_RIGHT_5           441
#define GFX_STATICTEXT_BOTTOM_5          63
#define GFX_STATICTEXT_STATE_5          GFX_GOL_STATICTEXT_DRAW_STATE | GFX_GOL_STATICTEXT_NOBACKGROUND_STATE
#define GFX_STATICTEXT_TEXT_5            "0x53, 0x70, 0x65, 0x65, 0x64, 0x20, 0x0"
#define GFX_STATICTEXT_ALIGNMENT_5       GFX_ALIGN_LEFT | GFX_ALIGN_TOP
#define GFX_STATICTEXT_SCHEME_5          gfxScheme3
		
/*** static text IDs ***/
#define temp_string                  9000 
	
#define StaticText2                  9001 
	
#define StaticText4                  9002 
	
#define StaticText3                  9003 
	
#define speedString                  9004 
	
#define StaticText1                  9005 
	
/*** GFX GOL windows Definitions ***/
#define GFX_PICTURE_LEFT_0            31
#define GFX_PICTURE_TOP_0             28
#define GFX_PICTURE_RIGHT_0           173
#define GFX_PICTURE_BOTTOM_0          170
#define GFX_PICTURE_STATE_0          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_0       1
#define GFX_PICTURE_SCHEME_0          gfxScheme1
		
#define GFX_PICTURE_LEFT_1            235
#define GFX_PICTURE_TOP_1             30
#define GFX_PICTURE_RIGHT_1           311
#define GFX_PICTURE_BOTTOM_1          261
#define GFX_PICTURE_STATE_1          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_1       1
#define GFX_PICTURE_SCHEME_1          gfxScheme1
		
#define GFX_PICTURE_LEFT_2            0
#define GFX_PICTURE_TOP_2             1
#define GFX_PICTURE_RIGHT_2           478
#define GFX_PICTURE_BOTTOM_2          272
#define GFX_PICTURE_STATE_2          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_2       1
#define GFX_PICTURE_SCHEME_2          gfxScheme1
		
#define GFX_PICTURE_LEFT_3            12
#define GFX_PICTURE_TOP_3             6
#define GFX_PICTURE_RIGHT_3           324
#define GFX_PICTURE_BOTTOM_3          186
#define GFX_PICTURE_STATE_3          GFX_GOL_PICTURECONTROL_DRAW_STATE | GFX_GOL_PICTURECONTROL_HIDE_STATE
#define GFX_PICTURE_SCALE_3       1
#define GFX_PICTURE_SCHEME_3          gfxScheme1
		
#define GFX_PICTURE_LEFT_4            108
#define GFX_PICTURE_TOP_4             55
#define GFX_PICTURE_RIGHT_4           363
#define GFX_PICTURE_BOTTOM_4          218
#define GFX_PICTURE_STATE_4          GFX_GOL_PICTURECONTROL_DRAW_STATE
#define GFX_PICTURE_SCALE_4       1
#define GFX_PICTURE_SCHEME_4          gfxScheme1
		
/*** Pictures IDs ***/
#define fan                  12000 
	
#define thermometer                  12001 
	
#define Picture5                  12002 
	
#define picture3D                  12003 
	
#define flash_pic                  12004 
	



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
    GFX_GOL_BUTTON* pButton8Obj;
    GFX_GOL_BUTTON* ptemp_dec_fan_fastObj;
    GFX_GOL_BUTTON* ptemp_inc_fan_slowObj;
    GFX_GOL_BUTTON* pButton3Obj;
    GFX_GOL_BUTTON* pButton2Obj;
    GFX_GOL_BUTTON* pButton1Obj;
    GFX_GOL_SCROLLBAR* pspeedSliderObj;
    GFX_GOL_STATICTEXT* ptemp_stringObj;
    GFX_GOL_STATICTEXT* pStaticText2Obj;
    GFX_GOL_STATICTEXT* pStaticText4Obj;
    GFX_GOL_STATICTEXT* pStaticText3Obj;
    GFX_GOL_STATICTEXT* pspeedStringObj;
    GFX_GOL_STATICTEXT* pStaticText1Obj;
    GFX_GOL_PICTURECONTROL* pfanObj;
    GFX_GOL_PICTURECONTROL* pthermometerObj;
    GFX_GOL_PICTURECONTROL* pPicture5Obj;
    GFX_GOL_PICTURECONTROL* ppicture3DObj;
    GFX_GOL_PICTURECONTROL* pflash_picObj;
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
