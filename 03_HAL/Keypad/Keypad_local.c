/*
 * Keypad_local.c
 *
 *  Created on: Dec 27, 2018
 *      Author: AhmedShaban
 */
/* 1- Standard libraries */
/* 2- Generic Components */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Components */
#include "../../02_MCAL/01_DIO/DIO.h"
/* 4- Module Inclusions */
#include "Keypad_priv.h"
#include "Keypad_config.h"
#include "Keypad_local.h"
#include "Keypad.h"
/* 5- Local definitions */
/* 6- Global(exported) variables and functions */
/* 7- Static(private variables and functions) */
VAR(uint8, DATA_RAM_CLASS)	Keypad_u8PressedButton = 0;


FUNC(void,  CODE_FLASH_CLASS)	Keypad_u8ScanColumns(
										 VAR(uint8, AUTOMATIC)	u8RowNumber)
{
	if( DIO_enuGetPinValue(Keypad_u8COLUMN01) == Keypad_u8PRESSED_STATE )
		Keypad_u8PressedButton = (u8RowNumber*4);
	else if( DIO_enuGetPinValue(Keypad_u8COLUMN02) == Keypad_u8PRESSED_STATE )
		Keypad_u8PressedButton = (u8RowNumber*4)+1;
	else if( DIO_enuGetPinValue(Keypad_u8COLUMN03) == Keypad_u8PRESSED_STATE )
		Keypad_u8PressedButton = (u8RowNumber*4)+2;
	else if ( DIO_enuGetPinValue(Keypad_u8COLUMN04) == Keypad_u8PRESSED_STATE )
		Keypad_u8PressedButton = (u8RowNumber*4)+3;
}
