/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 19 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | EXTI_Config.h         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#ifndef MCAL_EXTI_INTERRUPT_EXTI_CONFIG_H_
#define MCAL_EXTI_INTERRUPT_EXTI_CONFIG_H_

#define EXTI_LOW_ACTIVATION						0b00000000
#define EXTI_ANY_LOGICAL_CHANGE_ACTIVATION		0b00000001
#define EXTI_FALLING_EDGE_ACTIVATION			0b00000010
#define EXTI_RISAING_EDGE_ACTIVATION			0b00000011


#define EXTI0_PIN	6
#define EXTI1_PIN	7
#define EXTI2_PIN	5


#endif /* MCAL_EXTI_INTERRUPT_EXTI_CONFIG_H_ */
