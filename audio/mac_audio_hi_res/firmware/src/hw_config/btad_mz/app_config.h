/*******************************************************************************
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app_config.h

  Summary:
    This header file provides prototypes and definitions derived from the
    system_config.h and should be included in the app.h in place of 
    system_config.h

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
*******************************************************************************/

//DOM-IGNORE-BEGIN
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
//DOM-IGNORE-END

#ifndef _APP_CONFIG_H
#define _APP_CONFIG_H

#include "system_config.h"

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
extern "C" {
#endif
//DOM-IGNORE-END


#define APP_ID_INPUT_TERMINAL  0x02
#define APP_ID_FEATURE_UNIT    0x0A
#define APP_ID_OUTPUT_TERMINAL 0x14
#define APP_ID_MIXER_UNIT      0x04
#define APP_ID_SELECTOR_UNIT   0x05
#define APP_ID_PROCESSING_UNIT 0x06
#define APP_ID_EXTENSION_UNIT  0x07
#define APP_ID_CLOCK_SOURCE    0x28
#define APP_ID_CLOCK_SELECT    0x11
    
#if DRV_AK4384_I2S_DRIVER_MODULE_INDEX_IDX0==DRV_I2S_INDEX_0
#define APP_USB_AUDIO_BUFFER_QUEUE_MAX_COUNT QUEUE_SIZE_TX_IDX0          
#elif DRV_AK4384_I2S_DRIVER_MODULE_INDEX_IDX0==DRV_I2S_INDEX_1
#define APP_USB_AUDIO_BUFFER_QUEUE_MAX_COUNT QUEUE_SIZE_TX_IDX1      
#elif DRV_AK4384_I2S_DRIVER_MODULE_INDEX_IDX0==DRV_I2S_INDEX_2
#define APP_USB_AUDIO_BUFFER_QUEUE_MAX_COUNT QUEUE_SIZE_TX_IDX2
#elif DRV_AK4384_I2S_DRIVER_MODULE_INDEX_IDX0==DRV_I2S_INDEX_3
#define APP_USB_AUDIO_BUFFER_QUEUE_MAX_COUNT QUEUE_SIZE_TX_IDX3
#elif DRV_AK4384_I2S_DRIVER_MODULE_INDEX_IDX0==DRV_I2S_INDEX_4
#define APP_USB_AUDIO_BUFFER_QUEUE_MAX_COUNT QUEUE_SIZE_TX_IDX4 
#elif DRV_AK4384_I2S_DRIVER_MODULE_INDEX_IDX0==DRV_I2S_INDEX_5
#define APP_USB_AUDIO_BUFFER_QUEUE_MAX_COUNT QUEUE_SIZE_TX_IDX5     
#endif
#define APP_AUDIO_MAX_FREQ                      DRV_I2S_BAUD_RATE
#define APP_AUDIO_MAX_SAMPLES                   (APP_AUDIO_MAX_FREQ/1000)
#define APP_NO_OF_SAMPLES_IN_A_USB_FRAME        (APP_AUDIO_MAX_SAMPLES+8) /*+1 sample for buffer overrun tuning*/

#define APP_MAKE_BUFFER_DMA_READY  __attribute__((coherent)) __attribute__((aligned(16)))

#define APP_LED1_ON()                                   BSP_LEDOn(BSP_LED_5)
#define APP_LED1_OFF()                                  BSP_LEDOff(BSP_LED_5)
#define APP_LED1_TOGGLE()                               BSP_LEDToggle(BSP_LED_5)
#define APP_LED2_ON()                                   BSP_LEDOn(BSP_LED_6)
#define APP_LED2_OFF()                                  BSP_LEDOff(BSP_LED_6)
#define APP_LED2_TOGGLE()                               BSP_LEDToggle(BSP_LED_6)
#define APP_LED3_ON()                                   BSP_LEDOn(BSP_LED_7)
#define APP_LED3_OFF()                                  BSP_LEDOff(BSP_LED_7)
#define APP_LED3_TOGGLE()                               BSP_LEDToggle(BSP_LED_7)
#define APP_LED4_ON()                                   BSP_LEDOn(BSP_LED_8)
#define APP_LED4_OFF()                                  BSP_LEDOff(BSP_LED_8)
#define APP_LED4_TOGGLE()                               BSP_LEDToggle(BSP_LED_8)
#define APP_LED5_ON()                                   BSP_LEDOn(BSP_LED_9)
#define APP_LED5_OFF()                                  BSP_LEDOff(BSP_LED_9)
#define APP_LED5_TOGGLE()                               BSP_LEDToggle(BSP_LED_9)

#define APP_READ_BUTTON1_STATE                          BSP_SwitchStateGet(BSP_SWITCH_1)
#define APP_READ_BUTTON2_STATE                          BSP_SwitchStateGet(BSP_SWITCH_2)
#define APP_READ_BUTTON3_STATE                          BSP_SwitchStateGet(BSP_SWITCH_3)
#define APP_READ_BUTTON4_STATE                          BSP_SwitchStateGet(BSP_SWITCH_4)
#define APP_READ_BUTTON5_STATE                          BSP_SwitchStateGet(BSP_SWITCH_5)    
    
#define APP_GFX_MENU_DRAW()                             GFX_MENU_DRAW()
#define APP_DISPLAYTASK()                               DispalyTasks()





//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif //_APP_CONFIG_H

/*******************************************************************************
 End of File
 */
