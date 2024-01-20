/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 25 Feb 2023                                
 Project Name _ File Name   : ADC_DRIVER _ ADC_Private.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_ADC_ADC_PRIVATE_H_
#define MCAL_ADC_ADC_PRIVATE_H_

#include"../../SERVIES/STD_Types.h"


#define		ADMUX_REG			*(( VUchar8_t *)0x27)
#define		ADCSRA_REG			*(( VUchar8_t *)0x26)
#define		ADC_DATA_HIGH_REG	*(( VUchar8_t *)0x25)
#define		ADC_DATA_LOW_REG	*(( VUchar8_t *)0x24)
#define		ADC_DATA			*(( VUint16_t *)0x24)



#define 	ADC_CH0		0b00000000
#define 	ADC_CH1		0b00000001
#define 	ADC_CH2		0b00000010
#define 	ADC_CH3		0b00000011
#define 	ADC_CH4		0b00000100
#define 	ADC_CH5		0b00000101
#define 	ADC_CH6		0b00000110
#define 	ADC_CH7		0b00000111


#define 	ADC_DIV2	0b00000000
#define 	ADC_DIV4	0b00000010
#define 	ADC_DIV8	0b00000011
#define 	ADC_DIV16	0b00000100
#define 	ADC_DIV32	0b00000101
#define 	ADC_DIV64	0b00000110
#define 	ADC_DIV128	0b00000111


// ADMUX_REG BITS

#define ADMUX_REG_REFS1_BIT		7
#define ADMUX_REG_REFS0_BIT		6
#define ADMUX_REG_ADLAR_BIT		5
#define ADMUX_REG_MUX4_BIT		4
#define ADMUX_REG_MUX3_BIT		3
#define ADMUX_REG_MUX2_BIT		2
#define ADMUX_REG_MUX1_BIT		1
#define ADMUX_REG_MUX0_BIT		0


// ADCSRA_REG BITS

#define ADCSRA_REG_ADEN_BIT		7
#define ADCSRA_REG_ADSC_BIT		6
#define ADCSRA_REG_ADATE_BIT	5
#define ADCSRA_REG_ADIF_BIT		4
#define ADCSRA_REG_ADIE_BIT		3
#define ADCSRA_REG_ADPS2_BIT	2
#define ADCSRA_REG_ADPS1_BIT	1
#define ADCSRA_REG_ADPS0_BIT	0


//


#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
