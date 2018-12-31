/*
 * LCD.h
 *
 *  Created on: Dec 30, 2018
 *      Author: AhmedShaban
 */

#ifndef LCD_H_
#define LCD_H_

extern FUNC(void, CODE_FLASH_CLASS)		LCD_vidInit(void);

extern FUNC(void, CODE_FLASH_CLASS)		LCD_vidSendCommand(
											VAR(uint8, AUTOMATIC)	u8Command);

extern FUNC(void, CODE_FLASH_CLASS)		LCD_vidSendDataByte(
											VAR(uint8, AUTOMATIC)	u8Byte);

extern FUNC(void, CODE_FLASH_CLASS)		LCD_vidSetPositon(
											VAR(uint8, AUTOMATIC)	u8xPosition,
											VAR(uint8, AUTOMATIC)	u8yPosition);

extern FUNC(void, CODE_FLASH_CLASS)		LCD_vidSendString(
											P2CONST(uint8,AUTOMATIC,AUTOMATIC)	pakStrPtr,
											VAR(uint8, AUTOMATIC)				u8xPosition,
											VAR(uint8, AUTOMATIC)				u8yPosition);

extern FUNC(void, CODE_FLASH_CLASS)		LCD_vidClearDisplay(void);

#endif /* 03_HAL_LCD_LCD_H_ */
