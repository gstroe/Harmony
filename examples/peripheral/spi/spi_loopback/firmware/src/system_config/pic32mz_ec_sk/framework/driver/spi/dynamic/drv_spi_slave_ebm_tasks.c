/*******************************************************************************
  SPI Driver Functions for Dynamic Enhanced Buffer Driver Tasks Functions

  Company:
    Microchip Technology Inc.

  File Name:
    drv_spi_dynamic_slave_ebm_tasks.c

  Summary:
    SPI driver tasks functions

  Description:
    The SPI device driver provides a simple interface to manage the SPI
    modules on Microchip microcontrollers. This file contains implemenation
    for the SPI driver.
    
  Remarks:
  This file is generated from framework/driver/spi/template/drv_spi_dynamic_slave_ebm_tasks.c.ftl
*******************************************************************************/

//DOM-IGNORE-BEGIN
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
//DOM-IGNORE-END

#include "driver/spi/src/dynamic/drv_spi_internal.h"
#include <stdbool.h>



            
int32_t DRV_SPI_SlaveEBMSend8BitPolled( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
    register SPI_MODULE_ID spiId = pDrvInstance->spiId;
    register DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
    if (currentJob == NULL)
    {
        return 0;
    }
    /* determine the maximum number of bytes that can be transmitted */
    uint8_t bufferBytes = PLIB_SPI_TX_8BIT_FIFO_SIZE(spiId) - PLIB_SPI_FIFOCountGet(spiId, SPI_FIFO_TYPE_TRANSMIT);
    size_t dataUnits = MIN(currentJob->dataLeftToTx, bufferBytes);
    currentJob->dataLeftToTx -= dataUnits;



    /* Set the buffer location of where to start transmitting from*/
    uint8_t *bufferLoc = &(currentJob->txBuffer[currentJob->dataTxed]);
    size_t counter;
    for (counter = 0; counter < dataUnits; counter++)
    {
        /* Add the data to the buffer */
        PLIB_SPI_BufferWrite(spiId, bufferLoc[counter]);
    }

    currentJob->dataTxed += dataUnits;
    
    return 0;
    
}

int32_t DRV_SPI_SlaveEBMReceive8BitPolled( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
    register SPI_MODULE_ID spiId = pDrvInstance->spiId;
    register DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;

    if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
    {
        return 0;
    }

    uint8_t bufferBytes = PLIB_SPI_FIFOCountGet(spiId, SPI_FIFO_TYPE_RECEIVE);
    size_t dataUnits = MIN(currentJob->dataLeftToRx, bufferBytes);
    bufferBytes -= dataUnits;
    currentJob->dataLeftToRx -= dataUnits;
    size_t dummyUnits = MIN(currentJob->dummyLeftToRx, bufferBytes);
    currentJob->dummyLeftToRx -= dummyUnits;

    uint8_t *bufferLoc = &(currentJob->rxBuffer[currentJob->dataRxed]);
    size_t counter;
    for (counter = 0; counter < dataUnits; counter++)
    {
        bufferLoc[counter] = PLIB_SPI_BufferRead(spiId);
    }

    for (counter = 0; counter < dummyUnits; counter++)
    {
        PLIB_SPI_BufferRead(spiId);
    }
    currentJob->dataRxed += dataUnits;

    return 0;    
}
            
int32_t DRV_SPI_SlaveEBMSend16BitPolled( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
    register SPI_MODULE_ID spiId = pDrvInstance->spiId;
    register DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
    if (currentJob == NULL)
    {
        return 0;
    }
    /* determine the maximum number of bytes that can be transmitted */
    uint8_t bufferBytes = (PLIB_SPI_TX_16BIT_FIFO_SIZE(spiId) - PLIB_SPI_FIFOCountGet(spiId, SPI_FIFO_TYPE_TRANSMIT)) << 1;
    size_t dataUnits = MIN(currentJob->dataLeftToTx, bufferBytes);
    currentJob->dataLeftToTx -= dataUnits;



    /* Set the buffer location of where to start transmitting from*/
    uint16_t *bufferLoc = (uint16_t*)&(currentJob->txBuffer[currentJob->dataTxed]);
    /* Convert the data units to 16 bit units */
    dataUnits >>=1;
    size_t counter;
    for (counter = 0; counter < dataUnits; counter++)
    {
        /* Add the data to the buffer */
        PLIB_SPI_BufferWrite16bit(spiId, bufferLoc[counter]);
    }

    currentJob->dataTxed += dataUnits<<1;
    
    return 0;
    
}

