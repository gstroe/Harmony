/*******************************************************************************
  MPLAB Harmony LCC Generated Driver Implementation File

  File Name:
    drv_gfx_lcc_generic.c

  Summary:
    Build-time generated implementation for the LCC Driver.

  Description:
    Build-time generated implementation for the LCC Driver.

    Created with MPLAB Harmony Version 1.09
*******************************************************************************/
// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2016 released Microchip Technology Inc.  All rights reserved.

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

#include "framework/driver/gfx/controller/lcc/drv_gfx_lcc_generic.h"

#include <xc.h>
#include <sys/attribs.h>

#include "peripheral/pmp/plib_pmp.h"
#include "peripheral/tmr/plib_tmr.h"

#ifndef PMADDR_OVERFLOW
#define  PMADDR_OVERFLOW               65536
#endif
inline void LCCRecoverData(void);
inline void LCCSaveData(void);
#define PIXEL_DRAW_PER_DMA_TX          20
volatile uint8_t DrawCount = 0;                          /* The current status of how many pixels have been drawn inbetween a DMA IR*/
volatile uint8_t overflowcount;                      /* The count for the amount of overflows that have happened in the PMP Adress*/

#define SRAM_ADDR_CS0  0xE0000000
#define SRAM_ADDR_CS1  0xE0040000

#define VER_BLANK                 (DISP_VER_PULSE_WIDTH+DISP_VER_BACK_PORCH+DISP_VER_FRONT_PORCH-1)

static SYS_DMA_CHANNEL_HANDLE dmaHandle = SYS_DMA_CHANNEL_HANDLE_INVALID;

uint16_t GraphicsFrame[DISP_HOR_RESOLUTION];
#define PMP_ADDRESS_LINES 0x7fff
#define PMP_DATA_LENGTH PMP_DATA_SIZE_16_BITS
uint16_t HBackPorch = (DISP_HOR_PULSE_WIDTH+DISP_HOR_BACK_PORCH);

//PIP Variables (NULL at start)
uint16_t PipStartT = 0;
uint16_t PipStartL = 0;
uint16_t PipVLength = 0;
uint16_t PipHLength = 0;
static uint32_t PipX,PipY;
uint8_t GFXPIPPage=0;
uint16_t scroll,scrollLine,scrollPage = 0;

volatile uint16_t* _ebiBaseAddress = (uint16_t*)SRAM_ADDR_CS0;

volatile uint16_t _pixelRendercount;
volatile uint16_t* _framePoint;
volatile uint32_t _frameAddress;

volatile bool allowFrameUpdate = false;
volatile bool allowLineUpdate = false;

// *****************************************************************************
/* GFX LCC Driver Instance Object

  Summary:
    Defines the object required for the maintenance of the hardware instance.

  Description:
    This defines the object required for the maintenance of the hardware
    instance. This object exists once per hardware instance of the peripheral.

  Remarks:
    None.
*/

typedef struct _DRV_GFX_LCC_OBJ
{
    /* Flag to indicate in use  */
    bool                                        inUse;

    /* Save the index of the driver */
    SYS_MODULE_INDEX                            drvIndex;

    /* LCC machine state */
    DRV_GFX_STATES                              state;

    /* Status of this driver instance */
    SYS_STATUS                                  status;

    /* Number of clients */
    uint32_t                                    nClients;

    /* Client of this driver */
    DRV_GFX_CLIENT_OBJ *                        pDrvLCCClientObj;

    DRV_GFX_INIT *                              initData;

    uint16_t      maxY;
    uint16_t      maxX;

        LCC_VSYNC_Callback_FnPtr                    vsync_cb;

} DRV_GFX_LCC_OBJ;

static DRV_GFX_LCC_OBJ        drvLCCObj;
static DRV_GFX_CLIENT_OBJ drvLCCClients;


