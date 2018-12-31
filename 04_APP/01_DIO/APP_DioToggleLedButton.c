/*
 * APP_DioToggleLedButton.c
 *
 *  Created on: Dec 13, 2018
 *      Author: AhmedShaban
 */

/* 1- Standard Libraries */
#include <util/delay.h>
/* 2- Generic Modules */
/* !Bug: the STD_TYPES.h was needed to be included	*
 * 		 it caused error in DIO definitions.		*
 * 		 it seems that it's pre-processed before 	*
 * 		 Compiler.h									*
 ****************************************************/
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Modules */
#include "../../02_MCAL/01_DIO/DIO.h"
#include "../../03_HAL/LED/LED.h"
#include "../../03_HAL/Button/BUTTON.h"
/* 4- Module inclusions */
#include "../App.h"
/* 5- Local Definitions */
/* 6- Global(exported) variables */
/* 7- static variables */
/* 8- Local Variables */


FUNC(void, CODE_FLASH_CLASS)	APP_vidDioToggleLEDWithButton(void)
{


	VAR(DIO_tenuPinValueType, DATA_RAM_CLASS)	u8LocalPreviousState = DIO_u8PinLow;
	VAR(DIO_tenuPinValueType, DATA_RAM_CLASS)	u8LocalCurrentState = DIO_u8PinLow;
	DIO_vidInit();
	u8LocalCurrentState =  DIO_enuGetPinValue(BUTTON);

	while(true)
	{
		u8LocalCurrentState = DIO_enuGetPinValue(BUTTON);
		if(u8LocalCurrentState == DIO_u8PinHigh)
		{
			if(u8LocalPreviousState == DIO_u8PinLow)
			{
				DIO_vidTogglePinValue(LED);
			}
		}
		u8LocalPreviousState = u8LocalCurrentState;
	}
}
