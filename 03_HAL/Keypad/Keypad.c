/*
 * Keypad.c
 *
 *  Created on: Dec 27, 2018
 *      Author: AhmedShaban
 */

/* 1- Standard Libraries */
/* 2- Generic Components */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global components */
#include "../../02_MCAL/01_DIO/DIO.h"
/* 4- Module inclusions */
#include "Keypad_priv.h"
#include "Keypad_config.h"
#include "Keypad_local.h"
#include "Keypad.h"
/* 5- Local definitions */
/* 6- Global(exported) variables and functions */
/* 7- static(private) variables and functions */

FUNC(void, CODE_FLASH_CLASS)		Keypad_vidInit(void)
{

	/* !Pseudo: Initialize Output (Rows) pins to Released state */
	DIO_vidSetPinValue(Keypad_u8ROW01, Keypad_u8PRESSED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW02, Keypad_u8PRESSED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW03, Keypad_u8PRESSED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW04, Keypad_u8PRESSED_STATE);
}







FUNC(uint8, CODE_FLASH_CLASS)		Keypad_u8GetPressedButton(void)
{
	/* !Pseudo: No switch is pressed */
	Keypad_u8PressedButton = Keypad_u8NO_BUTTON_PRESSED;

	/* !Description: Perform keypad scanning algorithm */
	/* !Pseudo: 1- Activate Output(rows) pins */

	/* !Pseudo: ROW #1 */
	DIO_vidSetPinValue(Keypad_u8ROW01,Keypad_u8PRESSED_STATE);

	DIO_vidSetPinValue(Keypad_u8ROW02,Keypad_u8RELEASED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW03,Keypad_u8RELEASED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW04,Keypad_u8RELEASED_STATE);
	/* !Description: Perform keypad scanning algorithm */
	/* !Pseudo: 2- Scan Input(columns) pins for being pressed or not */
	Keypad_u8ScanColumns(Keypad_u8ROW01);

	/* !Pseudo: ROW #2 */
	DIO_vidSetPinValue(Keypad_u8ROW01,Keypad_u8RELEASED_STATE);

	DIO_vidSetPinValue(Keypad_u8ROW02,Keypad_u8PRESSED_STATE);

	DIO_vidSetPinValue(Keypad_u8ROW03,Keypad_u8RELEASED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW04,Keypad_u8RELEASED_STATE);
	/* !Description: Perform keypad scanning algorithm */
	/* !Pseudo: 2- Scan Input(columns) pins for being pressed or not */
	Keypad_u8ScanColumns(Keypad_u8ROW02);

	/* !Pseudo: ROW #3 */
	DIO_vidSetPinValue(Keypad_u8ROW01,Keypad_u8RELEASED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW02,Keypad_u8RELEASED_STATE);

	DIO_vidSetPinValue(Keypad_u8ROW03,Keypad_u8PRESSED_STATE);

	DIO_vidSetPinValue(Keypad_u8ROW04,Keypad_u8RELEASED_STATE);
	/* !Description: Perform keypad scanning algorithm */
	/* !Pseudo: 2- Scan Input(columns) pins for being pressed or not */
	Keypad_u8ScanColumns(Keypad_u8ROW03);

	/* !Pseudo: ROW #3 */
	DIO_vidSetPinValue(Keypad_u8ROW01,Keypad_u8RELEASED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW02,Keypad_u8RELEASED_STATE);
	DIO_vidSetPinValue(Keypad_u8ROW03,Keypad_u8RELEASED_STATE);

	DIO_vidSetPinValue(Keypad_u8ROW04,Keypad_u8PRESSED_STATE);
	/* !Description: Perform keypad scanning algorithm */
	/* !Pseudo: 2- Scan Input(columns) pins for being pressed or not */
	Keypad_u8ScanColumns(Keypad_u8ROW04);


	/* !Description: Perform keypad scanning algorithm */
	/* !Pseudo: 3- Return the pressed button */
	return Keypad_u8PressedButton;
}
