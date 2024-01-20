/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 19 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | EXTI_Prog.c         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/

#include"../DIO/DIO_Interface.h"
#include"EXTI_Interface.h"



void EXTI_vINIT(Uchar8_t Copy_Uchar8_tExtiNumber ,Uchar8_t Copy_Uchar8_tExtiSenceControl)
{
	switch(Copy_Uchar8_tExtiNumber)
	{
		case 0:
		{
			#if Copy_Uchar8_tExtiSenceControl == EXTI_LOW_ACTIVATION
				CLEAR_BIT(MCUCR_REG,0);
				CLEAR_BIT(MCUCR_REG,1);
			#elif Copy_Uchar8_tExtiSenceControl == EXTI_ANY_LOGICAL_CHANGE_ACTIVATION
				SET_BIT(MCUCR_REG,0);
				CLEAR_BIT(MCUCR_REG,1);
			#elif Copy_Uchar8_tExtiSenceControl == EXTI_FALLING_EDGE_ACTIVATION
				CLEAR_BIT(MCUCR_REG,0);
				SET_BIT(MCUCR_REG,1);
			#elif Copy_Uchar8_tExtiSenceControl == EXTI_RISAING_EDGE_ACTIVATION
				SET_BIT(MCUCR_REG,0);
				SET_BIT(MCUCR_REG,1);
			#error"Wrong Sence Control"
			#endif
				SET_BIT(GICR_REG,6);
			break;
		}
		case 1:
				{
					#if Copy_Uchar8_tExtiSenceControl == EXTI_LOW_ACTIVATION
						CLEAR_BIT(MCUCR_REG,2);
						CLEAR_BIT(MCUCR_REG,3);
					#elif Copy_Uchar8_tExtiSenceControl == EXTI_ANY_LOGICAL_CHANGE_ACTIVATION
						SET_BIT(MCUCR_REG,2);
						CLEAR_BIT(MCUCR_REG,3);
					#elif Copy_Uchar8_tExtiSenceControl == EXTI_FALLING_EDGE_ACTIVATION
						CLEAR_BIT(MCUCR_REG,2);
						SET_BIT(MCUCR_REG,3);
					#elif Copy_Uchar8_tExtiSenceControl == EXTI_RISAING_EDGE_ACTIVATION
						SET_BIT(MCUCR_REG,2);
						SET_BIT(MCUCR_REG,3);
					#error"Wrong Sence Control"
					#endif
						SET_BIT(GICR_REG,7);
					break;
				}
	}
}



void EXTI_vDisableInterrurupt(void)
{

}

