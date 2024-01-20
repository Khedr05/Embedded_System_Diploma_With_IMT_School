/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 25 Feb 2023                                
 Project Name _ File Name   : ADC_DRIVER _ ADC_Prog.c           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#include"ADC_Interface.h"


void ADC_vInit(Uchar8_t Copy_Uchar8_tAdcVoltageControl , Uchar8_t Copy_Uchar8_tAdcPrescaler)
{
	switch(Copy_Uchar8_tAdcVoltageControl)
	{
	case ADC_AREFF_VOLTAGE:
	{
		CLEAR_BIT(ADMUX_REG,ADMUX_REG_REFS1_BIT);
		CLEAR_BIT(ADMUX_REG,ADMUX_REG_REFS0_BIT);
		break;
	}
	case ADC_AVCC_VOLTAGE:
	{
		CLEAR_BIT(ADMUX_REG,ADMUX_REG_REFS1_BIT);
		SET_BIT(ADMUX_REG,ADMUX_REG_REFS0_BIT);
		break;
	}
	case ADC_INTERNAL_VOLTAGE:
	{
		SET_BIT(ADMUX_REG,ADMUX_REG_REFS0_BIT);
		SET_BIT(ADMUX_REG,ADMUX_REG_REFS1_BIT);
		break;
	}
	}
	switch(Copy_Uchar8_tAdcPrescaler)
	{
	case ADC_PRE2:
	{
		ADCSRA_REG = (ADMUX_REG & 0xF8 ) | (ADC_DIV2 & 0b00000111 );
		break;
	}
	case ADC_PRE4:
	{
		ADCSRA_REG = (ADMUX_REG & 0xF8 ) | (ADC_DIV4 & 0b00000111 );
		break;
	}
	case ADC_PRE8:
	{
		ADCSRA_REG = (ADMUX_REG & 0xF8 ) | (ADC_DIV8 & 0b00000111 );
		break;
	}
	case ADC_PRE16:
	{
		ADCSRA_REG = (ADMUX_REG & 0xF8 ) | (ADC_DIV16 & 0b00000111 );
		break;
	}
	case ADC_PRE32:
	{
		ADCSRA_REG = (ADMUX_REG & 0xF8 ) | (ADC_DIV32 & 0b00000111 );
		break;
	}
	case ADC_PRE64:
	{
		ADCSRA_REG = (ADMUX_REG & 0xF8 ) | (ADC_DIV64 & 0b00000111 );
		break;
	}
	case ADC_PRE128:
	{
		ADCSRA_REG = (ADMUX_REG & 0xF8 ) | (ADC_DIV128 & 0b00000111 );
		break;
	}
	}

	CLEAR_BIT(ADCSRA_REG,ADCSRA_REG_ADIF_BIT);
	SET_BIT(ADCSRA_REG,ADCSRA_REG_ADEN_BIT);
}



void ADC_vStartConversion(Uchar8_t Copy_Uchar8_tAdcChannel)
{

	switch(Copy_Uchar8_tAdcChannel)
	{
	case ADC_PIN0:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH0 & 0x1F);
		break;
	}
	case ADC_PIN1:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH1 & 0x1F);
		break;
	}
	case ADC_PIN2:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH2 & 0x1F);
		break;
	}
	case ADC_PIN3:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH3 & 0x1F);
		break;
	}
	case ADC_PIN4:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH4 & 0x1F);
		break;
	}
	case ADC_PIN5:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH5 & 0x1F);
		break;
	}
	case ADC_PIN6:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH6 & 0x1F);
		break;
	}
	case ADC_PIN7:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH7 & 0x1F);
		break;
	}
	}

	SET_BIT(ADCSRA_REG,ADCSRA_REG_ADSC_BIT);
}

void ADC_vInterruptState(Uchar8_t Copy_Uchar8_tIntState)
{
	switch(Copy_Uchar8_tIntState)
	{
	case ADC_ENABLE:
	{
		SET_BIT(ADCSRA_REG,ADCSRA_REG_ADIE_BIT);
		break;
	}
	case ADC_DISABLE:
	{
		CLEAR_BIT(ADCSRA_REG,ADCSRA_REG_ADIE_BIT);
		break;
	}
	}
}

Uint16_t ADC_Uchar16_tReadConvertedData(Uchar8_t Copy_Uchar8_tAdcChannel)
{
	switch(Copy_Uchar8_tAdcChannel)
	{
	case ADC_PIN0:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH0 & 0x1F);
		break;
	}
	case ADC_PIN1:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH1 & 0x1F);
		break;
	}
	case ADC_PIN2:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH2 & 0x1F);
		break;
	}
	case ADC_PIN3:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH3 & 0x1F);
		break;
	}
	case ADC_PIN4:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH4 & 0x1F);
		break;
	}
	case ADC_PIN5:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH5 & 0x1F);
		break;
	}
	case ADC_PIN6:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH6 & 0x1F);
		break;
	}
	case ADC_PIN7:
	{
		ADMUX_REG = (ADMUX_REG & 0xE0) | (ADC_CH7 & 0x1F);
		break;
	}
	}
	while(GET_BIT(ADCSRA_REG,ADCSRA_REG_ADIF_BIT) != 1)
	{

	}

	CLEAR_BIT(ADCSRA_REG,ADCSRA_REG_ADIF_BIT);

	return ADC_DATA;
}
