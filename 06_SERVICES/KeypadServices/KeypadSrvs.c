/*
 * KeypadSrvs.c
 *
 *  Created on: Dec 27, 2018
 *      Author: AhmedShaban
 */


/* 1- Standard Libraries */
/* 2- Generic Components */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global components */
#include "../../03_HAL/Keypad/Keypad.h"
/* 4- Module inclusions */
#include "KeypadSrvs_priv.h"
#include "KeypadSrvs_PCfg.h"
#include "KeypadSrvs.h"
/* 5- Local definitions */
/* 6- Global(exported) variables and functions */
/* 7- static(private) variables and functions */

FUNC(uint8, CODE_FLASH_CLASS)	KeypadSrvs_u8GetPressedKey(void)
{
	/* !Description: Getting the key Algorithm */
	/* !Pseudo: Local variable to hold the decoding of a pressed key */
	VAR(uint8, DATA_RAM_CLASS)	u8LocalPressedButton = Keypad_u8NO_BUTTON_PRESSED;
	u8LocalPressedButton = Keypad_u8GetPressedButton();

	/* !Description: Getting the key Algorithm */
	/* !Pseudo: Switch to decode the button number */
	switch(u8LocalPressedButton)
	{
	case(0):
			return 1;
			break;
	case(1):
			return 2;
			break;
	case(2):
			return 3;
			break;
	case(3):
			return 'A';
			break;
	case(4):
			return 4;
			break;
	case(5):
			return 5;
			break;
	case(6):
			return 6;
			break;
	case(7):
			return 'B';
			break;
	case(8):
			return 7;
			break;
	case(9):
			return 8;
			break;
	case(10):
			return 9;
			break;
	case(11):
			return 'C';
			break;
	case(12):
			return '*';
			break;
	case(13):
			return 0;
			break;
	case(14):
			return '#';
			break;
	case(15):
			return 'D';
			break;
	case(Keypad_u8NO_BUTTON_PRESSED):
			return Keypad_u8NO_BUTTON_PRESSED;
			break;
	default:
		return u8LocalPressedButton;
		break;
	}
}
