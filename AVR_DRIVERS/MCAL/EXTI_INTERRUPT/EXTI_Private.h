/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 19 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | EXTI_Private.h         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#ifndef MCAL_EXTI_INTERRUPT_EXTI_PRIVATE_H_
#define MCAL_EXTI_INTERRUPT_EXTI_PRIVATE_H_

#define GICR_REG	*((VUchar8_t *)0x5B)
#define GIFR_REG	*((VUchar8_t *)0x5B)
#define MCUCR_REG	*((VUchar8_t *)0x55)
#define MCUCSR_REG	*((VUchar8_t *)0x54)



#endif /* MCAL_EXTI_INTERRUPT_EXTI_PRIVATE_H_ */
