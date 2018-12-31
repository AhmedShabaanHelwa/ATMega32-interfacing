/*
 * Keypad.h
 *
 *  Created on: Dec 27, 2018
 *      Author: AhmedShaban
 */

#ifndef KEYPAD_KEYPAD_H_
#define KEYPAD_KEYPAD_H_

#define Keypad_u8NO_BUTTON_PRESSED		0xFF
/* Public APIs of Keypad */

extern FUNC(void, CODE_FLASH_CLASS)		Keypad_vidInit(void);
extern FUNC(uint8, CODE_FLASH_CLASS)	Keypad_u8GetPressedButton(void);

#endif /* 03_HAL_KEYPAD_KEYPAD_H_ */
