/*************************************************************************//*
 Author        				: Sherif Ashraf Ali                      
 Date         				: 11 Feb 2023                               
 Project Name | File Name   : AVR_DRIVER | DIO_Private.h         
 Version       				: V-01                                   
 GitHub       				: https://github.com/sherifkhadr         
*//*************************************************************************/


#ifndef MCAL_DIO_DIO_PRIVATE_H_
#define MCAL_DIO_DIO_PRIVATE_H_



// macros to detrmine current in pin
#define HIGH       1
#define LOW        0
// macros to detrmine direction of the port
#define INPUT      0
#define OUTPUT     1
// macros to enable pullup
#define PULL_UP    1
// macros to enable pulldown
#define PULL_DOWN  0

// Macros To Choose Port Number
#define PORTA  1
#define PORTB  2
#define PORTC  3
#define PORTD  4

// Macros To Choose Pin Number
#define PIN0    0
#define PIN1    1
#define PIN2    2
#define PIN3    3
#define PIN4	 4
#define PIN5	 5
#define PIN6	 6
#define PIN7	 7

// intialize PORTA registers
#define PORTA_REG *(( VUchar8_t *)0x3B)  // register for pin output
#define DDRA_REG *(( VUchar8_t *)0x3A)  // register for port direction
#define PINA_REG *(( VUchar8_t *)0x39) // register for pin input

// intialize PORTB registers
#define PORTB_REG *(( VUchar8_t *)0x38)  // register for pin output
#define DDRB_REG *(( VUchar8_t *)0x37)  // register for port direction
#define PINB_REG *(( VUchar8_t *)0x36) // register for pin input

// intialize PORTC registers
#define PORTC_REG *(( VUchar8_t *)0x35)  // register for pin output
#define DDRC_REG *(( VUchar8_t *)0x34)  // register for port direction
#define PINC_REG *(( VUchar8_t *)0x33) // register for pin input

// intialize PORTD registers
#define PORTD_REG *(( VUchar8_t *)0x32)   // register for pin output
#define DDRD_REG *(( VUchar8_t *)0x31)   // register for port direction
#define PIND_REG *(( VUchar8_t *)0x30)  // register for pin input



#endif /* MCAL_DIO_DIO_PRIVATE_H_ */
