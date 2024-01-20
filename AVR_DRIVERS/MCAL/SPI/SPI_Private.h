/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 25 Mar 2023                                
 Project Name _ File Name   : SPI _ SPI_Private.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_SPI_SPI_PRIVATE_H_
#define MCAL_SPI_SPI_PRIVATE_H_

#define SPCR_REG 	*(( VUchar8_t *)0x2D)

typedef enum
{
	SPCR_REG_SPR0_BIT,
	SPCR_REG_SPR1_BIT,
	SPCR_REG_CPHA_BIT,
	SPCR_REG_CPOL_BIT,
	SPCR_REG_MSTR_BIT,
	SPCR_REG_DORD_BIT,
	SPCR_REG_SPE_BIT,
	SPCR_REG_SPIE_BIT,
}SPCR_REG_BITS;

#define SPSR_REG  	*(( VUchar8_t *)0x2E)
typedef enum
{
	SPSR_REG_SPI2X_BIT,
	SPSR_REG_RES4_BIT,
	SPSR_REG_RES3_BIT,
	SPSR_REG_RES2_BIT,
	SPSR_REG_RES1_BIT,
	SPSR_REG_RES0_BIT,
	SPSR_REG_WCOL_BIT,
	SPSR_REG_SPIF_BIT,


}SPSR_REG_BITS;

#define SPDR_REG  	*(( VUchar8_t *)0x2F)


#endif /* MCAL_SPI_SPI_PRIVATE_H_ */
