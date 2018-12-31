/*
 * DIO_reg.h
 *
 *  Created on: Dec 5, 2018
 *      Author: AhmedShaban
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_
#include "../../01_LIB/STD_TYPES.h"
/* Special function register */
#define SIFOR		*((volatile uint8 *)0x50)
/* Group A registers */
#define PORTA		*((volatile 		uint8 *)		0x3B)
#define DDRA		*((volatile 		uint8 *)		0x3A)
#define PINA		*((const volatile 	uint8 *)		0x39)

/* Group B registers */
#define PORTB		*((volatile 		uint8 *)		0x38)
#define DDRB		*((volatile 		uint8 *)		0x37)
#define PINB		*((const volatile 	uint8 *)		0x36)

/* Group C register */
#define PORTC		*((volatile 		uint8 *)		0x35)
#define DDRC		*((volatile 		uint8 *)		0x34)
#define PINC		*((const volatile 	uint8 *)		0x33)

/* Group D register */
#define PORTD		*((volatile 		uint8 *)		0x32)
#define DDRD		*((volatile 		uint8 *)		0x31)
#define PIND		*((const volatile 	uint8 *)		0x30)

#endif /* DIO_REG_H_ */