// *****************************************************************************
/*
  Function: uint16_t DRV_GFX_LCC_Initialize(uint8_t instance)

  Summary:
    resets LCD, initializes PMP

  Description:
    none

  Input:
        instance - driver instance
  Output:
    1 - call not successful (PMP driver busy)
    0 - call successful
*/
SYS_MODULE_OBJ DRV_GFX_LCC_Initialize(const SYS_MODULE_INDEX index,
                                      const SYS_MODULE_INIT* const init)
{
    static uint16_t horizontalSize, verticalSize;

    /* Validate the driver index */
    if ( index >= GFX_CONFIG_NUMBER_OF_MODULES )
        return SYS_MODULE_OBJ_INVALID;

    DRV_GFX_LCC_OBJ *dObj = &drvLCCObj;

    /* Object is valid, set it in use */
    dObj->inUse = true;
    dObj->state = SYS_STATUS_BUSY;
    dObj->initData = (DRV_GFX_INIT *) init;

    /* Save the index of the driver. Important to know this
    as we are using reference based accessing */
    dObj->drvIndex = index;
    drvLCCObj.initData->TCON_Init = TCON_MODULE;

    if ((drvLCCObj.initData->orientation == 90) || (drvLCCObj.initData->orientation == 270))
    {
        horizontalSize = drvLCCObj.initData->verticalResolution;
        verticalSize = drvLCCObj.initData->horizontalResolution;
        drvLCCObj.maxX = horizontalSize - 1;
        drvLCCObj.maxY = verticalSize - 1;
    }
    else
    {
        horizontalSize = drvLCCObj.initData->horizontalResolution;
        verticalSize = drvLCCObj.initData->verticalResolution;
        drvLCCObj.maxX = horizontalSize - 1;
        drvLCCObj.maxY = verticalSize - 1;
    }

    HSYNC_TRIS = 0;
    LCD_CS_TRIS = 0;
    VSYNC_TRIS = 0;
    LCD_RESET_TRIS = 0;

    BACKLIGHT_TRIS = 0;
    DATA_ENABLE_TRIS = 0;
    LCD_RESET = 1;
    LCD_CS = 0;

    if (drvLCCObj.initData->TCON_Init != NULL)
                drvLCCObj.initData->TCON_Init();

    drvLCCObj.initData->activePage = 0;
    drvLCCObj.initData->visualPage = 0;

    /* Disable the PMP module */
    PLIB_PMP_Disable(0);

    PLIB_PMP_OperationModeSelect(0, PMP_MASTER_READ_WRITE_STROBES_INDEPENDENT);

    /* pins polarity setting */
    PLIB_PMP_ReadWriteStrobePolaritySelect(0, 1 - (DISP_INV_LSHIFT));
    PLIB_PMP_WriteEnableStrobePolaritySelect(0, PMP_POLARITY_ACTIVE_LOW);

    PLIB_PMP_ReadWriteStrobePortEnable(0);
    PLIB_PMP_WriteEnableStrobePortEnable(0);

    PLIB_PMP_DataSizeSelect(0, PMP_DATA_LENGTH);

    /* wait states setting */
    PLIB_PMP_WaitStatesDataHoldSelect(0, PMP_DATA_HOLD_1);
    PLIB_PMP_WaitStatesDataSetUpSelect(0, PMP_DATA_WAIT_ONE);
    PLIB_PMP_WaitStatesStrobeSelect(0, PMP_STROBE_WAIT_3);

    /* setting the hardware for the required interrupt mode */
    PLIB_PMP_InterruptModeSelect(0, PMP_INTERRUPT_EVERY_RW_CYCLE);

    PLIB_PMP_AddressIncrementModeSelect(0, PMP_ADDRESS_AUTO_INCREMENT);

    /* Enable the PMP module */
    PLIB_PMP_Enable(0);
    /* Ports Setting */
    PLIB_PMP_AddressPortEnable(0, PMP_ADDRESS_LINES);
    PLIB_PMP_AddressSet(0, 0);

    SRAM_TRIS = 0;

#ifdef ADDR15_TRIS
    ADDR15_TRIS = 0;
#endif
    ADDR16_TRIS = 0;
    ADDR17_TRIS = 0;
    ADDR18_TRIS = 0;

    SRAM_CS = 0;

#ifdef ADDR15
    ADDR15 = 0;
#endif
    ADDR17 = 0;
    ADDR18 = 0;

    /*Turn Backlight on*/
    BACKLIGHT = BACKLIGHT_ENABLE_LEVEL;

    drvLCCObj.initData->horizontalResolution = horizontalSize;
    drvLCCObj.initData->verticalResolution = verticalSize;
    drvLCCObj.state = SYS_STATUS_READY;

    dObj->nClients = 0;
    dObj->status = SYS_STATUS_READY;

    /* Return the driver handle */
    return (SYS_MODULE_OBJ)dObj;
}

