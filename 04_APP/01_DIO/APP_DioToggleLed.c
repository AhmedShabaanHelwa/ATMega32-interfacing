/*
 * APP_DioToggleLed.c
 *
 *  Created on: Dec 10, 2018
 *      Author: AhmedShaban
 */
/* 1- Standard Libraries */
#include <util/delay.h>
/* 2- Generic Modules */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Modules */
#include "../../02_MCAL/01_DIO/DIO.h"
#include "../../03_HAL/LED/LED.h"
/* 4- Module inclusions */
#include "../App.h"
/* 5- Local definitions */
/* 6- Global(exported) variables */
/* 7- Static variables */
/* 8- Local variables */

FUNC(void, CODE_FLASH_CLASS)	App_vidDioToggleLED(void)
{
	DIO_vidInit();

	while(true){
		DIO_vidTogglePinValue(LED);
		_delay_ms(500);
		DIO_vidTogglePinValue(LED);
		_delay_ms(500);
	}
}
