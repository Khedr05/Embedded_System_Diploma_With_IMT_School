/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 12 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | LCD_Interface.h         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#ifndef EHAL_LCD_LCD_INTERFACE_H_
#define EHAL_LCD_LCD_INTERFACE_H_


#include"../../SERVIES/STD_TYPES.h"
#include"../../SERVIES/BIT_Math.h"
#include"LCD_Config.h"

void LCD_vInit(void);

void LCD_vSendCmd(Uchar8_t Copy_Uchar8_tCommand);

void LCD_vDisplayChar(Uchar8_t Copy_Uchar8_tChar);

void LCD_vDisplayString(Uchar8_t *Copy_Uchar8_tString);

void LCD_vDisplayNumber(Uint16_t Copy_Uchar8_tNumber);

void LCD_vCursorPosation(Uchar8_t Copy_Uchar8_tRow,Uchar8_t Copy_Uchar8_tColumn);

void LCD_vShiftingDisplay(Uchar8_t Copy_Uchar8_tShiftItirations,Uchar8_t Copy_Uchar8_tShiftDirection);

void LCD_vPrintNewChar(Uchar8_t *Copy_Uchar8_tArrayOfChar , Uchar8_t Copy_Uchar8_tCgramPosition);

#endif /* EHAL_LCD_LCD_INTERFACE_H_ */
