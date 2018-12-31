/*
 * LCD_local.h
 *
 *  Created on: Dec 30, 2018
 *      Author: AhmedShaban
 */

#ifndef LOCAL_H_
#define LOCAL_H_

FUNC(void,CODE_FLASH_CLASS)		LCD_vidExecute(
									VAR(uint8,AUTOMATIC)	u8InfoCopy);

#define LCD_vidEmulateHigh2LowSignal()			DIO_vidSetPinValue(LCD_u8EN_ENABLE_PIN, DIO_u8PinLow);\
												Delay_mSec(1);\
												DIO_vidSetPinValue(LCD_u8EN_ENABLE_PIN, DIO_u8PinHigh);\
												Delay_mSec(1);\
												DIO_vidSetPinValue(LCD_u8EN_ENABLE_PIN, DIO_u8PinLow);\
												Delay_mSec(1)

#endif /* 03_HAL_LCD_LCD_LOCAL_H_ */
