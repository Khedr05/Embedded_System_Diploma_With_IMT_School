/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 25 Feb 2023                                
 Project Name _ File Name   : ADC_DRIVER _ ADC_Interface.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_

#include"ADC_Config.h"
#include"ADC_Private.h"
#include"../../SERVIES/BIT_Math.h"
#include"../../MCAL/MCU_INTERRUPT/MCU_Interface.h"


//#define ADC_VOLTAGE		ADC_INTERNAL_VOLTAGE
//#define ADC_INIT_CH		ADC_PIN0
//#define ADC_PRESCALER	ADC_PRE64
//#define ADC_INTERRUPT	ADC_DISABLED


void ADC_vInit(Uchar8_t Copy_Uchar8_tAdcVoltageControl , Uchar8_t Copy_Uchar8_tAdcPrescaler);

void ADC_vStartConversion(Uchar8_t Copy_Uchar8_tAdcChannel);

void ADC_vInterruptState(Uchar8_t Copy_Uchar8_tIntState);

Uint16_t ADC_Uchar16_tReadConvertedData(Uchar8_t Copy_Uchar8_tAdcPin);




#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
