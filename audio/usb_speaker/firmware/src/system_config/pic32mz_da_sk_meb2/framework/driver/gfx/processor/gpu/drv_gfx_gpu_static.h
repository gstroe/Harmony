/*******************************************************************************
  GFX GPU Driver Interface Declarations for Static Single Instance Driver

  Company:
    Microchip Technology Inc.

  File Name:
    drv_gfx_gpu_static.h

  Summary:
    GFX GPU driver interface declarations for the static single instance driver.

  Description:
    The GPU device driver provides a simple interface to manage the GPU
    module on Microchip microcontrollers. This file defines the interface
    Declarations for the GPU driver.

  Remarks:
    Static interfaces incorporate the driver instance number within the names
    of the routines, eliminating the need for an object ID or object handle.

    Static single-open interfaces also eliminate the need for the open handle.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2016 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS  WITHOUT  WARRANTY  OF  ANY  KIND,
EITHER EXPRESS  OR  IMPLIED,  INCLUDING  WITHOUT  LIMITATION,  ANY  WARRANTY  OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A  PARTICULAR  PURPOSE.
IN NO EVENT SHALL MICROCHIP OR  ITS  LICENSORS  BE  LIABLE  OR  OBLIGATED  UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,  BREACH  OF  WARRANTY,  OR
OTHER LEGAL  EQUITABLE  THEORY  ANY  DIRECT  OR  INDIRECT  DAMAGES  OR  EXPENSES
INCLUDING BUT NOT LIMITED TO ANY  INCIDENTAL,  SPECIAL,  INDIRECT,  PUNITIVE  OR
CONSEQUENTIAL DAMAGES, LOST  PROFITS  OR  LOST  DATA,  COST  OF  PROCUREMENT  OF
SUBSTITUTE  GOODS,  TECHNOLOGY,  SERVICES,  OR  ANY  CLAIMS  BY  THIRD   PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE  THEREOF),  OR  OTHER  SIMILAR  COSTS.
*******************************************************************************/
//DOM-IGNORE-END

#ifndef _DRV_GFX_GPU_H
#define _DRV_GFX_GPU_H


// *****************************************************************************
// *****************************************************************************
// Section: File includes
// *****************************************************************************
// *****************************************************************************
/* Note:  A file that maps the interface definitions above to appropriate static
          implementations (depending on build mode) is included at the bottom of
          this file.
*/

#include "system_config.h"
#include "driver/driver_common.h"
#include "system/common/sys_module.h"
#include "driver/gfx/gfx_common.h"

