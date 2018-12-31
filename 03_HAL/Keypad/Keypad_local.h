/*
 * Keypad_local.h
 *
 *  Created on: Dec 27, 2018
 *      Author: AhmedShaban
 */

#ifndef KEYPAD_LOCAL_H_
#define KEYPAD_LOCAL_H_

//#include "Keypad_priv.h"

#if (Keypad_u8PULL_RESISTOR_CONFIG == Keypad_u8PULL_UP_RES)
	#define Keypad_u8PRESSED_STATE	DIO_u8PinLow
	#define	Keypad_u8RELEASED_STATE	DIO_u8PinHigh
#else
	#define Keypad_u8PRESSED_STATE	DIO_u8PinHigh
	#define	Keypad_u8RELEASED_STATE	DIO_u8PinLow
#endif

extern VAR(uint8, DATA_RAM_CLASS)	Keypad_u8PressedButton;

extern FUNC(void,  CODE_FLASH_CLASS)		Keypad_u8ScanColumns(
										VAR(uint8, AUTOMATIC)	u8RowNumber);


#endif /* 03_HAL_KEYPAD_KEYPAD_LOCAL_H_ */