static int DRV_GFX_LCC_Start()
{
        /*Suspend DMA Module*/
    SYS_DMA_Suspend();

    /* Allocate DMA channel */
    dmaHandle = SYS_DMA_ChannelAllocate(DRV_GFX_LCC_DMA_CHANNEL_INDEX);

        if (SYS_DMA_CHANNEL_HANDLE_INVALID == dmaHandle)
        return -1;

    // set the transfer parameters: source & destination address,
    // source & destination size, number of bytes per event
    SYS_DMA_ChannelTransferAdd(dmaHandle, (void *) &PMDIN, 2, &GraphicsFrame[0],
            HBackPorch, DRV_GFX_LCC_DMA_TRANSFER_LENGTH);

    /* Enable the transfer done interrupt, when all buffer transferred */
    PLIB_DMA_ChannelXINTSourceEnable(DMA_ID_0, DRV_GFX_LCC_DMA_CHANNEL_INDEX,
            DMA_INT_BLOCK_TRANSFER_COMPLETE);

    SYS_INT_SourceEnable(INT_SOURCE_DMA_0 + DRV_GFX_LCC_DMA_CHANNEL_INDEX);

    // set the transfer event control: what event is to start the DMA transfer
    SYS_DMA_ChannelSetup(dmaHandle,
            SYS_DMA_CHANNEL_OP_MODE_BASIC,
            DRV_GFX_LCC_DMA_TRIGGER_SOURCE);

    PLIB_TMR_PrescaleSelect(DRV_GFX_LCC_TMR_INDEX, TMR_PRESCALE_VALUE_1);
    PLIB_TMR_Period16BitSet(DRV_GFX_LCC_TMR_INDEX, 1);
    PLIB_TMR_Start(DRV_GFX_LCC_TMR_INDEX);

    // once we configured the DMA channel we can enable it
    SYS_DMA_ChannelEnable(dmaHandle);

    /*Unsuspend DMA Module*/
    SYS_DMA_Resume();

        return 0;
}

// *****************************************************************************
/*
  Function: void DRV_GFX_LCC_VSYNC_CallbackSet(LCC_VSYNC_Callback_FnPtr cb)

  Summary:
    sets VSYNC state callback pointer

  Description:
    none

  Input:
        cb - callback pointer
*/
void DRV_GFX_LCC_VSYNC_CallbackSet(LCC_VSYNC_Callback_FnPtr cb)
{
        drvLCCObj.vsync_cb = cb;
}

// *****************************************************************************
/*
  Function: LCC_VSYNC_STATE DRV_GFX_LCC_VSYNC_GetState(void)

  Summary:
    Gets the state of the current VSYNC mode

  Description:
    none

  Output:
        state of VSYNC register
                LCC_VSYNC_TRUE = in VSYNC
                LCC_VSYNC_FALSE = not in VSYNC
*/
LCC_VSYNC_STATE DRV_GFX_LCC_VSYNC_GetState(void)
{
        return VSYNC;
}

