/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 11 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | DIO_Prog.c         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
 *//*************************************************************************/

#include"../DIO/DIO_Interface.h"


void DIO_vSetPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinNumber , Uchar8_t Copy_Uchar8_tPinDir)
{
	if(Copy_Uchar8_tPinDir == OUTPUT)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			SET_BIT(DDRA_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTB:
		{
			SET_BIT(DDRB_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTC:
		{
			SET_BIT(DDRC_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTD:
		{
			SET_BIT(DDRD_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		}
	}
	else if(Copy_Uchar8_tPinDir == INPUT)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			CLEAR_BIT(DDRA_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTB:
		{
			CLEAR_BIT(DDRB_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTC:
		{
			CLEAR_BIT(DDRC_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTD:
		{
			CLEAR_BIT(DDRD_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		}
	}
}


void DIO_vSetPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinNumber , Uchar8_t Copy_Uchar8_tPinVal)
{
	if(Copy_Uchar8_tPinVal == HIGH)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			SET_BIT(PORTA_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTB:
		{
			SET_BIT(PORTB_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTC:
		{
			SET_BIT(PORTC_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTD:
		{
			SET_BIT(PORTD_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		}
	}
	else if(Copy_Uchar8_tPinVal == LOW)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			CLEAR_BIT(PORTA_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTB:
		{
			CLEAR_BIT(PORTB_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTC:
		{
			CLEAR_BIT(PORTC_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		case PORTD:
		{
			CLEAR_BIT(PORTD_REG,Copy_Uchar8_tPinNumber);
			break;
		}
		}
	}
}


Uchar8_t DIO_Uchar8_tGetPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinNumber)
{
	Uchar8_t Local_Uchar8_tGetPinVal = 0;

	switch(Copy_Uchar8_tPortName)
	{
	case PORTA:
	{
		Local_Uchar8_tGetPinVal = GET_BIT(PINA_REG,Copy_Uchar8_tPinNumber);
		break;
	}
	case PORTB:
	{
		Local_Uchar8_tGetPinVal = GET_BIT(PINB_REG,Copy_Uchar8_tPinNumber);
		break;
	}
	case PORTC:
	{
		Local_Uchar8_tGetPinVal = GET_BIT(PINC_REG,Copy_Uchar8_tPinNumber);
		break;
	}
	case PORTD:
	{
		Local_Uchar8_tGetPinVal = GET_BIT(PIND_REG,Copy_Uchar8_tPinNumber);
		break;
	}
	}
	return Local_Uchar8_tGetPinVal;
}

void DIO_vSetGroupPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir)
{

	if(Copy_Uchar8_tPinDir == OUTPUT)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			DDRA_REG = 0xFF;
			break;
		}
		case PORTB:
		{
			DDRB_REG = 0xFF;
			break;
		}
		case PORTC:
		{
			DDRC_REG = 0xFF;
			break;
		}
		case PORTD:
		{
			DDRD_REG = 0xFF;
			break;
		}
		}
	}
	else if(Copy_Uchar8_tPinDir == INPUT)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			DDRA_REG = 0x00;
			break;
		}
		case PORTB:
		{
			DDRB_REG = 0x00;
			break;
		}
		case PORTC:
		{
			DDRC_REG = 0x00;
			break;
		}
		case PORTD:
		{
			DDRD_REG = 0x00;
			break;
		}
		}
	}
}

void DIO_vSetGroupPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal)
{
	if(Copy_Uchar8_tPinVal == HIGH)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			PORTA_REG |= 0xFF;
			break;
		}
		case PORTB:
		{
			PORTB_REG |= 0xFF;
			break;
		}
		case PORTC:
		{
			PORTC_REG |= 0xFF;
			break;
		}
		case PORTD:
		{
			PORTD_REG |= 0xFF;
			break;
		}
		}
	}
	else if(Copy_Uchar8_tPinVal == LOW)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			PORTA_REG &= 0x00;
			break;
		}
		case PORTB:
		{
			PORTB_REG &= 0x00;
			break;
		}
		case PORTC:
		{
			PORTC_REG &= 0x00;
			break;
		}
		case PORTD:
		{
			PORTD_REG &= 0x00;
			break;
		}
		}
	}
}

void DIO_vSetGroupPinCmd(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinCmd)
{
	switch(Copy_Uchar8_tPortName)
	{
	case PORTA:
		PORTA_REG &= 0;
		PORTA_REG |= Copy_Uchar8_tPinCmd;
		break;
	case PORTB:
		PORTB_REG &= 0;
		PORTB_REG |= Copy_Uchar8_tPinCmd;
		break;
	case PORTC:
		PORTC_REG &= 0;
		PORTC_REG |= Copy_Uchar8_tPinCmd;
		break;
	case PORTD:
		PORTD_REG &= 0;
		PORTD_REG |= Copy_Uchar8_tPinCmd;
		break;
	}
}

void DIO_vSetMsbPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir)
{
	DIO_vSetPinDir(Copy_Uchar8_tPortName ,PIN7,Copy_Uchar8_tPinDir);
}

void DIO_vSetMsbPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal)
{
	DIO_vSetPinVal(Copy_Uchar8_tPortName ,PIN7,Copy_Uchar8_tPinVal);
}

