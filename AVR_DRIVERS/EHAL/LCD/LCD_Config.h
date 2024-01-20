/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 12 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | LCD_Config.h         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#ifndef EHAL_LCD_LCD_CONFIG_H_
#define EHAL_LCD_LCD_CONFIG_H_

#define CLEAR_COMMAND	0x01
#define TWO_LINE_LCD_EIGHT_BIT_MODE		0x38
#define CURSOR_ON	0x0E
#define CURSOR_OFF 	0x0C
#define SET_CURSOR_LOCATION		0x80
#define SET_CGRAM_LOCATION		0x40


#define RIGHT  0x1C
#define LEFT   0x18



#define LCD_DATA_PORT	PORTD
#define LCD_CTRL_PORT	PORTC

#define PIN_RS	PIN0
#define PIN_RW	PIN1
#define	PIN_EN	PIN2


#endif /* EHAL_LCD_LCD_CONFIG_H_ */
