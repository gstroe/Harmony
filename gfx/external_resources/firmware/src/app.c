/*******************************************************************************
  MPLAB Harmony Application Source File
  
  Company:
    Microchip Technology Inc.
  
  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It 
    implements the logic of the application's state machine and it may call 
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
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

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
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


// *****************************************************************************
// *****************************************************************************
// Section: Included Files 
// *****************************************************************************
// *****************************************************************************

#include "app.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.
    
    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback funtions.
*/

GFX_STATUS GFX_ExternalResourceCallback(
                                GFX_RESOURCE_HDR *pResource,
                                uint32_t offset,
                                uint16_t nCount,
                                void     *pBuffer);

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary local functions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.State = APP_STATE_INIT;
    
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Tasks ( void )
{
    /* Check the application's current state. */
    switch ( appData.State )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
            appData.State = APP_STATE_CHECK_DRVR_STATE;
            break;
        /* TODO: implement your application state machine.*/             
        case APP_STATE_CHECK_DRVR_STATE:
             if ( GFX_Status (sysObj.gfxObject0) == SYS_STATUS_READY ){
                   appData.State = APP_STATE_TOUCH_INIT; // Mihai
                    
             }else
            {
                 appData.LastError=1;
             };
            break;
        case APP_STATE_TOUCH_INIT:
            appData.State = APP_STATE_GFX_SETUP;
            break;
        case APP_STATE_GFX_SETUP:
//                GFX_GOL_MessageCallbackSet(GFX_INDEX_0, &GFX_GOL_MessageCallback);
//                GFX_GOL_DrawCallbackSet(GFX_INDEX_0, &GFX_GOL_DrawCallback);
//                appData.StartTime = tick;
                //usbData.TimeFix =tick_timer;
                appData.State =  APP_STATE_DONE;
                break;
        case APP_STATE_DONE:   
                break;

        /* The default state should never be executed. */
        default:
        {
            /* TODO: Handle error in application's state machine. */
            break;
        }
    }
}
 

/******************************************************************************
  Function:
    GFX_STATUS GFX_ExternalResourceCallback(
                                GFX_RESOURCE_HDR *pResource,
                                uint32_t offset,
                                uint16_t nCount,
                                void     *pBuffer)

  Remarks:
    See prototype in gfx_primitive.h
 */
GFX_STATUS GFX_ExternalResourceCallback(
                                GFX_RESOURCE_HDR *pResource,
                                uint32_t offset,
                                uint16_t nCount,
                                void     *pBuffer)
{
    uint32_t flashAddress;

    // get the address in external memory
    // this depends on the type of the resource
    if ( (pResource->type & GFX_RESOURCE_TYPE_MCHP_MBITMAP) == GFX_RESOURCE_TYPE_MCHP_MBITMAP
            || (pResource->type & GFX_RESOURCE_TYPE_JPEG) == GFX_RESOURCE_TYPE_JPEG ) {
        // Image
        flashAddress = pResource->resource.image.location.extAddress;
    } else if ( (pResource->type & GFX_RESOURCE_TYPE_FONT) == GFX_RESOURCE_TYPE_FONT) {
        // Font
        flashAddress = pResource->resource.font.location.extAddress;
    } else if ( (pResource->type & GFX_RESOURCE_TYPE_PALETTE) == GFX_RESOURCE_TYPE_PALETTE) {
        // Palette
        flashAddress = pResource->resource.palette.location.extAddress;
    } else if ( (pResource->type & GFX_RESOURCE_TYPE_BINARY) == GFX_RESOURCE_TYPE_BINARY) {
        // Binary
        flashAddress = pResource->resource.binary.location.extAddress;
    } else {
        // some error message here ?
        // Nop added for debug
        Nop();
    }

    // the request comes with an offset for the resource flash address,
    // some resources contain more than one piece of information,
    // for example and image 8bpp contains a palette inside
    flashAddress += offset;

    // read the external memory data into the pBuffer
    SST26ReadArray(flashAddress, pBuffer, nCount);

    return GFX_STATUS_SUCCESS;
}


/*******************************************************************************
 End of File
 */
