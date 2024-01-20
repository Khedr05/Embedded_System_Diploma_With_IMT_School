


#include"7SEGMENT_Interface.h"

void SEGMENT_vInit(Uchar8_t Copy_Uchar8_tSegmentNumber)
{
	switch(Copy_Uchar8_tSegmentNumber)
	{
	case SEGMENT_ONE:
	{
		DIO_vSetGroupPinDir(SEGMENT_ONE_PORT,OUTPUT);
		break;
	}
	case SEGMENT_TWO:
		DIO_vSetGroupPinDir(SEGMENT_TWO_PORT,OUTPUT);
		break;
	}
}


void SEGMENT_vSetLedPinVal(Uchar8_t Copy_Uchar8_tSegmentNumber , Uchar8_t Copy_Uchar8_tLedName,Uchar8_t Copy_Uchar8_tLedStatus)
{
	switch(Copy_Uchar8_tSegmentNumber)
	{
	case SEGMENT_ONE:
	{
		DIO_vSetPinVal(SEGMENT_ONE_PORT,Copy_Uchar8_tLedName,Copy_Uchar8_tLedStatus);
		break;
	}
	case SEGMENT_TWO:
	{
		DIO_vSetPinVal(SEGMENT_TWO_PORT,Copy_Uchar8_tLedName,Copy_Uchar8_tLedStatus);
		break;
	}
	}
}

void SEGMENT_vDisplayNumber(Uchar8_t Copy_Uchar8_tSegmentNumber , Uchar8_t Copy_Uchar8_tNumber)
{


	switch(Copy_Uchar8_tNumber)
	{
	case 0:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 1:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 2:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 3:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 4:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 5:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 6:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 7:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 8:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	case 9:
	{
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDA,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDB,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDC,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDD,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDE,OFF);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDF,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDG,ON);
		SEGMENT_vSetLedPinVal(Copy_Uchar8_tSegmentNumber,LEDDOT,OFF);
		break;
	}
	}
}
