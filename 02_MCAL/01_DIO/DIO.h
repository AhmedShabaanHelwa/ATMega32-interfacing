/*
 * DIO.h
 *
 *  Created on: Dec 5, 2018
 *      Author: AhmedShaban
 */
/******************************************************************************/
/*                                                                            */
/* !Layer          : MCAL                                                     */
/*                                                                            */
/* !Component      : DIO                                                      */
/*                                                                            */
/* !Module         : DIO.h                                                    */
/* !Description    : Decleration of the Component APIs                        */
/*                                                                            */
/* !File           : DIO.h                                                    */
/*                                                                            */
/* !Target         : All                                                      */
/*                                                                            */
/* Coding language : C                                                        */
/*                                                                            */
/* all rights reserved                                                        */
/*                                                                            */
/******************************************************************************/
#ifndef DIO_H_
#define DIO_H_

/* Pin configurations */

/* Port numbers */
#define DIO_u8PORTA		0
#define DIO_u8PORTB		1
#define DIO_u8PORTC		2
#define DIO_u8PORTD		3


/* GROUP A pins */
#define DIO_u8PINA0		0
#define DIO_u8PINA1		1
#define DIO_u8PINA2		2
#define DIO_u8PINA3		3
#define DIO_u8PINA4		4
#define DIO_u8PINA5		5
#define DIO_u8PINA6		6
#define DIO_u8PINA7		7


/* Group B pins */
#define DIO_u8PINB0		8
#define DIO_u8PINB1		9
#define DIO_u8PINB2		10
#define DIO_u8PINB3		11
#define DIO_u8PINB4		12
#define DIO_u8PINB5		13
#define DIO_u8PINB6		14
#define DIO_u8PINB7		15


/* Group C pins */
#define DIO_u8PINC0		16
#define DIO_u8PINC1		17
#define DIO_u8PINC2		18
#define DIO_u8PINC3		19
#define DIO_u8PINC4		20
#define DIO_u8PINC5		21
#define DIO_u8PINC6		22
#define DIO_u8PINC7		23


/* Group D pins */
#define DIO_u8PIND0		24
#define DIO_u8PIND1		25
#define DIO_u8PIND2		26
#define DIO_u8PIND3		27
#define DIO_u8PIND4		28
#define DIO_u8PIND5		29
#define DIO_u8PIND6		30
#define DIO_u8PIND7		31


/* Pin value type */
typedef enum{
	DIO_u8PinLow =  0,
	DIO_u8PinHigh = 1
}DIO_tenuPinValueType;


/* Module APIs */
FUNC(void, CODE_FLASH_CLASS) DIO_vidInit(void);

FUNC(void, CODE_FLASH_CLASS) DIO_vidSetPinValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PinNumber,
		VAR(DIO_tenuPinValueType,DATA_RAM_CLASS)	enuValue);

FUNC(DIO_tenuPinValueType, CODE_FLASH_CLASS) DIO_enuGetPinValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PinNumber);

FUNC(void, CODE_FLASH_CLASS) DIO_vidTogglePinValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PinNumber);

FUNC(void, CODE_FLASH_CLASS) DIO_vidSetPortValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PortNumber,
		VAR(uint8,DATA_RAM_CLASS)					u8Value);

FUNC(uint8, CODE_FLASH_CLASS) DIO_u8GetPortValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PortNumber);
#endif /* 02_MCAL_01_DIO_DIO_H_ */
