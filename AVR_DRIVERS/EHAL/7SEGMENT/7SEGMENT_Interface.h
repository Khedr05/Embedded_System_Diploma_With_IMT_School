/*
 * 7SEGMENT_Interface.h
 *
 *  Created on: 23 Feb 2023
 *      Author: 20101
 */

#ifndef EHAL_7SEGMENT_7SEGMENT_INTERFACE_H_
#define EHAL_7SEGMENT_7SEGMENT_INTERFACE_H_

#include"7SEGMENT_Config.h"
#include"../../SERVIES/STD_Types.h"
#include"../../MCAL/DIO/DIO_Interface.h"

void SEGMENT_vInit(Uchar8_t Copy_Uchar8_tSegmentNumber);
void SEGMENT_vDisplayNumber(Uchar8_t Copy_Uchar8_tSegmentNumber , Uchar8_t Copy_Uchar8_tNumber);
void SEGMENT_vSetLedPinVal(Uchar8_t Copy_Uchar8_tSegmentNumber , Uchar8_t Copy_Uchar8_tLedName,Uchar8_t Copy_Uchar8_tLedStatus);

#endif /* EHAL_7SEGMENT_7SEGMENT_INTERFACE_H_ */
