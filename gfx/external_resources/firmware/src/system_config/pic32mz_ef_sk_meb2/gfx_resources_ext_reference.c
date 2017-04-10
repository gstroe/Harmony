/*****************************************************************************
  AUTO-GENERATED CODE:  Graphics Resource Converter version: 4.00.39 BETA

  Company:
      Microchip Technology, Inc.
 
  File Name:
     gfx_resources_ext_reference.c
 
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
 * SECTION:  Graphics Configuration: Bitmap Check
 *****************************************************************************/

#ifdef GFX_CONFIG_IMAGE_EXTERNAL_DISABLE
#error The GFX_CONFIG_IMAGE_EXTERNAL_DISABLE is defined in system_config.h header file.
#endif


/*****************************************************************************
 * SECTION:  BITMAPS
 *****************************************************************************/

/*********************************
 * Bitmap Structure
 * Label: AutumnGass
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
const GFX_RESOURCE_HDR AutumnGass =
{
    .type = (GFX_RESOURCE_MEMORY_EXTERNAL | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.extAddress = (uint32_t) 0x00000000,
    .resource.image.width = 480,
    .resource.image.height = 288,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 276484,
    .resource.image.colorDepth = 16,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};

/*********************************
 * Bitmap Structure
 * Label: ParkTrees
 * Description:  453x272 pixels, 16-bits per pixel
 ***********************************/
const GFX_RESOURCE_HDR ParkTrees =
{
    .type = (GFX_RESOURCE_MEMORY_EXTERNAL | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.extAddress = (uint32_t) 0x00043800,
    .resource.image.width = 453,
    .resource.image.height = 272,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 246436,
    .resource.image.colorDepth = 16,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};

/*********************************
 * Bitmap Structure
 * Label: Wheats
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
const GFX_RESOURCE_HDR Wheats =
{
    .type = (GFX_RESOURCE_MEMORY_EXTERNAL | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.extAddress = (uint32_t) 0x0007FAA0,
    .resource.image.width = 480,
    .resource.image.height = 288,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 276484,
    .resource.image.colorDepth = 16,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};

/*********************************
 * Bitmap Structure
 * Label: FalseCreek
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
const GFX_RESOURCE_HDR FalseCreek =
{
    .type = (GFX_RESOURCE_MEMORY_EXTERNAL | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.extAddress = (uint32_t) 0x000C32A0,
    .resource.image.width = 480,
    .resource.image.height = 288,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 276484,
    .resource.image.colorDepth = 16,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};

/*********************************
 * Bitmap Structure
 * Label: Fishes
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
const GFX_RESOURCE_HDR Fishes =
{
    .type = (GFX_RESOURCE_MEMORY_EXTERNAL | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.extAddress = (uint32_t) 0x00106AA0,
    .resource.image.width = 480,
    .resource.image.height = 288,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 276484,
    .resource.image.colorDepth = 16,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};

/*********************************
 * Bitmap Structure
 * Label: ColorPalette
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
const GFX_RESOURCE_HDR ColorPalette =
{
    .type = (GFX_RESOURCE_MEMORY_EXTERNAL | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.extAddress = (uint32_t) 0x0014A2A0,
    .resource.image.width = 480,
    .resource.image.height = 288,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 276484,
    .resource.image.colorDepth = 16,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};

/*********************************
 * Bitmap Structure
 * Label: Sherwood
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
const GFX_RESOURCE_HDR Sherwood =
{
    .type = (GFX_RESOURCE_MEMORY_EXTERNAL | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.extAddress = (uint32_t) 0x0018DAA0,
    .resource.image.width = 480,
    .resource.image.height = 288,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 276484,
    .resource.image.colorDepth = 16,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};

/*********************************
 * Bitmap Structure
 * Label: SnowyHills
 * Description:  480x288 pixels, 16-bits per pixel
 ***********************************/
const GFX_RESOURCE_HDR SnowyHills =
{
    .type = (GFX_RESOURCE_MEMORY_EXTERNAL | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.extAddress = (uint32_t) 0x001D12A0,
    .resource.image.width = 480,
    .resource.image.height = 288,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 276484,
    .resource.image.colorDepth = 16,
    .resource.image.type = 0x00,
    .resource.image.paletteID = 0x0000
};

