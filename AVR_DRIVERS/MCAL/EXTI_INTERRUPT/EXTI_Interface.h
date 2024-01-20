/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 19 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | EXTI_Interface.h         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#ifndef MCAL_EXTI_INTERRUPT_EXTI_INTERFACE_H_
#define MCAL_EXTI_INTERRUPT_EXTI_INTERFACE_H_


#include"EXTI_Private.h"
#include"EXTI_Config.h"
#include"../../SERVIES/BIT_Math.h"
#include"../../SERVIES/STD_TYPES.h"


#define EXTI_INTERUPT			EXTI0_PIN
#define EXTI_ACTIVATION_SENSE	LOW_ACTIVATION

// this function shall be responsible for initializing external interuppt


void EXTI_vINIT(Uchar8_t Copy_Uchar8_tExtiNumber ,Uchar8_t Copy_Uchar8_tExtiSenceControl);

// this function shall be responsible for disable external interuppt


void EXTI_vDisableInterrurupt(void);

#endif /* MCAL_EXTI_INTERRUPT_EXTI_INTERFACE_H_ */
