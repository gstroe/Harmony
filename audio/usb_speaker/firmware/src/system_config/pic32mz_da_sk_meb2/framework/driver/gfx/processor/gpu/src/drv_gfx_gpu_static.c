/********************************************************************************
  GFX GPU Driver Functions for Static Single Instance Driver

  Company:
    Microchip Technology Inc.

  File Name:
    drv_gfx_gpu_static.c

  Summary:
    Source code for the GFX GPU driver static implementation.

  Description:
    This file contains the source code for the static implementation of the
    GFX GPU driver.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2016 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute Software
only when embedded on a Microchip microcontroller or digital  signal  controller
that is integrated into your product or third party  product  (pursuant  to  the
sublicense terms in the accompanying license agreement).

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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "driver/gfx/processor/gpu/drv_gfx_gpu_static.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* GFX GPU Driver Instance Object

  Summary:
    Defines the object required for the maintenance of the hardware instance.

  Description:
    This defines the object required for the maintenance of the hardware
    instance. This object exists once per hardware instance of the peripheral.

  Remarks:
    None.
*/

typedef struct _DRV_GFX_GPU_OBJ
{
    /* Flag to indicate in use  */
    bool                                        inUse;

    /* Save the index of the driver */
    SYS_MODULE_INDEX                            drvIndex;

    /* Status of this driver instance */
    SYS_STATUS                                  status;

    /* Number of clients */
    uint32_t                                    nClients;

    DRV_GFX_INIT *                              initData;

} DRV_GFX_GPU_OBJ;

static DRV_GFX_GPU_OBJ        drvGPUObj;


// *****************************************************************************
// *****************************************************************************
// Section: GFX GPU Driver Interface Implementations
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/*
    Function:
      SYS_MODULE_OBJ DRV_GFX_GPU_Initialize(const SYS_MODULE_INDEX   moduleIndex,
                                            const SYS_MODULE_INIT    * const moduleInit)
    Summary:
      Initializes the GPU driver instance for the specified module index.

*/
    
SYS_MODULE_OBJ DRV_GFX_GPU_Initialize
(
    const SYS_MODULE_INDEX drvIndex,
    const SYS_MODULE_INIT * const init
)
{
    DRV_GFX_GPU_OBJ *dObj = &drvGPUObj;
    
    /* Object is valid, set it in use */
    dObj->inUse = true;
    dObj->initData = (DRV_GFX_INIT *) init;
    
    /* Update the status */
    dObj->status = SYS_STATUS_READY;

    /* Return the object structure */
    return ( (SYS_MODULE_OBJ)drvIndex );
}

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

*/
void DRV_GFX_GPU_RectangleFill(const SYS_MODULE_INDEX index,
                                DRV_GFX_GPU_BUFFER * destination,
                                DRV_GFX_GPU_RECTANGLE rectangle,
                                GFX_COLOR color,
                                DRV_GFX_GPU_BLEND blend)
{
}

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

*/
void DRV_GFX_GPU_LineDraw(const SYS_MODULE_INDEX index,
                            DRV_GFX_GPU_BUFFER *destination,
                            DRV_GFX_GPU_POINT start,
                            DRV_GFX_GPU_POINT end,
                            DRV_GFX_GPU_RECTANGLE *clip,
                            DRV_GFX_GPU_BUFFER_FORMAT colorSpace,
                            DRV_GFX_GPU_BLEND blend)
{
}

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

*/
void DRV_GFX_GPU_BlitCopy(const SYS_MODULE_INDEX index,
                            DRV_GFX_GPU_BUFFER *destination,
                            DRV_GFX_GPU_RECTANGLE *destination_rectangle,
                            DRV_GFX_GPU_BUFFER *source,
                            DRV_GFX_GPU_RECTANGLE *source_rectangle,
                            DRV_GFX_GPU_BLEND blend)
{
}

// *****************************************************************************
/* Function:
    void DRV_GFX_GPU_DrawStateSet(const SYS_MODULE_INDEX index,
                                        DRV_GFX_GPU_TRANSPARENCY transparency,
                                        DRV_GFX_GPU_BUFFER_FORMAT colorSpace,
                                        uint8_t foreground_rop,
                                        uint8_t background_rop)
  Summary:
    Set the global transparency mode.
    <p><b>Implementation:</b> Static</p>

*/
void DRV_GFX_GPU_DrawStateSet(const SYS_MODULE_INDEX index,
    DRV_GFX_GPU_TRANSPARENCY transparency,
    DRV_GFX_GPU_BUFFER_FORMAT colorSpace,
    uint8_t foreground_rop,
    uint8_t background_rop)
{
}

/*******************************************************************************
 End of File
*/
