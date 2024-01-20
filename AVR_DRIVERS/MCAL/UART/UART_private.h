/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 24 Mar 2023                                
 Project Name _ File Name   : UART _ UART_private.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_UART_UART_PRIVATE_H_
#define MCAL_UART_UART_PRIVATE_H_

#define UCSRA_REG	*((VUchar8_t *)0x2B)
#define UCSRB_REG	*((VUchar8_t *)0x2A)
#define UCSRC_REG	*((VUchar8_t *)0x40)
#define UBRRH_REG	*((VUchar8_t *)0x40)
#define UBRRL_REG	*((VUchar8_t *)0x29)
#define UDR_REG		*((VUchar8_t *)0x2C)





#endif /* MCAL_UART_UART_PRIVATE_H_ */
