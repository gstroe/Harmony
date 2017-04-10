/*******************************************************************************
 System Interrupts File

  File Name:
    system_interrupt.c

  Summary:
    Raw ISR definitions.

  Description:
    This file contains a definitions of the raw ISRs required to support the
    interrupt sub-system.

  Summary:
    This file contains source code for the interrupt vector functions in the
    system.

  Description:
    This file contains source code for the interrupt vector functions in the
    system.  It implements the system and part specific vector "stub" functions
    from which the individual "Tasks" functions are called for any modules
    executing interrupt-driven in the MPLAB Harmony system.

  Remarks:
    This file requires access to the systemObjects global data structure that
    contains the object handles to all MPLAB Harmony module objects executing
    interrupt-driven in the system.  These handles are passed into the individual
    module "Tasks" functions to identify the instance of the module to maintain.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2011-2014 released Microchip Technology Inc.  All rights reserved.

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

#include <xc.h>
#include <sys/attribs.h>
#include "app.h"
#include "system_definitions.h"

// *****************************************************************************
// *****************************************************************************
// Section: System Interrupt Vector Functions
// *****************************************************************************
// *****************************************************************************
void __ISR(_CHANGE_NOTICE_A_VECTOR, ipl5AUTO) _IntHandlerChangeNotification_PortA(void)
{
    //KEEP THIS:  Apps Button Interrupt Handler
    bool portA10State;
    portA10State = APP_READ_BUTTON2_STATE;  
    if(true == portA10State)
    { 
        appData.state = APP_DAC_VOLUME_DECREASE;      
    }      
    PLIB_INT_SourceFlagClear(INT_ID_0,INT_SOURCE_CHANGE_NOTICE_A);
}
void __ISR(_CHANGE_NOTICE_H_VECTOR, ipl5AUTO) _IntHandlerChangeNotification_PortH(void)
{ 
    //KEEP THIS:  Apps Button Interrupt Handler
    bool pinH0State;
    pinH0State = APP_READ_BUTTON4_STATE;        
    if(true == pinH0State)
    {
        appData.state = APP_DAC_MUTE;         
    }      
    PLIB_INT_SourceFlagClear(INT_ID_0,INT_SOURCE_CHANGE_NOTICE_H);
}
void __ISR(_CHANGE_NOTICE_K_VECTOR, ipl5AUTO) _IntHandlerChangeNotification_PortK(void)
{   
    //KEEP THIS:  Apps Button Interrupt Handler
    bool pink0State;
    pink0State = APP_READ_BUTTON1_STATE;
    if(true == pink0State)
    {
        appData.state = APP_DAC_VOLUME_INCREASE;         
    }     
    PLIB_INT_SourceFlagClear(INT_ID_0,INT_SOURCE_CHANGE_NOTICE_K);        
}


    
void __ISR(_TIMER_2_VECTOR, ipl1AUTO) IntHandlerDrvTmrInstance0(void)
{
    DRV_TMR_Tasks(sysObj.drvTmr0);
}

void __ISR(_TIMER_4_VECTOR, ipl1AUTO) IntHandlerDrvTmrInstance1(void)
{
    DRV_TMR_Tasks(sysObj.drvTmr1);
}
 
void __ISR(_DMA0_VECTOR, ipl5AUTO) _IntHandlerSysDmaCh0(void)
{          
    SYS_DMA_TasksISR(sysObj.sysDma, DMA_CHANNEL_0);
    
    // KEEP THE FOLLOWING LINE:
    syncLRClock();          // synchronize up I2S LRCLK   
}

void __ISR(_DMA1_VECTOR, ipl5AUTO) _IntHandlerSysDmaCh1(void)
{          
    SYS_DMA_TasksISR(sysObj.sysDma, DMA_CHANNEL_1);
}


	
	
	
void __ISR(_USB_VECTOR, ipl4AUTO) _IntHandlerUSBInstance0(void)
{
    DRV_USBHS_Tasks_ISR(sysObj.drvUSBObject);
}
            
void __ISR ( _USB_DMA_VECTOR,ipl4AUTO) _IntHandlerUSBInstance0_USBDMA ( void )
{
    DRV_USBHS_Tasks_ISR_USBDMA(sysObj.drvUSBObject);
}


 
/*******************************************************************************
 End of File
*/
