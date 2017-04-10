/*****************************************************************************
 * Microchip Graphics Library Demo Application
 * This program shows how to use the Graphics Objects Layer.
 *****************************************************************************
 * File Name:       main_screen.c
 * Dependencies:    See Includes Section
 * Processor:       PIC24, PIC32
 * Compiler:       	MPLAB C30 V3.00, MPLAB C32
 * Linker:          MPLAB LINK30, MPLAB LINK32
 * Company:         Microchip Technology Inc.
 *
 *
 * Copyright © 2011 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).  
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED “AS IS” WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 *****************************************************************************/

/*****************************************************************************
 * SECTION: Includes
 *****************************************************************************/
#include "app.h"
#include "gfx_schemes.h"
#include "gfx_strings.h"
#include "gfx_screens.h"
#include "gol_ids.h"

#include "gfx/gfx_gol_static_text.h"
#include "gfx/gfx_gol_button.h"
#include "gfx/gfx_gol_group_box.h"

/*****************************************************************************
 * SECTION: Defines
 *****************************************************************************/
#define COMFORT_SCREEN_SIZE_X  (GFX_MaxXGet(GFX_INDEX_0) - (GFX_MaxXGet(GFX_INDEX_0) >> 2) - 100)
#define COMFORT_SCREEN_SIZE_Y  (GFX_MaxYGet(GFX_INDEX_0)  - 120)
#define COMFORT_SCREEN_START   (GFX_MaxXGet(GFX_INDEX_0) - COMFORT_SCREEN_SIZE_X - 50)
#define COMFORT_SCREEN_END     (GFX_MaxXGet(GFX_INDEX_0) -50)
/*****************************************************************************
 * SECTION: Defines
 *****************************************************************************/
GFX_XCHAR SetHeatStr[]      = { '7','2','\0'};                   //Temperature that can be changed
GFX_XCHAR SetCoolStr[]      = { '7','8','\0'};                   //Temperature that can be changed
GFX_XCHAR STemperatureStr[] = { '7','5','\0'};                   //Temperature that can be changed
GFX_XCHAR *Level[2]         = { (GFX_XCHAR *)UpstairsStr,
                            (GFX_XCHAR *)DownstairsStr
                          };
GFX_XCHAR *LevelTemp[2]     = { (GFX_XCHAR *)SetHeatStr,
                            (GFX_XCHAR *)SetCoolStr
                          };

/*****************************************************************************
 * SECTION: Externs
 *****************************************************************************/
extern const GFX_RESOURCE_HDR     Large;          // equal width font

/*****************************************************************************
 * void CreateComfortScreen(void)
 *****************************************************************************/
