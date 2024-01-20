/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 7 Apr 2023                                
 Project Name _ File Name   : I2C _ I2C_Prog.c           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#include"I2C_Interface.h"



void TWI_vInit(void)
{
	TWBR_REG = 2;

	CLEAR_BIT(TWSR_REG,0);
	CLEAR_BIT(TWSR_REG,1);

	TWAR_REG = 0x02;

	SET_BIT(TWCR_REG,2);

}
void TWI_vstart(void)
{
	SET_BIT(TWCR_REG,7);
	SET_BIT(TWCR_REG,5);
	SET_BIT(TWCR_REG,2);

	while(GET_BIT(TWCR_REG,7))
	{

	}
}
void TWI_vstop(void)
{
		SET_BIT(TWCR_REG,7);
		SET_BIT(TWCR_REG,4);
		SET_BIT(TWCR_REG,2);
}
void TWI_vwritedata(Uchar8_t copy_u8data)
{
	TWDR_REG = copy_u8data;
	SET_BIT(TWCR_REG,7);
	SET_BIT(TWCR_REG,6);
	SET_BIT(TWCR_REG,2);
	while(GET_BIT(TWCR_REG,7))
	{

	}

}
Uchar8_t TWI_vreadDataWithAck(void)
{
	SET_BIT(TWCR_REG,7);
	SET_BIT(TWCR_REG,6);
	SET_BIT(TWCR_REG,2);
	while(GET_BIT(TWCR_REG,7))
	{

	}

	TWDR_REG &= 0xF8;
	return TWDR_REG;
}
Uchar8_t TWI_vreadDataWithNotAck(void)
{
	SET_BIT(TWCR_REG,7);
	CLEAR_BIT(TWCR_REG,6);
	SET_BIT(TWCR_REG,2);
	while(GET_BIT(TWCR_REG,7))
	{

	}

	TWDR_REG &= 0xF8;
	return TWDR_REG;
}
Uchar8_t TWI_Uchar8_tGetStatus(void)
{
	return TWSR_REG;
}
