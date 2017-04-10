/*******************************************************************************
  MPLAB Harmony System Configuration Header

  File Name:
    system_config.h

  Summary:
    Build-time configuration header for the system defined by this MPLAB Harmony
    project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options that are not instantiated
    until used by another MPLAB Harmony module or application.

    Created with MPLAB Harmony Version 1.09
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2015 released Microchip Technology Inc.  All rights reserved.

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

#ifndef _SYSTEM_CONFIG_H
#define _SYSTEM_CONFIG_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/
#include "bsp_config.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
/* Common System Service Configuration Options
*/
#define SYS_VERSION_STR           "1.09"
#define SYS_VERSION               10900

// *****************************************************************************
/* Clock System Service Configuration Options
*/
#define SYS_CLK_FREQ                        96000000ul
#define SYS_CLK_BUS_PERIPHERAL_1            48000000ul
#define SYS_CLK_BUS_REFERENCE_1             11294117ul
#define SYS_CLK_UPLL_BEFORE_DIV2_FREQ       96000000ul
#define SYS_CLK_CONFIG_PRIMARY_XTAL         12000000ul
#define SYS_CLK_CONFIG_SECONDARY_XTAL       32768ul
#define SYS_CLK_CONFIG_FREQ_ERROR_LIMIT     10
#define SYS_CLK_WAIT_FOR_SWITCH             true
#define SYS_CLK_ON_WAIT                     OSC_ON_WAIT_IDLE
   
/*** Interrupt System Service Configuration ***/
#define SYS_INT                     true

/*** Ports System Service Configuration ***/

#define SYS_PORT_A_ANSEL        0x0
#define SYS_PORT_A_TRIS         0xc6ff
#define SYS_PORT_A_LAT          0x0
#define SYS_PORT_A_ODC          0x400
#define SYS_PORT_A_CNPU         0x403
#define SYS_PORT_A_CNPD         0x0
#define SYS_PORT_A_CNEN         0x403

#define SYS_PORT_B_ANSEL        0xcfff
#define SYS_PORT_B_TRIS         0xffff
#define SYS_PORT_B_LAT          0x0
#define SYS_PORT_B_ODC          0x0
#define SYS_PORT_B_CNPU         0x3000
#define SYS_PORT_B_CNPD         0x0
#define SYS_PORT_B_CNEN         0x3000

#define SYS_PORT_D_ANSEL        0x0
#define SYS_PORT_D_TRIS         0xeff1
#define SYS_PORT_D_LAT          0x0
#define SYS_PORT_D_ODC          0x0
#define SYS_PORT_D_CNPU         0x0
#define SYS_PORT_D_CNPD         0x0
#define SYS_PORT_D_CNEN         0x0

#define SYS_PORT_E_ANSEL        0x0
#define SYS_PORT_E_TRIS         0x3ff
#define SYS_PORT_E_LAT          0x0
#define SYS_PORT_E_ODC          0x0
#define SYS_PORT_E_CNPU         0x0
#define SYS_PORT_E_CNPD         0x0
#define SYS_PORT_E_CNEN         0x0

#define SYS_PORT_G_ANSEL        0x3c0
#define SYS_PORT_G_TRIS         0x73c0
#define SYS_PORT_G_LAT          0x0
#define SYS_PORT_G_ODC          0x0
#define SYS_PORT_G_CNPU         0x0
#define SYS_PORT_G_CNPD         0x0
#define SYS_PORT_G_CNEN         0x0


// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/*** Timer Driver Configuration ***/
#define DRV_TMR_INTERRUPT_MODE             true
#define DRV_TMR_INSTANCES_NUMBER           3
#define DRV_TMR_CLIENTS_NUMBER             1

/*** Timer Driver 0 Configuration ***/
#define DRV_TMR_PERIPHERAL_ID_IDX0          TMR_ID_4
#define DRV_TMR_INTERRUPT_SOURCE_IDX0       INT_SOURCE_TIMER_4
#define DRV_TMR_INTERRUPT_VECTOR_IDX0       INT_VECTOR_T4
#define DRV_TMR_ISR_VECTOR_IDX0             _TIMER_4_VECTOR
#define DRV_TMR_INTERRUPT_PRIORITY_IDX0     INT_PRIORITY_LEVEL1
#define DRV_TMR_INTERRUPT_SUB_PRIORITY_IDX0 INT_SUBPRIORITY_LEVEL0
#define DRV_TMR_CLOCK_SOURCE_IDX0           DRV_TMR_CLKSOURCE_INTERNAL
#define DRV_TMR_PRESCALE_IDX0               TMR_PRESCALE_VALUE_256
#define DRV_TMR_OPERATION_MODE_IDX0         DRV_TMR_OPERATION_MODE_16_BIT
#define DRV_TMR_ASYNC_WRITE_ENABLE_IDX0     false
#define DRV_TMR_POWER_STATE_IDX0            SYS_MODULE_POWER_RUN_FULL