// *****************************************************************************
/*
  Function: DRV_GFX_LCC_Open(uint8_t instance)

  Summary:
    opens an instance of the graphics controller

  Description:
    none

  Input:
    instance of the driver

  Output:
    1 - driver not initialied
    2 - instance doesn't exist
    3 - instance already open
    instance to driver when successful
*/
DRV_GFX_HANDLE DRV_GFX_LCC_Open( const SYS_MODULE_INDEX index,
                             const DRV_IO_INTENT intent )
{
    DRV_GFX_CLIENT_OBJ * client = (DRV_GFX_CLIENT_OBJ *)DRV_HANDLE_INVALID;

    /* Check if the specified driver index is in valid range */
    if(index >= GFX_CONFIG_NUMBER_OF_MODULES)
    {
    }
    /* Check if instance object is ready*/
    else if(drvLCCObj.status != SYS_STATUS_READY)
    {
    }
    else if(intent != DRV_IO_INTENT_EXCLUSIVE)
    {
    }
    else if(drvLCCObj.nClients > 0)
    {
    }
    else
    {
                if(DRV_GFX_LCC_Start() != 0)
            return DRV_GFX_HANDLE_INVALID; // currently single context only

        client = &drvLCCClients;

        client->inUse = true;
        client->drvObj = &drvLCCObj;

        /* Increment the client number for the specific driver instance*/
        drvLCCObj.nClients++;
    }

    /* Return invalid handle */
    return ((DRV_HANDLE)client);
}

// *****************************************************************************
/* Function:
    void DRV_GFX_LCC_Close( DRV_HANDLE handle )

  Summary:
    closes an instance of the graphics controller

  Description:
    This is closes the instance of the driver specified by handle.
*/
void DRV_GFX_LCC_Close( DRV_HANDLE handle )
{
    /* Start of local variable */
    DRV_GFX_CLIENT_OBJ * client = (DRV_GFX_CLIENT_OBJ *)NULL;
    DRV_GFX_LCC_OBJ * drvObj = (DRV_GFX_LCC_OBJ *)NULL;
    /* End of local variable */

    /* Check if the handle is valid */
    if(handle == DRV_HANDLE_INVALID)
    {
//        SYS_DEBUG(0, "Bad Client Handle");
    }
    else
    {
        client = (DRV_GFX_CLIENT_OBJ *)handle;

        if(client->inUse)
        {
            client->inUse = false;
            drvObj = (DRV_GFX_LCC_OBJ *)client->drvObj;

            /* Remove this client from the driver client table */
            drvObj->nClients--;
        }
        else
        {
//            SYS_DEBUG(0, "Client Handle no inuse");
        }

    }
    return;
}

// *****************************************************************************
/*
  Function:
     void DRV_GFX_LCC_MaxXGet()

  Summary:
     Returns x extent of the display.

  Description:

  Precondition:

  Parameters:

  Returns:

  Example:
    <code>
    <code>

  Remarks:
*/
uint16_t DRV_GFX_LCC_MaxXGet()
{
    return drvLCCObj.maxX;
}

// *****************************************************************************
/*
  Function:
     void DRV_GFX_LCC_MaxYGet()

  Summary:
     Returns y extent of the display.

  Description:

  Precondition:

  Parameters:

  Returns:

  Example:
    <code>
    <code>

  Remarks:
*/
uint16_t DRV_GFX_LCC_MaxYGet()
{
    return drvLCCObj.maxY;
}

/*********************************************************************
  Function:
     void DRV_GFX_LCC_InterfaceSet( DRV_HANDLE handle, DRV_GFX_INTERFACE * interface )

  Summary:
    Returns the API of the graphics controller

  Description:
    none

  Return:

  *********************************************************************/
void DRV_GFX_LCC_InterfaceSet( DRV_HANDLE handle, DRV_GFX_INTERFACE * interface )
{
    interface->BarFill = DRV_GFX_LCC_BarFill;
    interface->PixelArrayPut = DRV_GFX_LCC_PixelArrayPut;
    interface->PixelArrayGet = DRV_GFX_LCC_PixelArrayGet;
    interface->PixelPut = DRV_GFX_LCC_PixelPut;
    interface->ColorSet = DRV_GFX_LCC_SetColor;
    interface->PageSet = DRV_GFX_LCC_SetPage;
    interface->Layer = DRV_GFX_LCC_Layer;
    interface->MaxXGet = DRV_GFX_LCC_MaxXGet;
    interface->MaxYGet = DRV_GFX_LCC_MaxYGet;
}

