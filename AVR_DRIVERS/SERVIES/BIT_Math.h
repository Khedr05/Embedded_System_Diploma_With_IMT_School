/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 11 Feb 2023
 Project Name _ File Name   : AVR_DRIVER _ BIT_Math.h
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef SERVIES_BIT_MATH_H_
#define SERVIES_BIT_MATH_H_



#define SET_BIT(REG,BIT_NUMBER) 	(REG |= (1<<BIT_NUMBER))
#define GET_BIT(REG,BIT_NUMBER)		((REG>>BIT_NUMBER)&1)
#define CLEAR_BIT(REG,BIT_NUMBER) 	(REG &= (~(1<<BIT_NUMBER)))
#define TOGGLE_BIT(REG,BIT_NUMBER) 	(REG ^=(1<<BIT_NUMBER))


#endif /* SERVIES_BIT_MATH_H_ */