void DIO_vSetLsbPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir)
{
	DIO_vSetPinDir(Copy_Uchar8_tPortName ,PIN0,Copy_Uchar8_tPinDir);
}

void DIO_vSetLsbPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal)
{
	DIO_vSetPinVal(Copy_Uchar8_tPortName ,PIN0,Copy_Uchar8_tPinVal);
}

void DIO_vSet4LsbPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir)
{
	if(Copy_Uchar8_tPinDir == OUTPUT)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			DDRA_REG |= 0x0F;
			break;
		}
		case PORTB:
		{
			DDRB_REG |= 0x0F;
			break;
		}
		case PORTC:
		{
			DDRC_REG |= 0x0F;
			break;
		}
		case PORTD:
		{
			DDRD_REG |= 0x0F;
			break;
		}
		}
	}
	else if(Copy_Uchar8_tPinDir == INPUT)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			DDRA_REG &=0xF0;
			break;
		}
		case PORTB:
		{
			DDRB_REG &=0xF0;
			break;
		}
		case PORTC:
		{
			DDRC_REG &=0xF0;
			break;
		}
		case PORTD:
		{
			DDRD_REG &= 0xF0;
			break;
		}
		}
	}
}
void DIO_vSet4LsbPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal)
{
	if(Copy_Uchar8_tPinVal == HIGH)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			PORTA_REG |= 0x0F;
			break;
		}
		case PORTB:
		{
			PORTB_REG |= 0x0F;
			break;
		}
		case PORTC:
		{
			PORTC_REG |= 0x0F;
			break;
		}
		case PORTD:
		{
			PORTD_REG |= 0x0F;
			break;
		}
		}
	}
	else if(Copy_Uchar8_tPinVal == LOW)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			PORTA_REG &= 0xF0;
			break;
		}
		case PORTB:
		{
			PORTB_REG &= 0xF0;
			break;
		}
		case PORTC:
		{
			PORTC_REG &= 0xF0;
			break;
		}
		case PORTD:
		{
			PORTD_REG &= 0xF0;
			break;
		}

		}
	}
}


void DIO_vSet4MsbPinDir(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinDir)
{
	if(Copy_Uchar8_tPinDir == OUTPUT)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			DDRA_REG |= 0xF0;
			break;
		}
		case PORTB:
		{
			DDRB_REG |= 0xF0;
			break;
		}
		case PORTC:
		{
			DDRC_REG |= 0xF0;
			break;
		}
		case PORTD:
		{
			DDRD_REG |= 0xF0;
			break;
		}
		}
	}
	else if(Copy_Uchar8_tPinDir == INPUT)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			DDRA_REG &=0x0F;
			break;
		}
		case PORTB:
		{
			DDRB_REG &=0x0F;
			break;
		}
		case PORTC:
		{
			DDRC_REG &=0x0F;
			break;
		}
		case PORTD:
		{
			DDRD_REG &= 0x0F;
			break;
		}
		}
	}

}
void DIO_vSet4MsbPinVal(Uchar8_t Copy_Uchar8_tPortName , Uchar8_t Copy_Uchar8_tPinVal)
{
	if(Copy_Uchar8_tPinVal == HIGH)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			PORTA_REG |= 0xF0;
			break;
		}
		case PORTB:
		{
			PORTB_REG |= 0xF0;
			break;
		}
		case PORTC:
		{
			PORTC_REG |= 0xF0;
			break;
		}
		case PORTD:
		{
			PORTD_REG |= 0xF0;
			break;
		}
		}
	}
	else if(Copy_Uchar8_tPinVal == LOW)
	{
		switch(Copy_Uchar8_tPortName)
		{
		case PORTA:
		{
			PORTA_REG &=0x0F;
			break;
		}
		case PORTB:
		{
			PORTB_REG &=0x0F;
			break;
		}
		case PORTC:
		{
			PORTC_REG &=0x0F;
			break;
		}
		case PORTD:
		{
			PORTD_REG &= 0x0F;
			break;
		}
		}
	}

}
