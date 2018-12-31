/*
 * APP_vidKeypadSevenSeg.c
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
#include "../../03_HAL/Keypad/Keypad.h"
#include "../../06_SERVICES/SevSegServices/SevSegSrvs.h"
#include "../../06_SERVICES/KeypadServices/KeypadSrvs.h"
/* 4- Module inclusions */
/* 5- Local definitions */
/* 6- Global(exported) variables and functions */
/* 7- static(private) variables and functions */


FUNC(void, CODE_FLASH_CLASS)	APP_vidKeypadSevenSeg(void)
{
	VAR(uint8, AUTOMATIC)	u8LocalKey;
	DIO_vidInit();
	Keypad_vidInit();

	while(true)
	{
		/* !Pseudo: Get the pressed key in keypad */
		u8LocalKey = KeypadSrvs_u8GetPressedKey();

		/* !Pseudo: Display the pressed button on 7-Segment */

		/* !Comment: No key is pressed */
		if(u8LocalKey == Keypad_u8NO_BUTTON_PRESSED)
		{
			/* !Pseudo: Disable the 7-Segment */
			SevSegSrvs_vidDisableSegment(SevSegSrvs_u8eSegment01);
		}
		else
		{
			/* !Pseudo: Enable the 7-Segment */
			SevSegSrvs_vidEnableSegment(SevSegSrvs_u8eSegment01);
			/* !Pseudo: Display the number on 7-Segment */
			SevSegSrvs_vidDisplayNumber(u8LocalKey, SevSegSrvs_u8eSegment01);
		}
	}

}
