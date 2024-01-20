/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 10 Mar 2023                                
 Project Name _ File Name   : TIMERS _ TIMERS_Interface.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_TIMERS_TIMERS_INTERFACE_H_
#define MCAL_TIMERS_TIMERS_INTERFACE_H_

#include"../../SERVIES/BIT_Math.h"
#include"../../SERVIES/STD_Types.h"
#include"../../MCAL/DIO/DIO_Interface.h"
#include"TIMERS_Private.h"


void TIMER0_vInit();
void TIMER0_vResetTcnt();
void TIMER0_vSetTcnt(Uchar8_t Copy_Uchar8_tValue);
void TIMER0_vDisable();


void TIMER0_CTC_vInit();
void TIMER0_CTC_vResetTcnt();
void TIMER0_CTC_vSetTcnt(Uchar8_t Copy_Uchar8_tValue);
void TIMER0_CTC_vDisable();
void TIMER0_vPwdInit();

void TIMER1_vPwmInit();
void TIMER1_vSetOcr1Value(Uchar8_t comparevalue);
void TIMER1_vIcuInit();
void TIMER1_vChangeIcuMode(Uchar8_t mode);

void TIMER1_vResetTCNT1(void);
void TIMER1_vICUDisable(void);


//function to adjust top value
//function to reset tcnt1
//function to disable timer

void __vector_10(void) __attribute__((signal));
void (*global_ptr_func)(void);
void setcallback(void(*ptrfunc)());

#endif /* MCAL_TIMERS_TIMERS_INTERFACE_H_ */
