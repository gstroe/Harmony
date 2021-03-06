/*****************************************************************************
  AUTO-GENERATED CODE:  Graphics Resource Converter version: 4.00.39 BETA

  Company:
      Microchip Technology, Inc.
 
  File Name:
     gfx_resources_int.h
 
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

#ifndef GFX_RESOURCES_INT_H_FILE
#define GFX_RESOURCES_INT_H_FILE
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
 * SECTION:  Graphics Bitmap Padding Check
 *****************************************************************************/
#ifdef GFX_CONFIG_IMAGE_PADDING_DISABLE
#error These bitmap resources have been converted with padding of the horizontal lines, but GFX_CONFIG_IMAGE_PADDING_DISABLE is defined in system_config.h.
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
 * #define GFX_EXTERNAL_FONT_RASTER_BUFFER_SIZE     (38)
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
 * Label: mchpIcon0
 * Description:  32x32 pixels, 1-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR mchpIcon0;
#define mchpIcon0_WIDTH     (32)
#define mchpIcon0_HEIGHT    (32)
#define mchpIcon0_SIZE      (138)
/*********************************
 * Bitmap Structure
 * Label: bulboff
 * Description:  120x44 pixels, 4-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR bulboff;
#define bulboff_WIDTH     (120)
#define bulboff_HEIGHT    (44)
#define bulboff_SIZE      (2678)
/*********************************
 * Bitmap Structure
 * Label: bulbon
 * Description:  120x44 pixels, 4-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR bulbon;
#define bulbon_WIDTH     (120)
#define bulbon_HEIGHT    (44)
#define bulbon_SIZE      (2678)
/*********************************
 * Bitmap Structure
 * Label: mchpIcon
 * Description:  32x32 pixels, 1-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR mchpIcon;
#define mchpIcon_WIDTH     (32)
#define mchpIcon_HEIGHT    (32)
#define mchpIcon_SIZE      (138)
/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * TTF Font File Structure
 * Label: Times_New_Roman
 * Description:  Height: 19 pixels, 1 bit per pixel, Range: ' ' to ''
 ***********************************/
extern const GFX_RESOURCE_HDR Times_New_Roman;
#define Times_New_Roman_SIZE    (2881)
/*********************************
 * TTF Font File Structure
 * Label: Comic_Sans_MS
 * Description:  Height: 17 pixels, 1 bit per pixel, Range: ' ' to ''
 ***********************************/
extern const GFX_RESOURCE_HDR Comic_Sans_MS;
#define Comic_Sans_MS_SIZE    (2160)
/*********************************
 * TTF Font File Structure
 * Label: Bookman_Old_Style
 * Description:  Height: 18 pixels, 1 bit per pixel, Range: ' ' to ''
 ***********************************/
extern const GFX_RESOURCE_HDR Bookman_Old_Style;
#define Bookman_Old_Style_SIZE    (3038)
#endif

