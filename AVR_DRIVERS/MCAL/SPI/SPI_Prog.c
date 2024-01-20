/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 25 Mar 2023                                
 Project Name _ File Name   : SPI _ SPI_Prog.c           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#include"SPI_Interface.h"


void SPI_vInitMaster()
{	DIO_vSetPinDir(PORTB,PIN7,OUTPUT);
	DIO_vSetPinDir(PORTB,PIN4,OUTPUT);
	DIO_vSetPinDir(PORTB,PIN5,OUTPUT);
	DIO_vSetPinDir(PORTB,PIN6,INPUT);
//	SET_BIT(SPCR_REG,SPCR_REG_SPE_BIT);
//	SET_BIT(SPCR_REG,SPCR_REG_DORD_BIT);
//	SET_BIT(SPCR_REG,SPCR_REG_MSTR_BIT);
//	CLEAR_BIT(SPCR_REG,SPCR_REG_CPOL_BIT);
//	CLEAR_BIT(SPCR_REG,SPCR_REG_CPHA_BIT);
//	CLEAR_BIT(SPCR_REG,SPCR_REG_SPR1_BIT);
//	CLEAR_BIT(SPCR_REG,SPCR_REG_SPR0_BIT);
//	CLEAR_BIT(SPSR_REG,SPSR_REG_SPI2X_BIT);
	SPCR_REG = (1<<SPCR_REG_SPE_BIT) | (1<<SPCR_REG_MSTR_BIT);
}
void SPI_vInitSlave()
{
	DIO_vSetPinDir(PORTB,PIN4,INPUT);
	DIO_vSetPinDir(PORTB,PIN5,INPUT);
	DIO_vSetPinDir(PORTB,PIN6,OUTPUT);
	DIO_vSetPinDir(PORTB,PIN7,INPUT);
	SET_BIT(SPCR_REG,SPCR_REG_SPE_BIT);
	SET_BIT(SPCR_REG,SPCR_REG_DORD_BIT);
	CLEAR_BIT(SPCR_REG,SPCR_REG_MSTR_BIT);
	CLEAR_BIT(SPCR_REG,SPCR_REG_CPOL_BIT);
	CLEAR_BIT(SPCR_REG,SPCR_REG_CPHA_BIT);
	CLEAR_BIT(SPCR_REG,SPCR_REG_SPR1_BIT);
	CLEAR_BIT(SPCR_REG,SPCR_REG_SPR0_BIT);
	CLEAR_BIT(SPSR_REG,SPSR_REG_SPI2X_BIT);
}
void SPI_vSendByte(Uchar8_t CopyUchar8_tData)
{
	SPDR_REG = CopyUchar8_tData;
	while(GET_BIT(SPSR_REG,SPSR_REG_SPIF_BIT) != 1);
}
Uchar8_t SPI_Uchar8_tReciveByte()
{
	Uchar8_t LOCAL_data;
	while(GET_BIT(SPSR_REG,SPSR_REG_SPIF_BIT) != 1);
	LOCAL_data = SPDR_REG;
	return LOCAL_data;
}

