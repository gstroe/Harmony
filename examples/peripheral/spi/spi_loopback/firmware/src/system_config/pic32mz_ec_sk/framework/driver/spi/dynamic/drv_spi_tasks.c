/*******************************************************************************
  SPI Driver Functions for Dynamic Driver Tasks Functions

  Company:
    Microchip Technology Inc.

  File Name:
    drv_spi_dynamic_tasks.c

  Summary:
    SPI driver tasks functions

  Description:
    The SPI device driver provides a simple interface to manage the SPI
    modules on Microchip microcontrollers. This file contains implemenation
    for the SPI driver.
    
  Remarks:
  This file is generated from framework/driver/spi/template/drv_spi_dynamic_tasks.c.ftl
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



int32_t DRV_SPI_PolledMasterEBM8BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )    
{
    bool continueLoop;
    
    do {
        
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
        /* Check for a new task */
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;

            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Check the baud rate.  If its different set the new baud rate*/
            if (pClient->baudRate != pDrvInstance->currentBaudRate)
            {
                PLIB_SPI_BaudRateSet( spiId , SYS_CLK_PeripheralFrequencyGet(pDrvInstance->spiClk), pClient->baudRate );
                pDrvInstance->currentBaudRate = pClient->baudRate;
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }

                
        continueLoop = false;
        /* Execute the sub tasks */

        DRV_SPI_PolledErrorTasks(pDrvInstance);
        
        /* Figure out how many bytes are left to be received */
        size_t bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        // Check to see if we have any data left to receive and update the bytes left.

        if (bytesLeft != 0)
        {
            DRV_SPI_MasterEBMReceive8BitPolled(pDrvInstance);
            bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        }
        
        if 
            (currentJob->dataLeftToTx +currentJob->dummyLeftToTx != 0)
        {
            DRV_SPI_MasterEBMSend8BitPolled(pDrvInstance);
        }
        
        if (bytesLeft == 0)
        {
                    /* Job is complete*/
                    currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
                    /* Call the job complete call back*/
                    if (currentJob->completeCB != NULL)
                    {
                        (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Call the operation complete call back.  This is different than the
                       job complete callback.  This can be used to modify the Slave Select line.
                       The job complete callback can be used to free a client that is blocked 
                       waiting for complete*/
                    DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
                    if (pClient->operationEnded != NULL)
                    {
                        (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Return the job back to the free queue*/
                    if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
                    {
                        SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                        return 0;
                    }
                    /* Clean up */
                    pDrvInstance->currentJob = NULL;
                }

    
    
    } while(continueLoop);
    return 0;
}
int32_t DRV_SPI_PolledMasterRM8BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )    
{
    bool continueLoop;
    uint8_t counter = 0;
    uint8_t numPolled = pDrvInstance->numTrfsSmPolled;
    uint8_t result = 0;
    
    do {
        
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
        /* Check for a new task */
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;

            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Check the baud rate.  If its different set the new baud rate*/
            if (pClient->baudRate != pDrvInstance->currentBaudRate)
            {
                PLIB_SPI_BaudRateSet( spiId , SYS_CLK_PeripheralFrequencyGet(pDrvInstance->spiClk), pClient->baudRate );
                pDrvInstance->currentBaudRate = pClient->baudRate;
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }

                
        continueLoop = false;
        /* Execute the sub tasks */

        DRV_SPI_PolledErrorTasks(pDrvInstance);
        
        /* Figure out how many bytes are left to be received */
        size_t bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        // Check to see if we have any data left to receive and update the bytes left.

        if (bytesLeft != 0)
        {
            DRV_SPI_MasterRMReceive8BitPolled(pDrvInstance);
            bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        }
        
        if 
            (currentJob->dataLeftToTx +currentJob->dummyLeftToTx != 0)
        {
            DRV_SPI_MasterRMSend8BitPolled(pDrvInstance);
        }
        
        if (bytesLeft == 0)
        {
                    /* Job is complete*/
                    currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
                    /* Call the job complete call back*/
                    if (currentJob->completeCB != NULL)
                    {
                        (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Call the operation complete call back.  This is different than the
                       job complete callback.  This can be used to modify the Slave Select line.
                       The job complete callback can be used to free a client that is blocked 
                       waiting for complete*/
                    DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
                    if (pClient->operationEnded != NULL)
                    {
                        (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Return the job back to the free queue*/
                    if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
                    {
                        SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                        return 0;
                    }
                    /* Clean up */
                    pDrvInstance->currentJob = NULL;
                }

    
        counter ++;
        if ((counter < numPolled) && (result != 0))
        {
            continueLoop = true;
        }
    
    } while(continueLoop);
    return 0;
}

int32_t DRV_SPI_PolledMasterEBM16BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )    
{
    bool continueLoop;
    
    do {
        
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
        /* Check for a new task */
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;

            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Check the baud rate.  If its different set the new baud rate*/
            if (pClient->baudRate != pDrvInstance->currentBaudRate)
            {
                PLIB_SPI_BaudRateSet( spiId , SYS_CLK_PeripheralFrequencyGet(pDrvInstance->spiClk), pClient->baudRate );
                pDrvInstance->currentBaudRate = pClient->baudRate;
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }

                
        continueLoop = false;
        /* Execute the sub tasks */

        DRV_SPI_PolledErrorTasks(pDrvInstance);
        
        /* Figure out how many bytes are left to be received */
        size_t bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        // Check to see if we have any data left to receive and update the bytes left.

        if (bytesLeft != 0)
        {
            DRV_SPI_MasterEBMReceive16BitPolled(pDrvInstance);
            bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        }
        
        if 
            (currentJob->dataLeftToTx +currentJob->dummyLeftToTx != 0)
        {
            DRV_SPI_MasterEBMSend16BitPolled(pDrvInstance);
        }
        
        if (bytesLeft == 0)
        {
                    /* Job is complete*/
                    currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
                    /* Call the job complete call back*/
                    if (currentJob->completeCB != NULL)
                    {
                        (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Call the operation complete call back.  This is different than the
                       job complete callback.  This can be used to modify the Slave Select line.
                       The job complete callback can be used to free a client that is blocked 
                       waiting for complete*/
                    DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
                    if (pClient->operationEnded != NULL)
                    {
                        (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Return the job back to the free queue*/
                    if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
                    {
                        SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                        return 0;
                    }
                    /* Clean up */
                    pDrvInstance->currentJob = NULL;
                }

    
    
    } while(continueLoop);
    return 0;
}
int32_t DRV_SPI_PolledMasterRM16BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )    
{
    bool continueLoop;
    uint8_t counter = 0;
    uint8_t numPolled = pDrvInstance->numTrfsSmPolled;
    uint8_t result = 0;
    
    do {
        
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
        /* Check for a new task */
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;

            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Check the baud rate.  If its different set the new baud rate*/
            if (pClient->baudRate != pDrvInstance->currentBaudRate)
            {
                PLIB_SPI_BaudRateSet( spiId , SYS_CLK_PeripheralFrequencyGet(pDrvInstance->spiClk), pClient->baudRate );
                pDrvInstance->currentBaudRate = pClient->baudRate;
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }

                
        continueLoop = false;
        /* Execute the sub tasks */

        DRV_SPI_PolledErrorTasks(pDrvInstance);
        
        /* Figure out how many bytes are left to be received */
        size_t bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        // Check to see if we have any data left to receive and update the bytes left.

        if (bytesLeft != 0)
        {
            DRV_SPI_MasterRMReceive16BitPolled(pDrvInstance);
            bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        }
        
        if 
            (currentJob->dataLeftToTx +currentJob->dummyLeftToTx != 0)
        {
            DRV_SPI_MasterRMSend16BitPolled(pDrvInstance);
        }
        
        if (bytesLeft == 0)
        {
                    /* Job is complete*/
                    currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
                    /* Call the job complete call back*/
                    if (currentJob->completeCB != NULL)
                    {
                        (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Call the operation complete call back.  This is different than the
                       job complete callback.  This can be used to modify the Slave Select line.
                       The job complete callback can be used to free a client that is blocked 
                       waiting for complete*/
                    DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
                    if (pClient->operationEnded != NULL)
                    {
                        (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Return the job back to the free queue*/
                    if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
                    {
                        SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                        return 0;
                    }
                    /* Clean up */
                    pDrvInstance->currentJob = NULL;
                }

    
        counter ++;
        if ((counter < numPolled) && (result != 0))
        {
            continueLoop = true;
        }
    
    } while(continueLoop);
    return 0;
}

int32_t DRV_SPI_PolledMasterEBM32BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )    
{
    bool continueLoop;
    
    do {
        
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
        /* Check for a new task */
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;

            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Check the baud rate.  If its different set the new baud rate*/
            if (pClient->baudRate != pDrvInstance->currentBaudRate)
            {
                PLIB_SPI_BaudRateSet( spiId , SYS_CLK_PeripheralFrequencyGet(pDrvInstance->spiClk), pClient->baudRate );
                pDrvInstance->currentBaudRate = pClient->baudRate;
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }

                
        continueLoop = false;
        /* Execute the sub tasks */

        DRV_SPI_PolledErrorTasks(pDrvInstance);
        
        /* Figure out how many bytes are left to be received */
        size_t bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        // Check to see if we have any data left to receive and update the bytes left.

        if (bytesLeft != 0)
        {
            DRV_SPI_MasterEBMReceive32BitPolled(pDrvInstance);
            bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        }
        
        if 
            (currentJob->dataLeftToTx +currentJob->dummyLeftToTx != 0)
        {
            DRV_SPI_MasterEBMSend32BitPolled(pDrvInstance);
        }
        
        if (bytesLeft == 0)
        {
                    /* Job is complete*/
                    currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
                    /* Call the job complete call back*/
                    if (currentJob->completeCB != NULL)
                    {
                        (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Call the operation complete call back.  This is different than the
                       job complete callback.  This can be used to modify the Slave Select line.
                       The job complete callback can be used to free a client that is blocked 
                       waiting for complete*/
                    DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
                    if (pClient->operationEnded != NULL)
                    {
                        (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Return the job back to the free queue*/
                    if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
                    {
                        SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                        return 0;
                    }
                    /* Clean up */
                    pDrvInstance->currentJob = NULL;
                }

    
    
    } while(continueLoop);
    return 0;
}
int32_t DRV_SPI_PolledMasterRM32BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )    
{
    bool continueLoop;
    uint8_t counter = 0;
    uint8_t numPolled = pDrvInstance->numTrfsSmPolled;
    uint8_t result = 0;
    
    do {
        
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
        /* Check for a new task */
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;

            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Check the baud rate.  If its different set the new baud rate*/
            if (pClient->baudRate != pDrvInstance->currentBaudRate)
            {
                PLIB_SPI_BaudRateSet( spiId , SYS_CLK_PeripheralFrequencyGet(pDrvInstance->spiClk), pClient->baudRate );
                pDrvInstance->currentBaudRate = pClient->baudRate;
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }

                
        continueLoop = false;
        /* Execute the sub tasks */

        DRV_SPI_PolledErrorTasks(pDrvInstance);
        
        /* Figure out how many bytes are left to be received */
        size_t bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        // Check to see if we have any data left to receive and update the bytes left.

        if (bytesLeft != 0)
        {
            DRV_SPI_MasterRMReceive32BitPolled(pDrvInstance);
            bytesLeft = currentJob->dataLeftToRx + currentJob->dummyLeftToRx;
        }
        
        if 
            (currentJob->dataLeftToTx +currentJob->dummyLeftToTx != 0)
        {
            DRV_SPI_MasterRMSend32BitPolled(pDrvInstance);
        }
        
        if (bytesLeft == 0)
        {
                    /* Job is complete*/
                    currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
                    /* Call the job complete call back*/
                    if (currentJob->completeCB != NULL)
                    {
                        (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Call the operation complete call back.  This is different than the
                       job complete callback.  This can be used to modify the Slave Select line.
                       The job complete callback can be used to free a client that is blocked 
                       waiting for complete*/
                    DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
                    if (pClient->operationEnded != NULL)
                    {
                        (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
                    }
                    /* Return the job back to the free queue*/
                    if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
                    {
                        SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                        return 0;
                    }
                    /* Clean up */
                    pDrvInstance->currentJob = NULL;
                }

    
        counter ++;
        if ((counter < numPolled) && (result != 0))
        {
            continueLoop = true;
        }
    
    } while(continueLoop);
    return 0;
}



            
            
int32_t DRV_SPI_PolledSlaveEBM8BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
    
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;
            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }
        
        
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx != 0)
        {
            DRV_SPI_SlaveEBMReceive8BitPolled(pDrvInstance);
        }
        if (currentJob->dataLeftToTx != 0)
        {
            DRV_SPI_SlaveEBMSend8BitPolled(pDrvInstance);
        }
        
        DRV_SPI_PolledErrorTasks(pDrvInstance);
    
        /* Check to see if the job is done */
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
        {
            /* Job is complete*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
            /* Call the job complete call back*/
            if (currentJob->completeCB != NULL)
            {
                (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Call the operation complete call back.  This is different than the
               job complete callback.  This can be used to modify the Slave Select line.
               The job complete callback can be used to free a client that is blocked 
               waiting for complete*/
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationEnded != NULL)
            {
                (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Return the job back to the free queue*/
            if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                return 0;
            }
            /* Clean up */
            pDrvInstance->currentJob = NULL;
        }

    return 0;
}            
            
            
int32_t DRV_SPI_PolledSlaveRM8BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
    
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;
            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }
        
        
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx != 0)
        {
            DRV_SPI_SlaveRMReceive8BitPolled(pDrvInstance);
        }
        if (currentJob->dataLeftToTx != 0)
        {
            DRV_SPI_SlaveRMSend8BitPolled(pDrvInstance);
        }
        
        DRV_SPI_PolledErrorTasks(pDrvInstance);
    
        /* Check to see if the job is done */
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
        {
            /* Job is complete*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
            /* Call the job complete call back*/
            if (currentJob->completeCB != NULL)
            {
                (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Call the operation complete call back.  This is different than the
               job complete callback.  This can be used to modify the Slave Select line.
               The job complete callback can be used to free a client that is blocked 
               waiting for complete*/
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationEnded != NULL)
            {
                (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Return the job back to the free queue*/
            if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                return 0;
            }
            /* Clean up */
            pDrvInstance->currentJob = NULL;
        }

    return 0;
}            

            
            
int32_t DRV_SPI_PolledSlaveEBM16BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
    
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;
            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }
        
        
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx != 0)
        {
            DRV_SPI_SlaveEBMReceive16BitPolled(pDrvInstance);
        }
        if (currentJob->dataLeftToTx != 0)
        {
            DRV_SPI_SlaveEBMSend16BitPolled(pDrvInstance);
        }
        
        DRV_SPI_PolledErrorTasks(pDrvInstance);
    
        /* Check to see if the job is done */
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
        {
            /* Job is complete*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
            /* Call the job complete call back*/
            if (currentJob->completeCB != NULL)
            {
                (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Call the operation complete call back.  This is different than the
               job complete callback.  This can be used to modify the Slave Select line.
               The job complete callback can be used to free a client that is blocked 
               waiting for complete*/
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationEnded != NULL)
            {
                (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Return the job back to the free queue*/
            if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                return 0;
            }
            /* Clean up */
            pDrvInstance->currentJob = NULL;
        }

    return 0;
}            
            
            
int32_t DRV_SPI_PolledSlaveRM16BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
    
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;
            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }
        
        
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx != 0)
        {
            DRV_SPI_SlaveRMReceive16BitPolled(pDrvInstance);
        }
        if (currentJob->dataLeftToTx != 0)
        {
            DRV_SPI_SlaveRMSend16BitPolled(pDrvInstance);
        }
        
        DRV_SPI_PolledErrorTasks(pDrvInstance);
    
        /* Check to see if the job is done */
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
        {
            /* Job is complete*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
            /* Call the job complete call back*/
            if (currentJob->completeCB != NULL)
            {
                (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Call the operation complete call back.  This is different than the
               job complete callback.  This can be used to modify the Slave Select line.
               The job complete callback can be used to free a client that is blocked 
               waiting for complete*/
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationEnded != NULL)
            {
                (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Return the job back to the free queue*/
            if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                return 0;
            }
            /* Clean up */
            pDrvInstance->currentJob = NULL;
        }

    return 0;
}            

            
            
int32_t DRV_SPI_PolledSlaveEBM32BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
    
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;
            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }
        
        
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx != 0)
        {
            DRV_SPI_SlaveEBMReceive32BitPolled(pDrvInstance);
        }
        if (currentJob->dataLeftToTx != 0)
        {
            DRV_SPI_SlaveEBMSend32BitPolled(pDrvInstance);
        }
        
        DRV_SPI_PolledErrorTasks(pDrvInstance);
    
        /* Check to see if the job is done */
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
        {
            /* Job is complete*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
            /* Call the job complete call back*/
            if (currentJob->completeCB != NULL)
            {
                (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Call the operation complete call back.  This is different than the
               job complete callback.  This can be used to modify the Slave Select line.
               The job complete callback can be used to free a client that is blocked 
               waiting for complete*/
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationEnded != NULL)
            {
                (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Return the job back to the free queue*/
            if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                return 0;
            }
            /* Clean up */
            pDrvInstance->currentJob = NULL;
        }

    return 0;
}            
            
            
int32_t DRV_SPI_PolledSlaveRM32BitTasks ( struct DRV_SPI_DRIVER_OBJECT * pDrvInstance )
{
        DRV_SPI_JOB_OBJECT * currentJob = pDrvInstance->currentJob;
        SPI_MODULE_ID spiId = pDrvInstance->spiId;
    
        if (pDrvInstance->currentJob == NULL)
        {
            if (DRV_SPI_SYS_QUEUE_DequeueLock(pDrvInstance->queue, (void *)&(pDrvInstance->currentJob)) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Error in dequeing.");
                return 0;       
            }
            if (pDrvInstance->currentJob == NULL)
            {
                return 0;
            }
            currentJob = pDrvInstance->currentJob;
            pDrvInstance->symbolsInProgress = 0;

            /* Call the operation starting function pointer.  This can be used to modify the slave select lines */
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationStarting != NULL)
            {
                (*pClient->operationStarting)(DRV_SPI_BUFFER_EVENT_PROCESSING, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            
            /* List the new job as processing*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_PROCESSING;
            /* Flush out the Receive buffer */
            PLIB_SPI_BufferClear(spiId);
        }
        
        
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx != 0)
        {
            DRV_SPI_SlaveRMReceive32BitPolled(pDrvInstance);
        }
        if (currentJob->dataLeftToTx != 0)
        {
            DRV_SPI_SlaveRMSend32BitPolled(pDrvInstance);
        }
        
        DRV_SPI_PolledErrorTasks(pDrvInstance);
    
        /* Check to see if the job is done */
        if (currentJob->dataLeftToRx + currentJob->dummyLeftToRx == 0)
        {
            /* Job is complete*/
            currentJob->status = DRV_SPI_BUFFER_EVENT_COMPLETE;
            /* Call the job complete call back*/
            if (currentJob->completeCB != NULL)
            {
                (*currentJob->completeCB)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Call the operation complete call back.  This is different than the
               job complete callback.  This can be used to modify the Slave Select line.
               The job complete callback can be used to free a client that is blocked 
               waiting for complete*/
            DRV_SPI_CLIENT_OBJECT * pClient = (DRV_SPI_CLIENT_OBJECT*)currentJob->pClient;
            if (pClient->operationEnded != NULL)
            {
                (*pClient->operationEnded)(DRV_SPI_BUFFER_EVENT_COMPLETE, (DRV_SPI_BUFFER_HANDLE)currentJob, currentJob->context);
            }
            /* Return the job back to the free queue*/
            if (DRV_SPI_SYS_QUEUE_FreeElementLock(pDrvInstance->queue, currentJob) != DRV_SPI_SYS_QUEUE_SUCCESS)
            {
                SYS_ASSERT(false, "\r\nSPI Driver: Queue free element error.");
                return 0;
            }
            /* Clean up */
            pDrvInstance->currentJob = NULL;
        }

    return 0;
}            

