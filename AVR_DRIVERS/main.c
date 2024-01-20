/*************************************************************************/
// Author        : Sherif Ashraf Khadr									 
// Project       : AVR_DRIVERS                                    	 
// File          : main.c                                  	     
// Date          : 12 Aug 2023	                                                                                                 */
// GitHub        : https://github.com/sherifkhadr             		     
/*************************************************************************/

#include "EHAL/KEYPAD/KP_Interface.h"
#include "EHAL/7SEGMENT/7SEGMENT_Interface.h"


void main(void)
{
	KP_vInitKeyPad();
	SEGMENT_vInit(SEGMENT_TWO);
	SEGMENT_vDisplayNumber(SEGMENT_TWO,5);
	char key = 's';
	while(1)
	{
		KPD_vGetPressedKey(&key);

		if(key != 's')
		{
			key -='0';
			SEGMENT_vDisplayNumber(SEGMENT_TWO,key);
			key = 's';
		}
	}
}
