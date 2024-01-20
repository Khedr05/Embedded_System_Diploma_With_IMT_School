/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 12 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | LCD_PROG.c         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#include"util/delay.h"
#include"../../MCAL/DIO/DIO_Interface.h"
#include"LCD_Interface.h"
#define	F_CPU 8000000UL

void LCD_vInit(void)
{

	DIO_vSetGroupPinDir(LCD_DATA_PORT,OUTPUT);

	DIO_vSetPinDir(LCD_CTRL_PORT,PIN_RS,OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT,PIN_RW,OUTPUT);
	DIO_vSetPinDir(LCD_CTRL_PORT,PIN_EN,OUTPUT);

	_delay_ms(50);

	LCD_vSendCmd(TWO_LINE_LCD_EIGHT_BIT_MODE);

	_delay_ms(50);

	LCD_vSendCmd(CURSOR_ON);

	_delay_ms(50);

	LCD_vSendCmd(CLEAR_COMMAND);

	_delay_ms(50);
}

void LCD_vSendCmd(Uchar8_t Copy_Uchar8_tCommand)
{
	DIO_vSetPinVal(LCD_CTRL_PORT,PIN_RS,LOW);
	DIO_vSetPinVal(LCD_CTRL_PORT,PIN_RW,LOW);
	_delay_ms(50);
	DIO_vSetPinVal(LCD_CTRL_PORT,PIN_EN,HIGH);
	_delay_ms(50);
	DIO_vSetGroupPinCmd(LCD_DATA_PORT,Copy_Uchar8_tCommand);
	_delay_ms(50);
	DIO_vSetPinVal(LCD_CTRL_PORT,PIN_EN,LOW);
	_delay_ms(50);
}

void LCD_vDisplayChar(Uchar8_t Copy_Uchar8_tChar)
{
	DIO_vSetPinVal(LCD_CTRL_PORT,PIN_RS,HIGH);
	DIO_vSetPinVal(LCD_CTRL_PORT,PIN_RW,LOW);
	_delay_ms(50);
	DIO_vSetPinVal(LCD_CTRL_PORT,PIN_EN,HIGH);
	_delay_ms(50);
	DIO_vSetGroupPinCmd(LCD_DATA_PORT,Copy_Uchar8_tChar);
	_delay_ms(50);
	DIO_vSetPinVal(LCD_CTRL_PORT,PIN_EN,LOW);
	_delay_ms(50);
}

void LCD_vDisplayString(Uchar8_t *Copy_Uchar8_tString)
{
	Uchar8_t LOCAL_Uchar8_tStringCounter;
	for(LOCAL_Uchar8_tStringCounter = 0;(*(Copy_Uchar8_tString+LOCAL_Uchar8_tStringCounter))!= '\0';LOCAL_Uchar8_tStringCounter++)
	{
		LCD_vDisplayChar(*(Copy_Uchar8_tString+LOCAL_Uchar8_tStringCounter));
	}
}

void LCD_vDisplayNumber(Uint16_t Copy_Uchar8_tNumber)
{
	Uchar8_t LOCAL_Uchar8_tArrayOfDigits[20];
	Uchar8_t LOCAL_Uchar8_tDigitsCounter = 0;
	Schar8_t LOCAL_Schar8_tLoopCounter;
		if (Copy_Uchar8_tNumber == 0)
		{
			LCD_vDisplayChar('0');
		}
		else
		{
			while(Copy_Uchar8_tNumber != 0)
			{
				LOCAL_Uchar8_tArrayOfDigits[LOCAL_Uchar8_tDigitsCounter] = Copy_Uchar8_tNumber % 10;
				Copy_Uchar8_tNumber /=10;
				LOCAL_Uchar8_tDigitsCounter++;
			}
			for(LOCAL_Schar8_tLoopCounter = LOCAL_Uchar8_tDigitsCounter-1;LOCAL_Schar8_tLoopCounter>=0;LOCAL_Schar8_tLoopCounter--)
			{
				LCD_vDisplayChar(LOCAL_Uchar8_tArrayOfDigits[LOCAL_Schar8_tLoopCounter]+48);
			}
		}
}

void LCD_vCursorPosation(Uchar8_t Copy_Uchar8_tRow,Uchar8_t Copy_Uchar8_tColumn)
{
	if (Copy_Uchar8_tRow == 0 && Copy_Uchar8_tColumn<16)
	LCD_vSendCmd((Copy_Uchar8_tColumn & 0x0F)|0x80);
	else if (Copy_Uchar8_tRow == 1 && Copy_Uchar8_tColumn<16)
	LCD_vSendCmd((Copy_Uchar8_tColumn & 0x0F)|0xC0);
}

void LCD_vShiftingDisplay(Uchar8_t Copy_Uchar8_tShiftItirations,Uchar8_t Copy_Uchar8_tShiftDirection)
{
	Uchar8_t LOCAL_Uchar8_tLoopCounter;
	for(LOCAL_Uchar8_tLoopCounter = 0;LOCAL_Uchar8_tLoopCounter<Copy_Uchar8_tShiftItirations;LOCAL_Uchar8_tLoopCounter++)
	{
		LCD_vSendCmd(Copy_Uchar8_tShiftDirection);
	}
}

void LCD_vPrintNewChar(Uchar8_t *Copy_Uchar8_tArrayOfChar , Uchar8_t Copy_Uchar8_tCgramPosition)
{
	Uchar8_t LOCAL_Uchar8_tLoopCounter;
	if(Copy_Uchar8_tCgramPosition<8)
	{
		LCD_vSendCmd(SET_CGRAM_LOCATION|(Copy_Uchar8_tCgramPosition*8));
		for(LOCAL_Uchar8_tLoopCounter = 0;LOCAL_Uchar8_tLoopCounter<8;LOCAL_Uchar8_tLoopCounter++)
		LCD_vDisplayChar(Copy_Uchar8_tArrayOfChar[LOCAL_Uchar8_tLoopCounter]);
	}
	LCD_vSendCmd(SET_CURSOR_LOCATION);
}