void CreateComfortScreen(void)
{
    static GFX_GOL_OBJ_SCHEME *currentScheme;
    static GFX_GOL_OBJ_SCHEME *currentTemperatureScheme;

    currentScheme               = GFX_SchemeGetCurrentScheme();
    currentTemperatureScheme    = GFX_SchemeGetCurrentTScheme();

    CreateMainScreen(0);

 	GFX_ColorSet(GFX_INDEX_0, currentScheme->Color0);

	while(GFX_RectangleRoundFillDraw(GFX_INDEX_0, (GFX_MaxXGet(GFX_INDEX_0) >> 2)+20,10 ,(GFX_MaxXGet(GFX_INDEX_0) - 10), 60,5) == GFX_STATUS_FAILURE);
	while(GFX_ImageDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2)+20, 10, (void *) &appointment_new) == GFX_STATUS_FAILURE);

        while(GFX_RectangleRoundFillDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2) + 20,90 ,GFX_MaxXGet(GFX_INDEX_0) - 10, GFX_MaxYGet(GFX_INDEX_0)-10,5) == GFX_STATUS_FAILURE);

	GFX_AlphaParamsSet(GFX_INDEX_0,GFX_PageGet(GFX_INDEX_0, ACTIVE_PAGE), (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 85,
                                               BACKGROUND_BUFFER, (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 85,
                                               GFX_PageGet(GFX_INDEX_0, ACTIVE_PAGE), (GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15, 85);

    while(GFX_AlphaBlendWindow(GFX_INDEX_0,
				     (GFX_MaxXGet(GFX_INDEX_0))-((GFX_MaxXGet(GFX_INDEX_0) >> 2) + 15),
				     GFX_MaxYGet(GFX_INDEX_0) - 90,
				     GFX_SchemeGetDefaultScheme()->AlphaValue) == GFX_STATUS_FAILURE);

    GFX_ColorSet(GFX_INDEX_0,GFX_RGBConvert(255, 102, 0));

    GFX_ColorSet(GFX_INDEX_0,GFX_RGBConvert(255, 102, 0));
    GFX_FontSet(GFX_INDEX_0,(void *) &Gentium_16);

    while(GFX_TextStringDraw(GFX_INDEX_0,COMFORT_SCREEN_START - 5,(GFX_MaxYGet(GFX_INDEX_0)>>1) - 110,(GFX_XCHAR *)TemperatureStr,0) == GFX_STATUS_FAILURE);
    while(GFX_TextStringDraw(GFX_INDEX_0,COMFORT_SCREEN_END - 145,(GFX_MaxYGet(GFX_INDEX_0)>>1) - 110,(GFX_XCHAR *)SetpointStr,0) == GFX_STATUS_FAILURE);
    while(GFX_TextStringDraw(GFX_INDEX_0,COMFORT_SCREEN_END - 140,(GFX_MaxYGet(GFX_INDEX_0)>>1) - 80,(GFX_XCHAR *)HeatStr,0) == GFX_STATUS_FAILURE);
    while(GFX_TextStringDraw(GFX_INDEX_0,COMFORT_SCREEN_END - 140,(GFX_MaxYGet(GFX_INDEX_0)>>1),(GFX_XCHAR *)CoolStr,0) == GFX_STATUS_FAILURE);

    while(GFX_TextStringDraw(GFX_INDEX_0,(GFX_MaxXGet(GFX_INDEX_0) >> 2) + 80,20,(GFX_XCHAR *)ComfortStr,0) == GFX_STATUS_FAILURE);

    GFX_GOL_StaticTextCreate
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_LEVEL_STATIC_TXT,             // ID
        COMFORT_SCREEN_START + 150,
        90,
        COMFORT_SCREEN_START + 256,
        120,                                // dimension
        GFX_GOL_STATICTEXT_DRAW_STATE,   // will be dislayed, has frame and center aligned
        (GFX_XCHAR *)Level[0],                            // text is from time value
        GFX_ALIGN_LEFT,
        currentTemperatureScheme
    );                  // alternate scheme

    GFX_GOL_StaticTextCreate
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_LEVEL_TEMP_STATIC_TXT,             // ID
        COMFORT_SCREEN_START + 10,
        190,
        COMFORT_SCREEN_START + 75,
        250,                                // dimension
        GFX_GOL_STATICTEXT_DRAW_STATE,   // will be displayed, has frame and center aligned
        (GFX_XCHAR *)LevelTemp[0],                            // text is from time value
        GFX_ALIGN_LEFT,
        altBTScheme
    );                  // alternate scheme

    GFX_GOL_StaticTextCreate
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_COOL_STATIC_TXT,             // ID
        COMFORT_SCREEN_END - 135,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) + 25,
        COMFORT_SCREEN_END - 100,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) + 60,                                // dimension
        GFX_GOL_STATICTEXT_DRAW_STATE,   // will be displayed, has frame and center aligned
        (GFX_XCHAR *)SetCoolStr,                            // text is from time value
        GFX_ALIGN_LEFT,
        currentTemperatureScheme
    );                  // alternate scheme

    GFX_GOL_StaticTextCreate
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_HEAT_STATIC_TXT,             // ID
        COMFORT_SCREEN_END - 135,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) - 55,
        COMFORT_SCREEN_END - 100,
         (GFX_MaxYGet(GFX_INDEX_0)>>1) - 21,                                // dimension
        GFX_GOL_STATICTEXT_DRAW_STATE,   // will be displayed, has frame and center aligned
        (GFX_XCHAR *)SetHeatStr,                            // text is from time value
        GFX_ALIGN_LEFT,
        currentTemperatureScheme
    );                  // alternate scheme


    GFX_GOL_ButtonCreate    //Left Arrow
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_LEFT_ARROW_BUT,                         // button ID
        COMFORT_SCREEN_START + 10,
        70+20,
        COMFORT_SCREEN_START + 110,
        110+20,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)LftStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme//ComfortScheme
    ); 

    GFX_GOL_ButtonCreate    //Right Arrow
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_RIGHT_ARROW_BUT,                         // button ID
        COMFORT_SCREEN_END - 110,
        70+20,
        COMFORT_SCREEN_END - 10,
        110+20,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)RghtStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme//ComfortScheme
    ); 
 
    GFX_GOL_ButtonCreate         //AUto
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_AUTO_BUT,                         // button ID
        COMFORT_SCREEN_START - 5,
        GFX_MaxYGet(GFX_INDEX_0)-140,
        COMFORT_SCREEN_START + 115,
        GFX_MaxYGet(GFX_INDEX_0)-100,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE|GFX_GOL_BUTTON_DISABLED_STATE,               // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)AUTOStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme//ComfortScheme
    ); 
   
    GFX_GOL_ButtonCreate      //HEat
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_HEAT_BUT,                         // button ID
        COMFORT_SCREEN_START - 5,
        GFX_MaxYGet(GFX_INDEX_0) - 95,
        COMFORT_SCREEN_START + 115,
        GFX_MaxYGet(GFX_INDEX_0) - 55,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)HEATStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme//ComfortScheme
    ); 
   
    GFX_GOL_ButtonCreate       //OFF
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_OFF_BUT,                         // button ID
        COMFORT_SCREEN_START + 117,
        GFX_MaxYGet(GFX_INDEX_0)-140,
        COMFORT_SCREEN_START + 237,
        GFX_MaxYGet(GFX_INDEX_0)-100,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)OFFStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme//ComfortScheme
    ); 
   
    GFX_GOL_ButtonCreate       //COOL
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_COOL_BUT,                         // button ID
        COMFORT_SCREEN_START + 117,
        GFX_MaxYGet(GFX_INDEX_0) - 95,
        COMFORT_SCREEN_START + 237,
        GFX_MaxYGet(GFX_INDEX_0) - 55,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)COOLStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme//ComfortScheme
    ); 

    GFX_GOL_GroupboxCreate           //System Mode
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_SYSTEM_MODE_GROUP_BOX,               // ID
        COMFORT_SCREEN_START - 6,
        GFX_MaxYGet(GFX_INDEX_0)-170,
        COMFORT_SCREEN_START + 238,
        GFX_MaxYGet(GFX_INDEX_0)-98,                                 // dimension
        GFX_GOL_GROUPBOX_DRAW_STATE,  // will be displayed after creation
        (GFX_XCHAR *)SystemModeStr,      // "Selection"
        GFX_ALIGN_HCENTER,
        currentTemperatureScheme//alt4Scheme
    );                              // alternate scheme

    GFX_GOL_GroupboxCreate           //System Mode
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_FAN_MODE_GROUP_BOX,               // ID
        COMFORT_SCREEN_END - 116,
        GFX_MaxYGet(GFX_INDEX_0)-170,
        COMFORT_SCREEN_END + 6,
        GFX_MaxYGet(GFX_INDEX_0)-98,                                 // dimension
        GFX_GOL_GROUPBOX_DRAW_STATE,  // will be displayed after creation
        (GFX_XCHAR *)FanModeStr,          // "Selection"
        GFX_ALIGN_HCENTER,
        currentTemperatureScheme
    );                              // alternate scheme
  
    GFX_GOL_ButtonCreate        //ON
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_FAN_ON_BUT,                         // button ID
        COMFORT_SCREEN_END - 115,
        GFX_MaxYGet(GFX_INDEX_0)-140,
        COMFORT_SCREEN_END + 5,
        GFX_MaxYGet(GFX_INDEX_0)-100,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)ONStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
         currentScheme
    ); 
   
    GFX_GOL_ButtonCreate           //AUTO
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_FAN_AUTO_BUT,                         // button ID
        COMFORT_SCREEN_END - 115,
        GFX_MaxYGet(GFX_INDEX_0) - 95,
        COMFORT_SCREEN_END + 5,
        GFX_MaxYGet(GFX_INDEX_0) - 55,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE|GFX_GOL_BUTTON_DISABLED_STATE,                           // draw a beveled button
        NULL,                               // no bitmap
        NULL,
        (GFX_XCHAR *)AUTOStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    ); 

    GFX_GOL_ButtonCreate          //Minus
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_COOL_MINUS_BUT,                         // button ID
        COMFORT_SCREEN_END - 235,
         (GFX_MaxYGet(GFX_INDEX_0)>>1) + 1,
        COMFORT_SCREEN_END - 175,
         (GFX_MaxYGet(GFX_INDEX_0)>>1) + 60,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        (void *) &list_remove,//NULL,                               // no bitmap
        (void *) &list_remove,
        NULL,                            	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    ); 
   
    GFX_GOL_ButtonCreate            //Minus
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_HEAT_MINUS_BUT,                         // button ID
        COMFORT_SCREEN_END - 235,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) - 80,
        COMFORT_SCREEN_END - 175,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) - 21,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        (void *) &list_remove,//NULL,                               // no bitmap
        (void *) &list_remove,
        NULL,//(XCHAR *)MinusStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    ); 

    GFX_GOL_ButtonCreate       //Plus
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_COOL_PLUS_BUT,                         // button ID
        COMFORT_SCREEN_END - 55,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) + 1,
        COMFORT_SCREEN_END + 5,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) + 60,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        (void *) &list_add,//NULL,                               // no bitmap
        (void *) &list_add,
        NULL,//(XCHAR *)PlusStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    ); 
   
    GFX_GOL_ButtonCreate           //Plus
    (
        GFX_INDEX_0,
        COMFORT_SCREEN_ID_HEAT_PLUS_BUT,                         // button ID
        COMFORT_SCREEN_END - 55,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) - 80,
        COMFORT_SCREEN_END + 5,
        (GFX_MaxYGet(GFX_INDEX_0)>>1) - 21,                                // dimension
        0,                                 // set radius
        GFX_GOL_BUTTON_DRAW_STATE,                           // draw a beveled button
        (void *) &list_add,//NULL,                               // no bitmap
        (void *) &list_add,
        NULL,//(XCHAR *)PlusStr,                 // "Button",     	// text
        GFX_ALIGN_HCENTER,
        currentScheme
    ); 

}
/*****************************************************************************
 * WORD MsgComfortScreen(WORD objMsg, OBJ_HEADER *pObj)
 *****************************************************************************/
