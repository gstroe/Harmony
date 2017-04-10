/*$6*/



#ifndef __IMAGEDECODERCONFIG_H__
    #define __IMAGEDECODERCONFIG_H__

/*******************************************************************************
  Graphics LCC Demo Application Image Decoder Config

  File Name:
    ImageDecoderConfig.h

  Summary:
    LCC Demo application

  Description:
    This file contains the LCC application logic.
 *******************************************************************************/


// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

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

/* This is used to configure the image decoder */

/************* User configuration start *************/

/* Comment out the image formats which are not required */
//#define IMG_SUPPORT_BMP
#define IMG_SUPPORT_JPEG
//#define IMG_SUPPORT_GIF

/* Comment out if output has to be given through a callback function */

/* If defined, the code is optimized to use only the graphics driver, only 16-bit-565-color-format is supported */
//#define IMG_USE_ONLY_565_GRAPHICS_DRIVER_FOR_OUTPUT

/* If defined, the code is optimized to use only the MDD file system */

//#define IMG_USE_ONLY_MDD_FILE_SYSTEM_FOR_INPUT

/* If defined, the a loop callback function is called in every decoding loop so that application can do maintainance activities such as getting data, updating display, etc... */
#define IMG_SUPPORT_IMAGE_DECODER_LOOP_CALLBACK

/************* User configuration end *************/
#endif
