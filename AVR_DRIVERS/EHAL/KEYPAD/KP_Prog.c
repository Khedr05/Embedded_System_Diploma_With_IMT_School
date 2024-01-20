/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 19 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | KP_Prog.c         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#include"KP_Interface.h"
#include"../../MCAL/DIO/DIO_Interface.h"
#include"util/delay.h"


const Uchar8_t GLOBAL_Uchar8_tAKeyPadInterface[4][4] =
{
	{'7','8','9','*'},
	{'4','5','6','/'},
	{'1','2','3','-'},
	{'%','0','=','+'}
};

const Uchar8_t GLOBAL_Uchar8_tARowNumber[4] = {KP_R1,KP_R2,KP_R3,KP_R4};

const Uchar8_t GLOBAL_Uchar8_tAcolNumber[4] = {KP_C1,KP_C2,KP_C3,KP_C4};


void KP_vInitKeyPad(void)
{
	DIO_vSet4LsbPinDir(KP_PORT,OUTPUT);
	DIO_vSet4MsbPinDir(KP_PORT,INPUT);
	DIO_vSet4MsbPinVal(KP_PORT,HIGH);
}


void KPD_vGetPressedKey(Uchar8_t *Copy_Uchar8_tPressedKey)
{
	Uchar8_t LOCAL_Uchar8_tRowCounter,LOCAL_Uchar8_tColCounter,LOCAL_Uchar8_tPinValue,LOCAL_Uchar8_tFlag = 0;

	for(LOCAL_Uchar8_tRowCounter = 0;LOCAL_Uchar8_tRowCounter<4;LOCAL_Uchar8_tRowCounter++)
	{
		for(LOCAL_Uchar8_tColCounter = 0;LOCAL_Uchar8_tColCounter<4;LOCAL_Uchar8_tColCounter++)
		{
			DIO_vSetPinVal(KP_PORT,GLOBAL_Uchar8_tARowNumber[LOCAL_Uchar8_tRowCounter],LOW);


			LOCAL_Uchar8_tPinValue = DIO_Uchar8_tGetPinVal(KP_PORT,GLOBAL_Uchar8_tAcolNumber[LOCAL_Uchar8_tColCounter]);

			if(LOCAL_Uchar8_tPinValue == BTN_PRESSED)
			{
				_delay_ms(250);
				*Copy_Uchar8_tPressedKey = GLOBAL_Uchar8_tAKeyPadInterface[LOCAL_Uchar8_tRowCounter][LOCAL_Uchar8_tColCounter];
				LOCAL_Uchar8_tFlag = 1;
				break;
			}
		}
		DIO_vSetPinVal(KP_PORT,GLOBAL_Uchar8_tARowNumber[LOCAL_Uchar8_tRowCounter],HIGH);
		if(LOCAL_Uchar8_tFlag == 1)
		{
			break;
		}
	}
}