uint16_t MsgComfortScreen(uint16_t objMsg, GFX_GOL_OBJ_HEADER *pObj)
{
    static uint16_t HeatTemp = 72;
    static uint16_t CoolTemp = 78;
    static uint8_t CurrentLevel = 0;
  
    MsgMainScreen(objMsg, pObj);  //Adds UI from PanelScreen

    switch(GFX_GOL_ObjectIDGet(pObj))
    {

         case COMFORT_SCREEN_ID_LEFT_ARROW_BUT:  
         case COMFORT_SCREEN_ID_RIGHT_ARROW_BUT:    
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {

                CurrentLevel ^= 1;

               GFX_GOL_StaticTextSet((GFX_GOL_STATICTEXT *)GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_LEVEL_STATIC_TXT), (GFX_XCHAR *)Level[CurrentLevel]);
               GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_LEVEL_STATIC_TXT), GFX_GOL_STATICTEXT_DRAW_STATE);
               
               GFX_GOL_StaticTextSet((GFX_GOL_STATICTEXT *)GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_LEVEL_TEMP_STATIC_TXT), (GFX_XCHAR *)LevelTemp[CurrentLevel]);
               GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_LEVEL_TEMP_STATIC_TXT), GFX_GOL_STATICTEXT_DRAW_STATE);

            }

            return (1);                             // process by default


        case COMFORT_SCREEN_ID_COOL_MINUS_BUT:    //Minus
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                CoolTemp--;
        
                SetCoolStr[0] = (CoolTemp/10) + 0x30;  //Convert Int to String
                SetCoolStr[1] = (CoolTemp%10) + 0x30;  //Convert Int to String
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_COOL_STATIC_TXT),GFX_GOL_STATICTEXT_DRAW_STATE);
            }

            return (1);                             // process by default

        case COMFORT_SCREEN_ID_HEAT_MINUS_BUT:    //Minus
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                HeatTemp--;
                SetHeatStr[0] = (HeatTemp/10) + 0x30;  //Convert Int to String
                SetHeatStr[1] = (HeatTemp%10) + 0x30;  //Convert Int to String
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_HEAT_STATIC_TXT),GFX_GOL_STATICTEXT_DRAW_STATE);
            }

            return (1);                             // process by default

       case COMFORT_SCREEN_ID_COOL_PLUS_BUT:    //Plus
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                CoolTemp++;
                SetCoolStr[0] = (CoolTemp/10) + 0x30;  //Convert Int to String
                SetCoolStr[1] = (CoolTemp%10) + 0x30;  //Convert Int to String
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_COOL_STATIC_TXT),GFX_GOL_STATICTEXT_DRAW_STATE);
            }

            return (1);                             // process by default

        case COMFORT_SCREEN_ID_HEAT_PLUS_BUT:    //Plus
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                HeatTemp++;
                SetHeatStr[0] = (HeatTemp/10) + 0x30;  //Convert Int to String
                SetHeatStr[1] = (HeatTemp%10) + 0x30;  //Convert Int to String
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_HEAT_STATIC_TXT),GFX_GOL_STATICTEXT_DRAW_STATE);
            }

            return (1);                             // process by default


        case COMFORT_SCREEN_ID_AUTO_BUT:
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_HEAT_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_HEAT_BUT),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_OFF_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_OFF_BUT),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_COOL_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_COOL_BUT),GFX_GOL_BUTTON_DRAW_STATE);
            }

            return (1);                             // process by default

        case COMFORT_SCREEN_ID_HEAT_BUT:
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_AUTO_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_AUTO_BUT),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_OFF_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_OFF_BUT),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_COOL_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_COOL_BUT),GFX_GOL_BUTTON_DRAW_STATE);
            }

            return (1);                             // process by default

        case COMFORT_SCREEN_ID_OFF_BUT:
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_AUTO_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_AUTO_BUT),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_HEAT_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_HEAT_BUT),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_COOL_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_COOL_BUT),GFX_GOL_BUTTON_DRAW_STATE);
            }

            return (1);                             // process by default

        case COMFORT_SCREEN_ID_COOL_BUT:
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_AUTO_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_AUTO_BUT),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_HEAT_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_HEAT_BUT),GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_OFF_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_OFF_BUT),GFX_GOL_BUTTON_DRAW_STATE);
            }

            return (1);                             // process by default

       
        case COMFORT_SCREEN_ID_FAN_ON_BUT:
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_FAN_AUTO_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_FAN_AUTO_BUT),GFX_GOL_BUTTON_DRAW_STATE);
            }

            return (1);                             // process by default

        case COMFORT_SCREEN_ID_FAN_AUTO_BUT:
            if(objMsg == GFX_GOL_BUTTON_ACTION_RELEASED)
            {
                GFX_GOL_ObjectStateSet(pObj,GFX_GOL_BUTTON_DISABLED_STATE|GFX_GOL_BUTTON_DRAW_STATE);
                
                GFX_GOL_ObjectStateClear(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_FAN_ON_BUT),GFX_GOL_BUTTON_DISABLED_STATE);
                GFX_GOL_ObjectStateSet(GFX_GOL_ObjectFind(GFX_INDEX_0,COMFORT_SCREEN_ID_FAN_ON_BUT),GFX_GOL_BUTTON_DRAW_STATE);

            }

            return (1);                             // process by default

        default:
            break;                             // process by default
    }
    return (1);
}
