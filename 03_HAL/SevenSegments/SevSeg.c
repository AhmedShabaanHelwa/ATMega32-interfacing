/*
 * SevSeg.c
 *
 *  Created on: Dec 25, 2018
 *      Author: AhmedShaban
 */


/* 1- Standard Libraries */
/* 2- Generic Libraries */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Libraries */
#include "../../02_MCAL/01_DIO/DIO.h"
/* 4- Module Inclusions */
#include "SevSeg_priv.h"
#include "SevSeg_types.h"
#include "SevSeg_config.h"
#include "SevSeg.h"
/* 5- Local Definitions */
/* 6- Global(exported) variables and functions */
/* 7- Static variables and functions */



FUNC(void, CODE_FLASH_CLASS)	SevSeg_vidEnableSegment(
									P2VAR(SevSeg_tstrSegment, AUTOMATIC, AUTOMATIC)	pkstrSegPtr)
{
	if( pkstrSegPtr -> enuCommonType == u8CommonCathode )
		DIO_vidSetPinValue(pkstrSegPtr -> u8CommonPin, DIO_u8PinLow);
	else
		DIO_vidSetPinValue(pkstrSegPtr -> u8CommonPin, DIO_u8PinHigh);
}


FUNC(void, CODE_FLASH_CLASS)	SevSeg_vidDisableSegment(
									P2VAR(SevSeg_tstrSegment, AUTOMATIC, AUTOMATIC)	pkstrSegPtr)
{
	if( pkstrSegPtr -> enuCommonType == u8CommonCathode )
		DIO_vidSetPinValue(pkstrSegPtr -> u8CommonPin, DIO_u8PinHigh);
	else
		DIO_vidSetPinValue(pkstrSegPtr -> u8CommonPin, DIO_u8PinLow);
}

FUNC(void, CODE_FLASH_CLASS)	SevSeg_vidDisplayNumber(
									VAR(uint8, AUTOMATIC)							u8Number,
									P2CONST(SevSeg_tstrSegment, AUTOMATIC, ATUOMATIC)	pkstrSegPtr)
{
	VAR(uint8, AUTOMATIC)	u8LocalEncodedValue = 0;


	switch( u8Number )
	{
	case 0:
		u8LocalEncodedValue = 0b00111111;
		break;
	case 1:
		u8LocalEncodedValue = 0b00000110;
		break;
	case 2:
		u8LocalEncodedValue = 0b01011011;
		break;
	case 3:
		u8LocalEncodedValue = 0b01001111;
		break;
	case 4:
		u8LocalEncodedValue = 0b01100110;
		break;
	case 5:
		u8LocalEncodedValue = 0b01101101;
		break;
	case 6:
		u8LocalEncodedValue = 0b01111101;
		break;
	case 7:
		u8LocalEncodedValue = 0b00000111;
		break;
	case 8:
		u8LocalEncodedValue = 0b01111111;
		break;
	case 9:
		u8LocalEncodedValue = 0b01101111;
		break;
	default:
		break;
	} /* !Comment: End of switch */

	if( pkstrSegPtr -> enuCommonType == u8CommonCathode )
		DIO_vidSetPortValue(pkstrSegPtr -> u8AttachedPort, u8LocalEncodedValue);
	else
		DIO_vidSetPortValue(pkstrSegPtr -> u8AttachedPort, ~(u8LocalEncodedValue));
}