uint16_t DRV_GFX_LCC_SetPage(uint8_t pageType, uint8_t page)
{
    switch(pageType)
    {
        case ACTIVE_PAGE:
            drvLCCObj.initData->activePage = page;
            if ( drvLCCObj.initData->activePage == 0 )
                _ebiBaseAddress = (uint16_t*)SRAM_ADDR_CS0;
            else
                _ebiBaseAddress = (uint16_t*)SRAM_ADDR_CS1;
            break;
        case VISUAL_PAGE:
            drvLCCObj.initData->visualPage = page;
            ADDR17 = page;
            ADDR18 = page>>1;
            break;
        }
        return(0);
}
// *****************************************************************************
/*
  Function: void DRV_GFX_LCC_SetColor(uint8_t instance, GFX_COLOR color)

  Summary: Sets the color for the driver instance

  Description:

  Output: none

*/

void DRV_GFX_LCC_SetColor(GFX_COLOR color)
{
  drvLCCObj.initData->color = color;
}

// *****************************************************************************
/*
  Function: void DRV_GFX_LCC_DisplayRefresh(void)

  Summary: State Machine driving H-Sync, V-Sync and DE timing

  Description:

  Output: none

*/

void DRV_GFX_LCC_DisplayRefresh(void)
{
    static uint16_t remainingPixels=0;
    static uint8_t prevGraphicsState = BLANKING_PERIOD;
    static uint16_t pipLine = 0;
    static uint32_t pixelAddress=0;
    static uint8_t GraphicsState = ACTIVE_PERIOD;
    static uint16_t remaining = 0;
    static short line = 0;
    DrawCount = 0;

    switch(GraphicsState)
    {
        case ACTIVE_PERIOD:
            remaining = DISP_HOR_RESOLUTION;
            GraphicsState = BLANKING_PERIOD;
            DCH1CSIZ = DISP_HOR_RESOLUTION;

            if(line >= 0)
            {
			PMADDR = ((PMP_ADDRESS_LINES) & ((line) * DISP_HOR_RESOLUTION));

			if((line) == (DISP_VER_RESOLUTION))
			{
				// notify registered callback that the display is in vsync mode
				if(drvLCCObj.vsync_cb != NULL)
					drvLCCObj.vsync_cb();

				VSYNC = 0;
				line = (-VER_BLANK);
			#ifdef ADDR15
				ADDR15 = 0;
			#endif
				ADDR16 = 0;
                ADDR16 = 0;
				overflowcount = 0;
				pipLine = 0;
			}
			else
			{
				DATA_ENABLE = 1;
				if((line >= PipStartT)&&(line <= (PipStartT + PipVLength))&&(PipVLength != 0))
				{
					overflowcount = ((line) * DISP_HOR_RESOLUTION)/PMADDR_OVERFLOW;
					GraphicsState = PIP;

					if(!PipStartL)
					{
						//Draw PIP Line
			case PIP:
					pixelAddress = (uint32_t)(((PipY+pipLine++)*(DISP_HOR_RESOLUTION))+(PipX));

					PMADDR = pixelAddress&(PMP_ADDRESS_LINES);

					overflowcount = pixelAddress/PMADDR_OVERFLOW;
					remaining = PipHLength;

					remainingPixels = DISP_HOR_RESOLUTION - remaining - PipStartL;
					pixelAddress = ((line*DISP_HOR_RESOLUTION) + remaining + PipStartL);

					GraphicsState = FINISH_LINE;
				}
				else
				{
					remaining = PipStartL;
				}

				#ifdef ADDR15
					ADDR15 = overflowcount;          //count holds the additional address line count
					ADDR16 = (overflowcount>>1);
				#else
					ADDR16 = overflowcount;
				#endif
				}

				if(scroll > 0)
				{

					switch(scroll)
					{
						case 1:             //Up
						case 2:             //Down
							if(line < scrollLine)
							{
								pixelAddress = ((drvLCCObj.initData->verticalResolution-1)-(scrollLine-line)) * DISP_HOR_RESOLUTION;
							}
							else
							{
								pixelAddress = (line-scrollLine) * DISP_HOR_RESOLUTION;
							}

							PMADDR = (pixelAddress)&(PMP_ADDRESS_LINES);
							overflowcount = pixelAddress/PMADDR_OVERFLOW;
							break;

						case 3://Left
						case 4://Right
							pixelAddress = ((line+1) * DISP_HOR_RESOLUTION) + ((drvLCCObj.initData->horizontalResolution-1)-scrollLine);

							PMADDR = (pixelAddress)&(PMP_ADDRESS_LINES);
							overflowcount = pixelAddress/PMADDR_OVERFLOW;

							if(scroll == 3)
							{
							}
							else
							{
							}

							remaining = scrollLine;
							remainingPixels = DISP_HOR_RESOLUTION - scrollLine;
							pixelAddress = (line) * DISP_HOR_RESOLUTION;
							GraphicsState = FINISH_LINE;
							break;
						}

						if((scroll > 2) && (GraphicsState != FINISH_LINE))
						{
					case FINISH_LINE:            //Finish Line Render
						remaining = remainingPixels;

						PMADDR = (pixelAddress)&(PMP_ADDRESS_LINES);
						overflowcount = pixelAddress/PMADDR_OVERFLOW;

						if(scroll == 3)
						{
						}
						else
						{
						}

						GraphicsState = BLANKING_PERIOD;
					}
				#ifdef ADDR15
					ADDR15 = ++overflowcount;          //count holds the additional address line count
					ADDR16 = (overflowcount>>1);
				#else
					ADDR16 = overflowcount;
				#endif
				}

			    prevGraphicsState = GraphicsState;

				if((PMADDR_OVERFLOW - PMADDR) < (remaining))
				{
					GraphicsState = OVERFLOW;      //Do Overflow routine
					PLIB_DMA_ChannelXDestinationSizeSet(DMA_ID_0, DRV_GFX_LCC_DMA_CHANNEL_INDEX, (uint16_t)(((PMADDR_OVERFLOW)- PMADDR)<<1));
					PLIB_DMA_ChannelXINTSourceFlagClear(DMA_ID_0, DRV_GFX_LCC_DMA_CHANNEL_INDEX, DMA_INT_BLOCK_TRANSFER_COMPLETE);
					PLIB_DMA_ChannelXEnable(DMA_ID_0,DRV_GFX_LCC_DMA_CHANNEL_INDEX);
					remaining = remaining - ((PMADDR_OVERFLOW)- PMADDR);
					return;
				}
			}
		}
		break;

		case OVERFLOW: //Adjust the address lines that aren't part of PMP
            GraphicsState = prevGraphicsState;     //goto Front Porch
		#ifdef ADDR15
            ADDR15 = ++overflowcount;          //count holds the additional address line count
            ADDR16 = (overflowcount>>1);
		#else
			ADDR16 = overflowcount;
		#endif
            break;

        case BLANKING_PERIOD:   //Front Porch then Back Porch Start
            HSYNC = 0;
            DATA_ENABLE = 0;
            GraphicsState = PMDIN;
            while(PMMODEbits.BUSY == 1);
            HSYNC = 1;
            VSYNC = 1;
            //Setup DMA Back Porch
            remaining = HBackPorch;
            GraphicsState = ACTIVE_PERIOD;
            line++;
            DCH1CSIZ = 1;
            break;

        default:
            break;
    }

    //Setup DMA Transfer
    PLIB_DMA_ChannelXDestinationSizeSet(DMA_ID_0, DRV_GFX_LCC_DMA_CHANNEL_INDEX, (uint16_t) (remaining << 1));
    PLIB_DMA_ChannelXINTSourceFlagClear(DMA_ID_0, DRV_GFX_LCC_DMA_CHANNEL_INDEX, DMA_INT_BLOCK_TRANSFER_COMPLETE);
    SYS_DMA_ChannelEnable(dmaHandle);
}

