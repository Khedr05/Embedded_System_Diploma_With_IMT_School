/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 24 Mar 2023                                
 Project Name _ File Name   : UART _ UART_interface.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_UART_UART_INTERFACE_H_
#define MCAL_UART_UART_INTERFACE_H_

/*--------------- UART Includes -----------------*/
#include "UART_config.h"
#include "UART_private.h"
#include "../DIO/DIO_Interface.h"
#include "../../SERVIES/STD_Types.h"
#include "../../SERVIES/BIT_Math.h"
/*--------------- UART Initial CFG -----------------*/


/*--------------- UART Function Prototypes -----------------*/

void UART_vInit ();

void UART_vSendData(Uchar8_t LOCAL_uData);

Uchar8_t UART_uRecieveData(void);

#endif /* MCAL_UART_UART_INTERFACE_H_ */
