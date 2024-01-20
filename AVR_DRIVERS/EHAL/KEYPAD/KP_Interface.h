/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 19 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | KP_Interface.h         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#ifndef EHAL_KEYPAD_KP_INTERFACE_H_
#define EHAL_KEYPAD_KP_INTERFACE_H_


#include"KP_Config.h"
#include"KP_Private.h"
#include"../../SERVIES/BIT_Math.h"
#include"../../SERVIES/STD_Types.h"

void KP_vInitKeyPad(void);
void KPD_vGetPressedKey(Uchar8_t *Copy_u8PressedKey);


#endif /* EHAL_KEYPAD_KP_INTERFACE_H_ */