// *****************************************************************************
/*
  Function: void DRV_GFX_LCC_PixelPut(uint16_t x, uint16_t y)

  Summary:
    outputs one pixel into the frame buffer at the x,y coordinate given

  Description:
    none

  Input:
        x,y - pixel coordinates
  Output:
    1 - call not successful (lcc driver busy)
    0 - call successful
*/
void DRV_GFX_LCC_PixelPut(uint16_t x, uint16_t y)
{
    _frameAddress = (uint32_t)(((y)*(DISP_HOR_RESOLUTION))+(x));
    LCCSaveData();

    PMDIN = drvLCCObj.initData->color;
    LCCRecoverData();
}

// *****************************************************************************
/*
  Function: void DRV_GFX_LCC_BarFill(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom)

  Summary:
    outputs one pixel into the frame buffer at the x,y coordinate given

  Description:
    none

  Input:
        left,top - pixel coordinates
        right, bottom - pixel coordinates

  Output:
          1 - call not successful (lcc driver busy)
          0 - call successful
*/
void  DRV_GFX_LCC_BarFill(uint16_t left, uint16_t top, uint16_t right, uint16_t bottom)
{
    uint16_t lineCount = bottom - top + 1;//vchange;
    uint16_t count = right - left + 1;//hchange;
    _frameAddress = (uint32_t)(((top)*(DISP_HOR_RESOLUTION))+(left));

    while(lineCount)
    {
       for(_pixelRendercount = count; _pixelRendercount > 0; _pixelRendercount--)
       {
			/*Suspend DMA Trigger*/
			LCCSaveData();
			if((_pixelRendercount > 8) && (PMADDR < PMP_ADDRESS_LINES-8)) //Write 8 pixels at once
			{
				PMDIN = drvLCCObj.initData->color; while(PMMODEbits.BUSY == 1);
				PMDINSET = 0; while(PMMODEbits.BUSY == 1);
				PMDINSET = 0; while(PMMODEbits.BUSY == 1);
				PMDINSET = 0; while(PMMODEbits.BUSY == 1);
				PMDINSET = 0;
				_frameAddress += 7;
				PMDINSET = 0;
				_pixelRendercount -= 7;
				PMDINSET = 0; while(PMMODEbits.BUSY == 1);
				PMDINSET = 0;
			}
			else
			{
			   PMDIN = drvLCCObj.initData->color;
			}
			LCCRecoverData();
			_frameAddress++;
       }
       _frameAddress += (DISP_HOR_RESOLUTION - count);
       lineCount--;
    }
}

