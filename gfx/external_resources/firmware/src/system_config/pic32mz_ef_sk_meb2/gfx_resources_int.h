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
 * Label: Rockies
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR Rockies;
#define Rockies_WIDTH     (480)
#define Rockies_HEIGHT    (288)
#define Rockies_SIZE      (276486)
/*********************************
 * Bitmap Structure
 * Label: Splash
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR Splash;
#define Splash_WIDTH     (480)
#define Splash_HEIGHT    (288)
#define Splash_SIZE      (276486)
/*********************************
 * Bitmap Structure
 * Label: right
 * Description:  80x79 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR right;
#define right_WIDTH     (80)
#define right_HEIGHT    (79)
#define right_SIZE      (12646)
/*********************************
 * Bitmap Structure
 * Label: left
 * Description:  80x79 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR left;
#define left_WIDTH     (80)
#define left_HEIGHT    (79)
#define left_SIZE      (12646)
/*********************************
 * Bitmap Structure
 * Label: home
 * Description:  68x68 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR home;
#define home_WIDTH     (68)
#define home_HEIGHT    (68)
#define home_SIZE      (9254)
/*********************************
 * Bitmap Structure
 * Label: aboutdemo
 * Description:  480x272 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR aboutdemo;
#define aboutdemo_WIDTH     (480)
#define aboutdemo_HEIGHT    (272)
#define aboutdemo_SIZE      (261126)
/*********************************
 * Bitmap Structure
 * Label: screen1_new
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
extern const GFX_RESOURCE_HDR screen1_new;
#define screen1_new_WIDTH     (480)
#define screen1_new_HEIGHT    (288)
#define screen1_new_SIZE      (276486)
/*****************************************************************************
 * SECTION:  JPEGS
 *****************************************************************************/

/*********************************
 * JPEG Structure
 * Label: MacBethChart
 * Description:  440x264 pixels
 ***********************************/
extern const GFX_RESOURCE_HDR MacBethChart;
#define MacBethChart_WIDTH     (440)
#define MacBethChart_HEIGHT    (264)
#define MacBethChart_SIZE      (9677)
/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * TTF Font File Structure
 * Label: Arial
 * Description:  Height: 26 pixels, 1 bit per pixel, Range: ' ' to ''
 ***********************************/
extern const GFX_RESOURCE_HDR Arial;
#define Arial_SIZE    (4968)
/*********************************
 * TTF Font File Structure
 * Label: Bernard_MT_Condensed
 * Description:  Height: 25 pixels, 1 bit per pixel, Range: ' ' to ''
 ***********************************/
extern const GFX_RESOURCE_HDR Bernard_MT_Condensed;
#define Bernard_MT_Condensed_SIZE    (4317)
#endif