/*** Timer Driver 1 Configuration ***/
#define DRV_TMR_PERIPHERAL_ID_IDX1          TMR_ID_1
#define DRV_TMR_INTERRUPT_SOURCE_IDX1       INT_SOURCE_TIMER_1
#define DRV_TMR_INTERRUPT_VECTOR_IDX1       INT_VECTOR_T1
#define DRV_TMR_ISR_VECTOR_IDX1             _TIMER_1_VECTOR
#define DRV_TMR_INTERRUPT_PRIORITY_IDX1     INT_PRIORITY_LEVEL1
#define DRV_TMR_INTERRUPT_SUB_PRIORITY_IDX1 INT_SUBPRIORITY_LEVEL0
#define DRV_TMR_CLOCK_SOURCE_IDX1           DRV_TMR_CLKSOURCE_INTERNAL
#define DRV_TMR_PRESCALE_IDX1               TMR_PRESCALE_VALUE_1
#define DRV_TMR_OPERATION_MODE_IDX1         DRV_TMR_OPERATION_MODE_16_BIT
#define DRV_TMR_ASYNC_WRITE_ENABLE_IDX1     false
#define DRV_TMR_POWER_STATE_IDX1            SYS_MODULE_POWER_RUN_FULL

/*** Timer Driver 2 Configuration ***/
#define DRV_TMR_PERIPHERAL_ID_IDX2          TMR_ID_2
#define DRV_TMR_INTERRUPT_SOURCE_IDX2       INT_SOURCE_TIMER_3
#define DRV_TMR_INTERRUPT_VECTOR_IDX2       INT_VECTOR_T3
#define DRV_TMR_ISR_VECTOR_IDX2             _TIMER_3_VECTOR
#define DRV_TMR_INTERRUPT_PRIORITY_IDX2     INT_PRIORITY_LEVEL1
#define DRV_TMR_INTERRUPT_SUB_PRIORITY_IDX2 INT_SUBPRIORITY_LEVEL0
#define DRV_TMR_CLOCK_SOURCE_IDX2           DRV_TMR_CLKSOURCE_INTERNAL
#define DRV_TMR_PRESCALE_IDX2               TMR_PRESCALE_VALUE_1
#define DRV_TMR_OPERATION_MODE_IDX2         DRV_TMR_OPERATION_MODE_32_BIT
#define DRV_TMR_ASYNC_WRITE_ENABLE_IDX2     false
#define DRV_TMR_POWER_STATE_IDX2            SYS_MODULE_POWER_RUN_FULL

  #define  GFX_USE_DISPLAY_CONTROLLER_OTM2201A         

/*** Graphics Display Configuration ***/
#define DISP_ORIENTATION                        90
#define DISP_HOR_RESOLUTION                     176
#define DISP_VER_RESOLUTION                     220
#define DISP_DATA_WIDTH			                8
#define DISP_HOR_PULSE_WIDTH                    25
#define DISP_HOR_BACK_PORCH                     5
#define DISP_HOR_FRONT_PORCH                    10
#define DISP_VER_PULSE_WIDTH                    4
#define DISP_VER_BACK_PORCH                     0
#define DISP_VER_FRONT_PORCH                    2
#define DISP_INV_LSHIFT                         1
#define GFX_LCD_TYPE                            GFX_LCD_TFT
#define BACKLIGHT_ENABLE_LEVEL                  0
#define BACKLIGHT_DISABLE_LEVEL                 1
#define TCON_MODULE                             NULL
#define USE_TCON_MODULE                         0
#define GFX_USE_TCON_CUSTOM
// DOM-IGNORE-END

#define USE_8BIT_PMP


/*** I2S Driver Configuration ***/