// *****************************************************************************
/*
  Function: void  DRV_GFX_LCC_PixelArrayPut(uint16_t *color, uint16_t x, uint16_t y, uint16_t count)

  Summary:
    outputs an array of pixels of length count starting at *color

  Description:
    none

  Input:
          instance - driver instance
          *color - start of the array
                  x - x coordinate of the start point.
                  y - y coordinate of the end point.
                  count - number of pixels
  Output:
         handle to the number of pixels remaining
*/
void  DRV_GFX_LCC_PixelArrayPut(GFX_COLOR *color, uint16_t x, uint16_t y, uint16_t count, uint16_t lineCount)
{
    _frameAddress = (uint32_t)(((y)*(DISP_HOR_RESOLUTION))+(x));

    while(lineCount)
    {
       for(_pixelRendercount = count; _pixelRendercount > 0; _pixelRendercount--)
       {
			/*Suspend DMA Trigger*/
			LCCSaveData();
			if((_pixelRendercount > 4) && (PMADDR < PMP_ADDRESS_LINES-8)) //Write 8 pixels at once
			{
				PMDIN = *color++;
				_pixelRendercount -= 3;
				PMDIN = *color++;
				_frameAddress += 3;
				PMDIN = *color++;
				while(PMMODEbits.BUSY==1);
			}

	        PMDIN =  *color++;
			LCCRecoverData();
			_frameAddress++;
       }
       _frameAddress += (DISP_HOR_RESOLUTION - count);
       lineCount--;
    }
}

