/*
 * LCD_Local.c
 *
 *  Created on: Dec 30, 2018
 *      Author: AhmedShaban
 */

/* 1- Compiler-specific libraries */
#include "../../05_COMMON/01_COMPILER/STD_LIB.h"
/* 2- Generic Modules */
#include "../../01_LIB/BIT_MATH.h"
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Modules */
#include "../../02_MCAL/01_DIO/DIO.h"
/* 4- Module Inclusions */
#include "LCD_priv.h"
#include "LCD_local.h"
#include "LCD_PCfg.h"
#include "LCD.h"
/* 5- Local definitions */
/* 6- Global(exported) variables/functions */
/* 7- Static variables/functions */

FUNC(void,CODE_FLASH_CLASS)		LCD_vidExecute(
									VAR(uint8,AUTOMATIC)	u8InfoCopy)
{
	/* 1- Write option */
	/* 1.1- Clear RW pin */
	DIO_vidSetPinValue(LCD_u8RW_READWRITE_PIN, DIO_u8PinLow);

	/* 2- Write Data */
	/* 2.1 Eight-bit data mode */
#if ( LCD_u8DATA_MODE == LCD_u8EIGHT_BIT_MODE )
	DIO_vidSetPinValue(LCD_u8DATA_PIN0, GET_BIT_VALUE(u8InfoCopy,0));
	DIO_vidSetPinValue(LCD_u8DATA_PIN1, GET_BIT_VALUE(u8InfoCopy,1));
	DIO_vidSetPinValue(LCD_u8DATA_PIN2, GET_BIT_VALUE(u8InfoCopy,2));
	DIO_vidSetPinValue(LCD_u8DATA_PIN3, GET_BIT_VALUE(u8InfoCopy,3));
#endif
	/* 2.2- Four-bit data mode */
	DIO_vidSetPinValue(LCD_u8DATA_PIN4, GET_BIT_VALUE(u8InfoCopy,4));
	DIO_vidSetPinValue(LCD_u8DATA_PIN5, GET_BIT_VALUE(u8InfoCopy,5));
	DIO_vidSetPinValue(LCD_u8DATA_PIN6, GET_BIT_VALUE(u8InfoCopy,6));
	DIO_vidSetPinValue(LCD_u8DATA_PIN7, GET_BIT_VALUE(u8InfoCopy,7));

	LCD_vidEmulateHigh2LowSignal();

#if( LCD_u8DATA_MODE == LCD_u8FOUR_BIT_MODE )
	DIO_vidSetPinValue(LCD_u8DATA_PIN0, GET_BIT_VALUE(u8InfoCopy,0));
	DIO_vidSetPinValue(LCD_u8DATA_PIN1, GET_BIT_VALUE(u8InfoCopy,1));
	DIO_vidSetPinValue(LCD_u8DATA_PIN2, GET_BIT_VALUE(u8InfoCopy,2));
	DIO_vidSetPinValue(LCD_u8DATA_PIN3, GET_BIT_VALUE(u8InfoCopy,3));

	LCD_vidEmulateHigh2LowSignal();
#endif
}
