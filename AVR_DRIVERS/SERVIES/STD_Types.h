/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 11 Feb 2023
 Project Name _ File Name   : AVR_DRIVER _ STD_Types.h
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef SERVIES_STD_TYPES_H_
#define SERVIES_STD_TYPES_H_


typedef signed char  						Schar8_t;
typedef unsigned char 						Uchar8_t;


typedef signed short int 					Sint16_t;
typedef unsigned short int 					Uint16_t;
typedef signed int 							Sint32_t;
typedef unsigned int 						Uint32_t;
typedef signed long long int  				Sint64_t;
typedef unsigned long long int  			Uint64_t;



typedef signed char  						VSchar8_t;
typedef unsigned char 						VUchar8_t;
typedef volatile signed short int 			VSint16_t;
typedef volatile unsigned short int 		VUint16_t;
typedef volatile signed int 				VSint32_t;
typedef volatile unsigned int 				VUint32_t;
typedef volatile signed long long int  		VSint64_t;
typedef volatile unsigned long long int  	VUint64_t;


typedef float								float32_t;
typedef double								float64_t;
typedef long double 						float96_t;


#ifndef TRUE
#define TRUE   1
#endif


#ifndef FALSE
#define FALSE 	0
#endif


#ifndef	NULL
#define NULL	'\0'
#endif



#endif /* SERVIES_STD_TYPES_H_ */
