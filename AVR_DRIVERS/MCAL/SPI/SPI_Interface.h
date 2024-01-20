/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 25 Mar 2023                                
 Project Name _ File Name   : SPI _ SPI_Interface.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_SPI_SPI_INTERFACE_H_
#define MCAL_SPI_SPI_INTERFACE_H_
#include"SPI_Private.h"
#include"../../MCAL/DIO/DIO_Interface.h"
#include"../../SERVIES/BIT_Math.h"
#include"../../SERVIES/STD_Types.h"


void SPI_vInitMaster();
void SPI_vInitSlave();
void SPI_vSendByte(Uchar8_t CopyUchar8_tData);
Uchar8_t SPI_Uchar8_tReciveByte();


#endif /* MCAL_SPI_SPI_INTERFACE_H_ */
