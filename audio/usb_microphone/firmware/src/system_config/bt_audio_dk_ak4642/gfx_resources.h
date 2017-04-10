/*****************************************************************************
  AUTO-GENERATED CODE:  Graphics Resource Converter version: 4.00.39 BETA

  Company:
      Microchip Technology, Inc.
 
  File Name:
     gfx_resources.h
 
  Summary:
      This file is generated by the Microchip's Graphics Resource Converter.
  Description:
      This file is generated by the Graphics Resource Converter containing
      resources such as images and fonts that can be used by Microchip's
      Graphics Library, which is part of the MLA.
 *****************************************************************************/

// DOM-IGNORE-BEGIN
/*****************************************************************************
  Software License Agreement

  Copyright(c) 2013 Microchip Technology Inc.  All rights reserved.
  Microchip licenses to you the right to use, modify, copy and distribute
  Software only when embedded on a Microchip microcontroller or digital
  signal controller that is integrated into your product or third party
  product (pursuant to the sublicense terms in the accompanying license
  agreement).
 
  You should refer to the license agreement accompanying this Software
  for additional information regarding your rights and obligations.
 
  SOFTWARE AND DOCUMENTATION ARE PROVIDED �AS IS� WITHOUT WARRANTY OF ANY
  KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
  OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
  PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
  OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
  BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
  DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
  INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
  COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
  CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
  OR OTHER SIMILAR COSTS.
 *****************************************************************************/
// DOM-IGNORE-END

#ifndef GFX_RESOURCES_H_FILE
#define GFX_RESOURCES_H_FILE
/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include <gfx/gfx.h>
#include <stdint.h>

/*****************************************************************************
 * SECTION:  Graphics Library Firmware Check
 *****************************************************************************/
#if(GRAPHICS_LIBRARY_VERSION != 0x0400)
#warning "It is suggested to use Graphics Library version 4.00 with this version of GRC."
#endif



/*****************************************************************************
 * SECTION: Graphics Configuration
 * Overview:    This defines the size of the buffer used by font functions
 *              to retrieve font data from the external memory. The buffer
 *              size can be increased to accommodate large font sizes.
 *              The user must be aware of the expected glyph sizes of the 
 *              characters stored in the font table. 
 *              To modify the size used, declare this macro in the 
 *              GraphicsConfig.h file with the desired size.
 *
 * #define GFX_EXTERNAL_FONT_RASTER_BUFFER_SIZE     (78)
 *****************************************************************************/

/*****************************************************************************
 * This is an error check for the color depth
 *****************************************************************************/
#if (COLOR_DEPTH > 16)
#error "Color Depth needs to be 16 to correctly use these resources"
#endif



/*****************************************************************************
 * SECTION:  BITMAPS
 *****************************************************************************/

/*********************************
 * Bitmap Structure
 * Label: MCHP_LOGO
 * Description:  122x30 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR MCHP_LOGO;
#define MCHP_LOGO_WIDTH     (122)
#define MCHP_LOGO_HEIGHT    (30)
#define MCHP_LOGO_SIZE      (7326)
/*********************************
 * Bitmap Structure
 * Label: Mute
 * Description:  15x17 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR Mute;
#define Mute_WIDTH     (15)
#define Mute_HEIGHT    (17)
#define Mute_SIZE      (516)
/*********************************
 * Bitmap Structure
 * Label: VolumeMAX
 * Description:  18x15 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR VolumeMAX;
#define VolumeMAX_WIDTH     (18)
#define VolumeMAX_HEIGHT    (15)
#define VolumeMAX_SIZE      (546)
/*********************************
 * Bitmap Structure
 * Label: VolumeMIN
 * Description:  15x14 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR VolumeMIN;
#define VolumeMIN_WIDTH     (15)
#define VolumeMIN_HEIGHT    (14)
#define VolumeMIN_SIZE      (426)
/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * Installed Font Structure
 * Label: Arial12pt
 * Description:  Height: 16 pixels, 1 bit per pixel, Range: ' ' to '�'
 ***********************************/
extern const GFX_RESOURCE_HDR Arial12pt;
#define Arial12pt_SIZE    (6280)
/*********************************
 * Installed Font Structure
 * Label: Arial14pt
 * Description:  Height: 19 pixels, 1 bit per pixel, Range: ' ' to '�'
 ***********************************/
extern const GFX_RESOURCE_HDR Arial14pt;
#define Arial14pt_SIZE    (7351)
/*********************************
 * Installed Font Structure
 * Label: Arial20pt
 * Description:  Height: 26 pixels, 1 bit per pixel, Range: ' ' to '�'
 ***********************************/
extern const GFX_RESOURCE_HDR Arial20pt;
#define Arial20pt_SIZE    (11926)
#endif

