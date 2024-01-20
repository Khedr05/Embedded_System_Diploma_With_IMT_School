/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 10 Mar 2023                                
 Project Name _ File Name   : TIMERS _ TIMERS_Private.h           
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_TIMERS_TIMERS_PRIVATE_H_
#define MCAL_TIMERS_TIMERS_PRIVATE_H_


#define TCCR0_REG *(( VUchar8_t *)0x53)
#define TCCR0_REG_CS00_BIT 			0
#define TCCR0_REG_CS01_BIT 			1
#define TCCR0_REG_CS02_BIT 			2
#define TCCR0_REG_WGM01_BIT 		3
#define TCCR0_REG_COM00_BIT 		4
#define TCCR0_REG_COM01_BIT 		5
#define TCCR0_REG_WGM00_BIT 		6
#define TCCR0_REG_FOC0_BIT 			7


#define TIMSK_REG *(( VUchar8_t *)0x59)
#define TIMSK_REG_TOIE0_BIT			0
#define TIMSK_REG_OCIE0_BIT			1
#define TIMSK_REG_TOIE1_BIT			2
#define TIMSK_REG_OCIE1B_BIT		3
#define TIMSK_REG_OCIE1A_BIT		4
#define TIMSK_REG_TICIE1_BIT		5
#define TIMSK_REG_TOIE2_BIT			6
#define TIMSK_REG_OCIE2_BIT			7


#define TIFR_REG *(( VUchar8_t *)0x58)
#define TIFR_REG_TOV0_BIT			0
#define TIFR_REG_OCF0_BIT			1
#define TIFR_REG_TOV1_BIT			2
#define TIFR_REG_OCF1B_BIT			3
#define TIFR_REG_OCF1A_BIT			4
#define TIFR_REG_ICF1_BIT			5
#define TIFR_REG_TOV2_BIT			6
#define TIFR_REG_OCF2_BIT			7

#define TCNT0_REG *(( VUchar8_t *)0x52)


#define OCR0_REG *(( VUchar8_t *)0x5C)

#define TCCR1A_REG *((VUchar8_t *) 0x4F)

#define TCCR1A_REG_WGM10_BIT		0
#define TCCR1A_REG_WGM11_BIT		1
#define TCCR1A_REG_FOC1B_BIT		2
#define TCCR1A_REG_FOC1A_BIT		3
#define TCCR1A_REG_COM1B0_BIT		4
#define TCCR1A_REG_COM1B1_BIT		5
#define TCCR1A_REG_COM1A0_BIT		6
#define TCCR1A_REG_COM1A1_BIT		7

#define TCCR1B_REG *((VUchar8_t *) 0x4E)

#define TCCR1B_REG_CS10_BIT 		0
#define TCCR1B_REG_CS11_BIT 		1
#define TCCR1B_REG_CS12_BIT 		2
#define TCCR1B_REG_WGM12_BIT 		3
#define TCCR1B_REG_WGM13_BIT 		4
#define TCCR1B_REG_REVERSED_BIT 	5
#define TCCR1B_REG_ICES1_BIT 		6
#define TCCR1B_REG_ICNC1_BIT 		7

#define TCNT1L_REG *((VUint16_t *) 0x4C)

//#define OCR1AH_REG *((VUchar8_t *) 0x4A)

#define OCR1AL_REG *((VUint16_t *) 0x4A)

//#define OCR1BH_REG *((VUchar8_t *) 0x49)

#define OCR1BL_REG *((VUint16_t *) 0x48)

#define ICR1L_REG *((VUint16_t *) 0x46)

//#define TIMSK_REG *((VUint16_t *)0x59)


#define TIMSK_REG_TICIE1_BIT   5

#define RISAING 1
#define FALLING 0




#endif /* MCAL_TIMERS_TIMERS_PRIVATE_H_ */
