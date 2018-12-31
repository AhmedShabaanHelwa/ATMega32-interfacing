/*
 * LCDSrvs.c
 *
 *  Created on: Dec 30, 2018
 *      Author: AhmedShaban
 */


/* 1- Compiler-specific Libraries */
#include <stdlib.h>
/* 2- Generic Libraries */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Modules */
#include "../../03_HAL/LCD/LCD.h"
/* 4- Module Inclusions */
#include "LCDSrvs.h"
/* 5- Local Definitions */
#define u8BUFFER_SIZE				20
#define u8DECIMAL_RADIX				10
#define u8SPACE_ASCII				20
/* 6- Global(exported) variables */
/* 7- Private(static) variables */
static VAR(uint8, DATA_RAM_CLASS)	LCDSrvs_aku8ASCIIBuffer[u8BUFFER_SIZE];


FUNC(void, CODE_FLASH_CLASS)		LCDSrvs_vidIntegerToASCII(
											VAR(uint8,AUTOMATIC) 	u8Number,
											VAR(uint8, AUTOMATIC)	u8xPosition,
											VAR(uint8, AUTOMATIC)	u8yPosition)
{
	itoa(u8Number,LCDSrvs_aku8ASCIIBuffer,u8DECIMAL_RADIX);
	LCD_vidSendString(LCDSrvs_aku8ASCIIBuffer,u8xPosition,u8yPosition);
}

FUNC(void, CODE_FLASH_CLASS)		LCDSrvs_vidDeleteCharacter(
											VAR(uint8, AUTOMATIC)	u8xPosition,
											VAR(uint8, AUTOMATIC)	u8yPosition)
{
	LCD_vidSetPositon(u8xPosition,u8yPosition);
	LCD_vidSendDataByte(u8SPACE_ASCII);
}