int32_t DRV_SPI_SlaveEBMReceive16BitPolled( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
    register SPI_MODULE_ID spiId = pDrvInstance->spiId;
    register DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;

    if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
    {
        return 0;
    }

    uint8_t bufferBytes = PLIB_SPI_FIFOCountGet(spiId, SPI_FIFO_TYPE_RECEIVE) << 1;
    size_t dataUnits = MIN(currentJob->dataLeftToRx, bufferBytes);
    bufferBytes -= dataUnits;
    currentJob->dataLeftToRx -= dataUnits;
    size_t dummyUnits = MIN(currentJob->dummyLeftToRx, bufferBytes);
    currentJob->dummyLeftToRx -= dummyUnits;

    uint16_t *bufferLoc = (uint16_t*)&(currentJob->rxBuffer[currentJob->dataRxed]);
    dataUnits >>=1;
    size_t counter;
    for (counter = 0; counter < dataUnits; counter++)
    {
        bufferLoc[counter] = PLIB_SPI_BufferRead16bit(spiId);
    }

    for (counter = 0; counter < dummyUnits; counter++)
    {
        PLIB_SPI_BufferRead16bit(spiId);
    }
    currentJob->dataRxed += dataUnits<<1;

    return 0;    
}
            
int32_t DRV_SPI_SlaveEBMSend32BitPolled( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
    register SPI_MODULE_ID spiId = pDrvInstance->spiId;
    register DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
    if (currentJob == NULL)
    {
        return 0;
    }
    /* determine the maximum number of bytes that can be transmitted */
    uint8_t bufferBytes = (PLIB_SPI_TX_32BIT_FIFO_SIZE(spiId) - PLIB_SPI_FIFOCountGet(spiId, SPI_FIFO_TYPE_TRANSMIT)) << 2;
    size_t dataUnits = MIN(currentJob->dataLeftToTx, bufferBytes);
    currentJob->dataLeftToTx -= dataUnits;



    /* Set the buffer location of where to start transmitting from*/
    uint32_t *bufferLoc = (uint32_t*)&(currentJob->txBuffer[currentJob->dataTxed]);
    /* Convert the data units to 32 bit units */
    dataUnits >>=2;
    size_t counter;
    for (counter = 0; counter < dataUnits; counter++)
    {
        /* Add the data to the buffer */
        PLIB_SPI_BufferWrite32bit(spiId, bufferLoc[counter]);
    }

    currentJob->dataTxed += dataUnits<<2;
    
    return 0;
    
}

int32_t DRV_SPI_SlaveEBMReceive32BitPolled( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
    register SPI_MODULE_ID spiId = pDrvInstance->spiId;
    register DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;

    if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
    {
        return 0;
    }

    uint8_t bufferBytes = PLIB_SPI_FIFOCountGet(spiId, SPI_FIFO_TYPE_RECEIVE) << 2;
    size_t dataUnits = MIN(currentJob->dataLeftToRx, bufferBytes);
    bufferBytes -= dataUnits;
    currentJob->dataLeftToRx -= dataUnits;
    size_t dummyUnits = MIN(currentJob->dummyLeftToRx, bufferBytes);
    currentJob->dummyLeftToRx -= dummyUnits;

    uint32_t *bufferLoc = (uint32_t*)&(currentJob->rxBuffer[currentJob->dataRxed]);
    dataUnits >>=2;
    size_t counter;
    for (counter = 0; counter < dataUnits; counter++)
    {
        bufferLoc[counter] = PLIB_SPI_BufferRead32bit(spiId);
    }

    for (counter = 0; counter < dummyUnits; counter++)
    {
        PLIB_SPI_BufferRead32bit(spiId);
    }
    currentJob->dataRxed += dataUnits<<2;

    return 0;    
}
