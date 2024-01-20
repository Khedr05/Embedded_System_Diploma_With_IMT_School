/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 20 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | MCU_Prog.c         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#include"MCU_Interface.h"

void MCU_vEnableInterrupt(void)
{
	SET_BIT(SREG_REG,7);

}
