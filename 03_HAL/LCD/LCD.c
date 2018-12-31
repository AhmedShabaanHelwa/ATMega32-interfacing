/*
 * LCD.c
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


FUNC(void, CODE_FLASH_CLASS)		LCD_vidInit(void)
{
	/* 1- Pre-initializing delay */
	Delay_mSec(15);

	LCD_vidClearDisplay();

#if( LCD_u8DATA_MODE == LCD_u8EIGHT_BIT_MODE )
	/* 2- Init. Mode of operation */
	/* 2.1- Send initialization command */
	LCD_vidSendCommand(0x38);
	/* 2.2- Delay for command processing */
	Delay_mSec(1);
#else
	/* 2- Init. Mode of operation */
	/* 2.1- Send initialization command */
		LCD_vidSendCommand(0x33);
	/* 2.2- Delay for command processing */
	Delay_mSec(1);

	/* 2.3- Send initialization command */
	LCD_vidSendCommand(0x32);
	/* 2.3- Delay for command processing */
	Delay_mSec(1);
	/* 2.5- Send initialization command */
	LCD_vidSendCommand(0x28);
	/* 2.6- Delay for command processing */
	Delay_mSec(1);
#endif

	/* 3- Turn display ON, Cursor Blinking */
	/* 3.1- Send turn display ON, Cursor Blinking command */
	LCD_vidSendCommand(0x0E);
	/* 3.2- Delay for command processing */
	Delay_mSec(1);

	/* 4- Clear display */
	/* 4.1- Send clear display command */
	LCD_vidSendCommand(0x0E);
	/* 4.2- Delay for command processing */
	Delay_mSec(1);

}

FUNC(void, CODE_FLASH_CLASS)		LCD_vidSendCommand(
											VAR(uint8, AUTOMATIC)	u8Command)
{
	/* 1- Clear the Register Select: Select Instruction code command register */
	DIO_vidSetPinValue(LCD_u8RS_REGSELECT_PIN, DIO_u8PinLow);

	/* 2- Call for command execution */
	LCD_vidExecute(u8Command);
}


FUNC(void, CODE_FLASH_CLASS)		LCD_vidSendDataByte(
											VAR(uint8, AUTOMATIC)	u8Byte)
{
	/* 1- Clear the Register Select: Select Instruction code command register */
	DIO_vidSetPinValue(LCD_u8RS_REGSELECT_PIN, DIO_u8PinHigh);

	/* 2- Call for command execution */
	LCD_vidExecute(u8Byte);
}

FUNC(void, CODE_FLASH_CLASS)		LCD_vidSetPositon(
											VAR(uint8, AUTOMATIC)	u8xPosition,
											VAR(uint8, AUTOMATIC)	u8yPosition)
{
	/* Sending position command */
	/* 1- Adjusting position to start from 0 instead of 1 in application  */
	u8xPosition--;
	u8yPosition--;

	/* 2- Preparing and send position command */
	LCD_vidSendCommand( 0x80 | (u8yPosition << 6) | u8xPosition);

	/* 3- Delay for command processing */
	Delay_mSec(1);
}

FUNC(void, CODE_FLASH_CLASS)		LCD_vidSendString(
											P2CONST(uint8,AUTOMATIC,AUTOMATIC)	pakStrPtr,
											VAR(uint8, AUTOMATIC)				u8xPosition,
											VAR(uint8, AUTOMATIC)				u8yPosition)
{
	/* 1- Preparing position of cursor */
	LCD_vidSetPositon(u8xPosition,u8yPosition);

	/* 2- Sending the string byte-by-byte */
	while((*pakStrPtr) != '\0' )
	{
		LCD_vidSendDataByte( (*pakStrPtr) );
		pakStrPtr++;
	}
}

FUNC(void, CODE_FLASH_CLASS)		LCD_vidClearDisplay(void)
{
	/* 2- Send clear command */
	LCD_vidSendCommand(0x01);

	/* 3- Delay for command processing */
	Delay_mSec(1);
}
