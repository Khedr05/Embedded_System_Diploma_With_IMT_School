/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 24 Mar 2023                                
 Project Name _ File Name   : UART _ UART_prog.c           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#include "UART_interface.h"

void UART_vInit (const UART_tfcgInitialize *LOCAL_tcfgUART)
{
	SET_BIT(UCSRA_REG,1);
	SET_BIT(UCSRB_REG,3);
	SET_BIT(UCSRB_REG,4);
	if (LOCAL_tcfgUART->GLOBAL_tcfgCharSize == CHAR_8_BITS)
	{
		CLEAR_BIT(UCSRB_REG,2);
		SET_BIT(UCSRC_REG,1);
		SET_BIT(UCSRC_REG,2);
	}

	if (LOCAL_tcfgUART->GLOBAL_tcfgParityState == PARITY_DISABLE)
	{
		CLEAR_BIT(UCSRC_REG,4);
		CLEAR_BIT(UCSRC_REG,5);
	}

	if (LOCAL_tcfgUART->GLOBAL_tcfgStopBitsNUM == STOP_BIT_ONE)
	{
		CLEAR_BIT(UCSRC_REG,3);
	}
	if (LOCAL_tcfgUART->GLOBAL_tcfgInterruptState == UART_INT_DISABLED)
	{
		CLEAR_BIT(UCSRB_REG,5);
		CLEAR_BIT(UCSRB_REG,6);
		CLEAR_BIT(UCSRB_REG,7);
	}
	CLEAR_BIT(UCSRC_REG,6);
	//CLEAR_BIT(UBRRH_REG,7);
	UBRRL_REG = LOCAL_tcfgUART->GLOBAL_tcfgBaudRateValue;
	UBRRH_REG = (LOCAL_tcfgUART->GLOBAL_tcfgBaudRateValue >> 8);
}

void UART_vSendData(Uchar8_t LOCAL_uData)
{
	while (GET_BIT(UCSRA_REG,5) != 1 );
	UDR_REG = LOCAL_uData;
}

Uchar8_t UART_uRecieveData(void)
{
	while (GET_BIT(UCSRA_REG,7) != 1);
	return UDR_REG;
}