#define DRV_I2S_INTERRUPT_MODE					true
#define DRV_I2S_CLIENTS_NUMBER					1
#define DRV_I2S_INSTANCES_NUMBER				1
#define DRV_I2S_STOP_IN_IDLE					false
#define DRV_I2S_PERIPHERAL_ID_IDX0				SPI_ID_1
#define DRV_I2S_USAGE_MODE_IDX0					DRV_I2S_MODE_MASTER
#define DRV_I2S_STOP_IN_IDLE_IDX0				false
#define SPI_BAUD_RATE_CLK_IDX0					SPI_BAUD_RATE_MCLK_CLOCK
#define DRV_I2S_BAUD_RATE                       44100
#define DRV_I2S_CLK_MODE_IDX0					DRV_I2S_CLOCK_MODE_IDLE_HIGH_EDGE_FALL
#define SPI_AUDIO_COMM_WIDTH_IDX0				SPI_AUDIO_COMMUNICATION_24DATA_32FIFO_32CHANNEL
#define SPI_AUDIO_TRANSMIT_MODE_IDX0			SPI_AUDIO_TRANSMIT_STEREO
#define SPI_INPUT_SAMPLING_PHASE_IDX0			SPI_INPUT_SAMPLING_PHASE_IN_MIDDLE
#define DRV_I2S_AUDIO_PROTOCOL_MODE_IDX0		DRV_I2S_AUDIO_I2S
#define DRV_I2S_TX_INT_SRC_IDX0					INT_SOURCE_SPI_1_TRANSMIT
#define DRV_I2S_RX_INT_SRC_IDX0					INT_SOURCE_SPI_1_RECEIVE
#define QUEUE_SIZE_TX_IDX0                      3
#define QUEUE_SIZE_RX_IDX0                      2
#define DRV_I2S_TX_DMA_CHANNEL_IDX0				DMA_CHANNEL_2
#define DRV_I2S_TX_DMA_SOURCE_IDX0				INT_SOURCE_DMA_2
#define DRV_I2S_POWER_STATE_IDX0				SYS_MODULE_POWER_RUN_FULL
#define DRV_I2S_QUEUE_DEPTH_COMBINED     		5


/*** Codec Driver Configuration ***/

#define DRV_AK4384_CLIENTS_NUMBER                           1 
#define DRV_AK4384_INSTANCES_NUMBER                         1
#define DRV_AK4384_INPUT_REFCLOCK    	                	6
#define DRV_AK4384_AUDIO_SAMPLING_RATE                      44100
#define DRV_AK4384_MCLK_SAMPLE_FREQ_MULTPLIER               (SYS_CLK_BUS_REFERENCE_1/DRV_AK4384_AUDIO_SAMPLING_RATE)
#define DRV_AK4384_BCLK_BIT_CLK_DIVISOR	                	4
#define DRV_AK4384_CONTROL_CLOCK                            1000
#define DRV_AK4384_TIMER_DRIVER_MODULE_INDEX                0
#define DRV_AK4384_TIMER_PERIPHERAL_BUS_FREQUENCY           SYS_CLK_BUS_PERIPHERAL_1
#define DRV_AK4384_TIMER_PERIOD                             (DRV_TMR_PRESCALE_IDX0 == 0x7)? \
                                                            (DRV_AK4384_TIMER_PERIPHERAL_BUS_FREQUENCY/(1<<(DRV_TMR_PRESCALE_IDX0+1))/DRV_AK4384_CONTROL_CLOCK): \
                                                            (DRV_AK4384_TIMER_PERIPHERAL_BUS_FREQUENCY/(1<<DRV_TMR_PRESCALE_IDX0)/DRV_AK4384_CONTROL_CLOCK)
#define DRV_AK4384_I2S_DRIVER_MODULE_INDEX_IDX0             DRV_I2S_INDEX_0
#define DRV_AK4384_VOLUME                                   120
#define DRV_AK4384_VOLUME_MIN                               0x0                                              
#define DRV_AK4384_VOLUME_MAX                               0xFF
#define DRV_AK4384_MCLK_MODE_MACRO                          DRV_AK4384_MCLK_MODE_MANUAL
#define DRV_AK4384_AUDIO_DATA_FORMAT_MACRO                  DRV_AK4384_AUDIO_DATA_FORMAT_24BIT_I2S

