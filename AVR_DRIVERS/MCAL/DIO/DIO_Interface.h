/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 11 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | DIO_Interface.h         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_
#include"../../SERVIES/BIT_Math.h"
#include"../../SERVIES/STD_Types.h"
#include"../DIO/DIO_Private.h"

void DIO_vSetPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinNumber , Uchar8_t Copy_Uchar8_tPinDir);
void DIO_vSetPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinNumber , Uchar8_t Copy_Uchar8_tPinVal);
Uchar8_t DIO_Uchar8_tGetPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinNumber);


void DIO_vSetGroupPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir);
void DIO_vSetGroupPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal);
void DIO_vSetGroupPinCmd(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinCmd);

void DIO_vSetMsbPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir);
void DIO_vSetMsbPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal);



void DIO_vSetLsbPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir);
void DIO_vSetLsbPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal);


void DIO_vSet4LsbPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir);
void DIO_vSet4LsbPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal);


void DIO_vSet4MsbPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir);
void DIO_vSet4MsbPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal);




#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