#ifdef __cplusplus
    extern "C" {
#endif
        
typedef struct
{
} DRV_GFX_GPU_INIT;

typedef enum
{
    DRV_GFX_GPU_RGBA8888,
    DRV_GFX_GPU_BGRA8888,
    DRV_GFX_GPU_RGB565,
    DRV_GFX_GPU_BGR565,
    DRV_GFX_GPU_RGBA4444,
    DRV_GFX_GPU_BGRA4444,
    DRV_GFX_GPU_A8,
    DRV_GFX_GPU_YUYV,
    DRV_GFX_GPU_UYVY
} DRV_GFX_GPU_BUFFER_FORMAT;

typedef enum
{
    DRV_GFX_GPU_0,
    DRV_GFX_GPU_90,
    DRV_GFX_GPU_180,
    DRV_GFX_GPU_270
} DRV_GFX_GPU_ORIENTATION;

// *****************************************************************************
/* GPU Rectangle Definitions

  Summary:
    Structure holding the blending options.

  Description:
    This structure defines of the blending options. S and D
    represent source and destination color channels and Sa and Da represent the source and destination alpha channels.

  Remarks:
      N2D_BLEND_NONE

          S, i.e. no blending.
      N2D_BLEND_SRC_OVER

          S + (1 - Sa) * D
      N2D_BLEND_DST_OVER

          (1 - Da) * S + D
      N2D_BLEND_SRC_IN

          Da * S
      N2D_BLEND_DST_IN

          Sa * D
      N2D_BLEND_SCREEN

          S + D - S * D
      N2D_BLEND_MULTIPLY

          S * (1 - Da) + D * (1 - Sa) + S * D
      N2D_BLEND_ADDITIVE

          S + D
      N2D_BLEND_SUBTRACT

          D * (1 - S)

*/
typedef enum
{
    DRV_GFX_GPU_BLEND_NONE,
    DRV_GFX_GPU_BLEND_SRC_OVER,
    DRV_GFX_GPU_BLEND_DST_OVER,
    DRV_GFX_GPU_BLEND_SRC_IN,
    DRV_GFX_GPU_BLEND_DST_IN,
    DRV_GFX_GPU_BLEND_SCREEN,
    DRV_GFX_GPU_BLEND_MULTIPLY,
    DRV_GFX_GPU_BLEND_ADDITIVE,
    DRV_GFX_GPU_BLEND_SUBTRACT,
} DRV_GFX_GPU_BLEND;


typedef enum
{
    DRV_GFX_GPU_TRANSPARENCY_NONE,
    DRV_GFX_GPU_TRANSPARENCY_SOURCE,
    DRV_GFX_GPU_TRANSPARENCY_DESTINATION,
} DRV_GFX_GPU_TRANSPARENCY;

typedef struct
{
    uint32_t x;
    uint32_t y;
} DRV_GFX_GPU_POINT;

typedef struct
{
    uint32_t x;
    uint32_t y;
    uint32_t width;
    uint32_t height;
} DRV_GFX_GPU_RECTANGLE;

typedef struct
{
    uint32_t width;
    uint32_t height;
    uint32_t stride;
    DRV_GFX_GPU_BUFFER_FORMAT format;
    DRV_GFX_GPU_ORIENTATION orientation;
    void *memory;
} DRV_GFX_GPU_BUFFER;

// *****************************************************************************
// *****************************************************************************
// Section: Interface Headers for the Static Driver
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
  Function:
    SYS_MODULE_OBJ DRV_GFX_GPU_Initialize(const SYS_MODULE_INDEX   moduleIndex,
                                          const SYS_MODULE_INIT    * const moduleInit)
  Summary:
    Initializes the GPU driver instance for the specified module index.

  Description:
    This routine initializes the GPU Driver instance for the specified driver
    instance, making it ready for clients to use it. The initialization
    routine is specified by the MHC parameters.

  Precondition:
    None.

  Parameters:
    None.

  Returns:
    None.

  Remarks:
    This routine must be called before any other GPU routine is called.
    This routine should only be called once during system initialization.
*/
SYS_MODULE_OBJ DRV_GFX_GPU_Initialize(const SYS_MODULE_INDEX   moduleIndex,
                                       const SYS_MODULE_INIT    * const moduleInit);

// *****************************************************************************
/* Function:
    void DRV_GFX_GPU_RectangleFill(const SYS_MODULE_INDEX index,
           DRV_GFX_GPU_BUFFER * destination,
           DRV_GFX_GPU_RECTANGLE rectangle,
           GFX_COLOR color,
           DRV_GFX_GPU_BLEND blend)

  Summary:
    Fill a (partial) buffer with a specified color.
    <p><b>Implementation:</b> Static</p>

  Description:
    This routine fills an entire buffer or a partial rectangle of a buffer with a specific color.

  Precondition:
    DRV_GFX_GPU_Initialize has been called.

  Parameters:
    None.

  Returns:
    None.

  Remarks:
    This function will wait until the hardware is complete, i.e. it is synchronous

*/
void DRV_GFX_GPU_RectangleFill(const SYS_MODULE_INDEX index,
                                DRV_GFX_GPU_BUFFER * destination,
                                DRV_GFX_GPU_RECTANGLE rectangle,
                                GFX_COLOR color,
                                DRV_GFX_GPU_BLEND blend);

// *****************************************************************************
/* Function:
    void DRV_GFX_GPU_LineDraw(const SYS_MODULE_INDEX index,
                                DRV_GFX_GPU_BUFFER *destination,
                                DRV_GFX_GPU_POINT start,
                                DRV_GFX_GPU_POINT end,
                                DRV_GFX_GPU_RECTANGLE *clip,
                                DRV_GFX_GPU_BUFFER_FORMAT colorSpace,
                                DRV_GFX_GPU_BLEND blend)

  Summary:
    Draws a line with a specific color.
    <p><b>Implementation:</b> Static</p>

  Description:
    This routine draws a line with a specific color. The last pixel of the line will not be drawn.

  Precondition:
    DRV_GFX_GPU_Initialize has been called.

  Parameters:
    None.

  Returns:
    None.

  Remarks:

*/
void DRV_GFX_GPU_LineDraw(const SYS_MODULE_INDEX index,
                            DRV_GFX_GPU_BUFFER *destination,
                            DRV_GFX_GPU_POINT start,
                            DRV_GFX_GPU_POINT end,
                            DRV_GFX_GPU_RECTANGLE *clip,
                            DRV_GFX_GPU_BUFFER_FORMAT colorSpace,
                            DRV_GFX_GPU_BLEND blend);

// *****************************************************************************
/* Function:
    void DRV_GFX_GPU_BlitCopy(const SYS_MODULE_INDEX index,
                                DRV_GFX_GPU_BUFFER *destination,
                                DRV_GFX_GPU_RECTANGLE *destination_rectangle,
                                DRV_GFX_GPU_BUFFER *source,
                                DRV_GFX_GPU_RECTANGLE *source_rectangle,
                                DRV_GFX_GPU_BLEND blend)

  Summary:
    Copy a source buffer to the the destination buffer.
    <p><b>Implementation:</b> Static</p>

  Description:
    Copies a source buffer to the the destination buffer.

  Precondition:
    DRV_GFX_GPU_Initialize has been called.

  Parameters:
    None.

  Returns:
    None.

  Remarks:
*/
void DRV_GFX_GPU_BlitCopy(const SYS_MODULE_INDEX index,
                            DRV_GFX_GPU_BUFFER *destination,
                            DRV_GFX_GPU_RECTANGLE *destination_rectangle,
                            DRV_GFX_GPU_BUFFER *source,
                            DRV_GFX_GPU_RECTANGLE *source_rectangle,
                            DRV_GFX_GPU_BLEND blend);

// *****************************************************************************
/* Function:
    void DRV_GFX_GPU_TransparencySet(const SYS_MODULE_INDEX index,
                                        DRV_GFX_GPU_TRANSPARENCY transparency,
                                        DRV_GFX_GPU_BUFFER_FORMAT colorSpace,
                                        uint8_t foreground_rop,
                                        uint8_t background_rop)
  Summary:
    Set the global transparency mode.
    <p><b>Implementation:</b> Static</p>

  Description:
    This routine sets the transparency mode for subsequent draw calls.

  Precondition:
    DRV_GFX_GPU_Initialize has been called.

  Parameters:
    None.

  Returns:
    None.

  Remarks:

*/
void DRV_GFX_GPU_DrawStateSet(const SYS_MODULE_INDEX index,
    DRV_GFX_GPU_TRANSPARENCY transparency,
    DRV_GFX_GPU_BUFFER_FORMAT colorSpace,
    uint8_t foreground_rop,
    uint8_t background_rop);


// ****************************************************************************
// ****************************************************************************
// Section: Included Files (continued)
// ****************************************************************************
// ****************************************************************************
/*  The files included below map the interface definitions above to appropriate
    static implementations, depending on build mode.
*/

#ifdef __cplusplus
    }
#endif
    
#endif // #ifndef _DRV_GFX_GPU_H
/*******************************************************************************
 End of File
*/