// *****************************************************************************
/*
  Function: uint16_t*  DRV_GFX_LCC_PixelArrayGet(uint16_t *color, uint16_t x, uint16_t y, uint16_t count)

  Summary:
    outputs an array of pixels of length count starting at *color

  Description:
    none

  Input:
          instance - driver instance
          *color - start of the array
                  x - x coordinate of the start point.
                  y - y coordinate of the end point.
                  count - number of pixels
  Output:
         handle to the number of pixels remaining
*/
uint16_t*  DRV_GFX_LCC_PixelArrayGet(GFX_COLOR *color, uint16_t x, uint16_t y, uint16_t count)
{
     _frameAddress =  (uint32_t)(((y)*(DISP_HOR_RESOLUTION))+(x));
    while(count)
    {
		/*Suspend DMA Trigger*/
		LCCSaveData();
        PMCONCLR = 0x0100;

        *color = PMDIN;
                while(PMMODEbits.BUSY==1);
        *color++ = PMDIN;

        if((count > 4) && (PMADDR < PMP_ADDRESS_LINES-8)) //Write 8 pixels at once
        {
                *color++ = PMDIN;
                _frameAddress += 3;
                *color++ = PMDIN;
                count -= 3;
                *color++ = PMDIN;

        }
        while(PMMODEbits.BUSY==1);
        PMCONSET = 0x0100;
        LCCRecoverData();

        _frameAddress++;
        count--;
	}
    return 0;
}

uint16_t*  DRV_GFX_LCC_Layer(uint8_t instance, GFX_LAYER_PARAMS* layer)
{
    GFXPIPPage = layer->page;

   if(layer->on == 0)
   {
       PipVLength = 0;
       return 0;
   }
    PipStartL = layer->left;
    PipStartT = layer->top;
    PipVLength = layer->height;
    PipHLength = layer->width;
    PipX = layer->layerLeft;
    PipY = layer->layerTop;
    return 0;
}

uint16_t prevaddr;

inline void LCCSaveData(void)
{
    while(DCH1CSIZ != 1);
    while(DrawCount > PIXEL_DRAW_PER_DMA_TX);
    DMACONbits.SUSPEND = 1;
    while(PMMODEbits.BUSY == 1); //WAIT for DMA transfer to be suspended
    //Perform Write
#ifdef ADDR15
    ADDR15 = _frameAddress >> 15; //.bits.b15;
#endif
    ADDR16 = _frameAddress >> 16; //taskIndex->address.bits.b16;
    ADDR17 = drvLCCObj.initData->activePage;
    ADDR18 = drvLCCObj.initData->activePage>>1;

    //Save previous address value
    prevaddr = PMADDR;
    PMADDR = _frameAddress;
}

inline void LCCRecoverData(void)
{
    //Clean-up Address Lines
#ifdef ADDR15
    ADDR15 = overflowcount;          //count holds the additional address line count
    ADDR16 = (overflowcount>>1);
#else
	ADDR16 = overflowcount;
#endif
    ADDR17 = drvLCCObj.initData->visualPage;
    ADDR18 = drvLCCObj.initData->visualPage>>1;
    PMADDR = prevaddr;
    DMACONbits.SUSPEND = 0;
    DrawCount++;
}

// *****************************************************************************
/* Function:
    SYS_STATUS DRV_GFX_LCC_Status ( SYS_MODULE_OBJ object )

  Summary:
    Returns status of the specific module instance of the Driver module.

  Description:
    This function returns the status of the specific module instance disabling its
    operation (and any hardware for driver modules).

  PreCondition:
    The DRV_GFX_LCC_Initialize function should have been called before calling
    this function.

  Parameters:
    object          - DRV_GFX_LCC object handle, returned from DRV_GFX_LCC_Initialize

  Returns:
    SYS_STATUS_READY    Indicates that any previous module operation for the
                        specified module has completed

    SYS_STATUS_BUSY     Indicates that a previous module operation for the
                        specified module has not yet completed

    SYS_STATUS_ERROR    Indicates that the specified module is in an error state
*/

SYS_STATUS DRV_GFX_LCC_Status ( SYS_MODULE_OBJ object )
{
    DRV_GFX_LCC_OBJ *dObj = (DRV_GFX_LCC_OBJ*)object;
    return ( dObj->state );

} /* SYS_TMR_Status */