/* CODEC Driver Abstraction definition */
#define DRV_CODEC_INDEX_0                                   DRV_AK4384_INDEX_0
#define sysObjdrvCodec0                                     sysObj.drvak4384Codec0
#define DRV_CODEC_CHANNEL                                   DRV_AK4384_CHANNEL
#define DRV_CODEC_CHANNEL_LEFT                              DRV_AK4384_CHANNEL_LEFT
#define DRV_CODEC_CHANNEL_RIGHT                             DRV_AK4384_CHANNEL_RIGHT
#define DRV_CODEC_CHANNEL_LEFT_RIGHT                        DRV_AK4384_CHANNEL_LEFT_RIGHT
#define DRV_CODEC_BUFFER_HANDLE                             DRV_AK4384_BUFFER_HANDLE
#define DRV_CODEC_BUFFER_HANDLE_INVALID                     DRV_AK4384_BUFFER_HANDLE_INVALID
#define DRV_CODEC_BUFFER_EVENT_HANDLER                      DRV_AK4384_BUFFER_EVENT_HANDLER
#define DRV_CODEC_BUFFER_EVENT                              DRV_AK4384_BUFFER_EVENT
#define DRV_CODEC_BUFFER_EVENT_COMPLETE                     DRV_AK4384_BUFFER_EVENT_COMPLETE
#define DRV_CODEC_BUFFER_EVENT_ERROR                        DRV_AK4384_BUFFER_EVENT_ERROR
#define DRV_CODEC_BUFFER_EVENT_ABORT                        DRV_AK4384_BUFFER_EVENT_ABORT
#define DRV_CODEC_COMMAND_EVENT_HANDLER                     DRV_AK4384_COMMAND_EVENT_HANDLER
#define DRV_CODEC_VOLUME_MIN                                DRV_AK4384_VOLUME_MIN                                                                             
#define DRV_CODEC_VOLUME_MAX                                DRV_AK4384_VOLUME_MAX 

#define DRV_CODEC_Initialize                                DRV_AK4384_Initialize
#define DRV_CODEC_Deinitialize                              DRV_AK4384_Deinitialize
#define DRV_CODEC_Status                                    DRV_AK4384_Status
#define DRV_CODEC_Tasks                                     DRV_AK4384_Tasks
#define DRV_CODEC_Open                                      DRV_AK4384_Open
#define DRV_CODEC_Close                                     DRV_AK4384_Close
#define DRV_CODEC_BufferEventHandlerSet                     DRV_AK4384_BufferEventHandlerSet
#define DRV_CODEC_BufferAddWrite                            DRV_AK4384_BufferAddWrite
#define DRV_CODEC_BufferCombinedQueueSizeGet                DRV_AK4384_BufferCombinedQueueSizeGet
#define DRV_CODEC_BufferProcessedSizeGet                    DRV_AK4384_BufferProcessedSizeGet
#define DRV_CODEC_SamplingRateSet                           DRV_AK4384_SamplingRateSet
#define DRV_CODEC_SamplingRateGet                           DRV_AK4384_SamplingRateGet
#define DRV_CODEC_VolumeSet                                 DRV_AK4384_VolumeSet
#define DRV_CODEC_VolumeGet                                 DRV_AK4384_VolumeGet
#define DRV_CODEC_MuteOn                                    DRV_AK4384_MuteOn
#define DRV_CODEC_MuteOff                                   DRV_AK4384_MuteOff
#define DRV_CODEC_CommandEventHandlerSet                    DRV_AK4384_CommandEventHandlerSet


// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************



/*** GFX Library Configuration ***/

#define GFX_INSTANCES_NUMBER                            1
#define GFX_SELF_PREEMPTION_LEVEL                       0
#define GFX_CONFIG_COLOR_DEPTH                          16

#define GFX_CONFIG_FONT_CHAR_SIZE                       8
#define GFX_CONFIG_FONT_EXTERNAL_DISABLE
#define GFX_CONFIG_FONT_RAM_DISABLE
#define GFX_CONFIG_IMAGE_EXTERNAL_DISABLE
#define GFX_CONFIG_IMAGE_RAM_DISABLE
#define GFX_CONFIG_RLE_DECODE_DISABLE
#define GFX_CONFIG_IPU_DECODE_DISABLE
#define GFX_CONFIG_ALPHABLEND_DISABLE
#define GFX_CONFIG_PALETTE_DISABLE
#define GFX_CONFIG_FONT_ANTIALIASED_DISABLE
#define GFX_CONFIG_PALETTE_EXTERNAL_DISABLE
#define GFX_CONFIG_DOUBLE_BUFFERING_DISABLE
#define GFX_CONFIG_USE_KEYBOARD_DISABLE
#define GFX_CONFIG_USE_TOUCHSCREEN_DISABLE
#define GFX_CONFIG_FOCUS_DISABLE
#define GFX_malloc(size)                                    malloc(size)
#define GFX_free(pObj)                                      free(pObj)


// *****************************************************************************
/* BSP Configuration Options
*/
#define BSP_OSC_FREQUENCY 12000000




// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************

/*** Application Instance 0 Configuration ***/

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END


#endif // _SYSTEM_CONFIG_H
/*******************************************************************************
 End of File
*/

