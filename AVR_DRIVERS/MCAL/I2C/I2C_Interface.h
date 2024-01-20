/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 7 Apr 2023                                
 Project Name _ File Name   : I2C _ I2C_Interface.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_I2C_I2C_INTERFACE_H_
#define MCAL_I2C_I2C_INTERFACE_H_


#include"I2C_Private.h"
#include"I2C_Config.h"
#include"../../SERVIES/BIT_Math.h"
#include"../../SERVIES/STD_Types.h"

void TWI_vInit(void);
void TWI_vstart(void);
void TWI_vstop(void);
void TWI_vwritedata(Uchar8_t copy_u8data);
Uchar8_t TWI_vreadDataWithAck(void);
Uchar8_t TWI_vreadDataWithNotAck(void);
Uchar8_t TWI_Uchar8_tGetStatus(void);


#endif /* MCAL_I2C_I2C_INTERFACE_H_ */
