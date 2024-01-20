/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 7 Apr 2023                                
 Project Name _ File Name   : I2C _ I2C_Private.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_I2C_I2C_PRIVATE_H_
#define MCAL_I2C_I2C_PRIVATE_H_


#define TWBR_REG	*((VUchar8_t *)0x20)
#define TWCR_REG	*((VUchar8_t *)0x56)
#define TWSR_REG	*((VUchar8_t *)0x21)
#define TWDR_REG	*((VUchar8_t *)0x23)
#define TWAR_REG	*((VUchar8_t *)0x22)


#endif /* MCAL_I2C_I2C_PRIVATE_H_ */
