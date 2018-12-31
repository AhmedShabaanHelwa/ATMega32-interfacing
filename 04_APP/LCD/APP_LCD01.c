/*
 * APP_LCD01.c
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
/* 3.1 MCAL */
#include "../../02_MCAL/01_DIO/DIO.h"
/* 3.2 HAL */
#include "../../03_HAL/LCD/LCD.h"
/* 3.3 Services */
#include "../../06_SERVICES/LCDServices/LCDSrvs.h"
/* 4- Module Inclusions */
/* 5- Local definitions */
/* 6- Global(exported) variables/functions */
/* 7- Static variables/functions */



FUNC(void, CODE_FLASH_CLASS)		APP_LCD01(void)
{
	VAR(uint8,AUTOMATIC)	u8LocalCounter = 0;
	VAR(uint8, AUTOMATIC)	u8Iteration = 1;
	DIO_vidInit();
	LCD_vidInit();


	LCD_vidSendString("Test",1,1);
	LCD_vidSendString("I am micro",1,2);
	Delay_mSec(500);
	LCD_vidClearDisplay();


	LCD_vidSendString("Number= ",1,1);
	while(true)
	{

		if( u8Iteration == 1 )
		{
			/* Do nothing */
		}
		else if( u8Iteration == 2)
		{
			LCDSrvs_vidDeleteCharacter(10,1);
		}
		else
		{
			LCD_vidClearDisplay();
			Delay_mSec(500)
			/* bug: out of range*/
			LCD_vidSendString("End of Program",1,1);
			LCD_vidSendString("Thank You!",1,2);
			Delay_mSec(5000);

			return;
		}

		for(u8LocalCounter = 0; u8LocalCounter < 100; u8LocalCounter++)
		{
			LCDSrvs_vidIntegerToASCII(u8LocalCounter,9,1);
			Delay_mSec(10);

			if( u8LocalCounter == 99 )
				u8Iteration++;
		}
	} /* End of while(true) */



}
