/*
 * APP_SingleSevSegCounter.c
 *
 *  Created on: Dec 15, 2018
 *      Author: AhmedShaban
 */


/* 1- Standard libraries */
#include "../../05_COMMON/01_COMPILER/STD_LIB.h"
/* 2- Generic libraries */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Modules */
#include "../../02_MCAL/01_DIO/DIO.h"
#include "../../06_SERVICES/SevSegServices/SevSegSrvs.h"
/* 4- Module inclusion */
/* 5- Local definitions */
/* 6- Global(exported) variables */
/* 7- local variables */

FUNC(void, CODE_FLASH_CLASS)	APP_vidSingleSevSegCounter(void)
{
	VAR(uint8, DATA_RAM_CLASS)	u8LocalCounter = 0;

	DIO_vidInit();
	//while(DIO_u8GetPortValue(DIO_u8PORTD) == 1)
	//{
		/* Do nothing */
	//}
	SevSegSrvs_vidEnableSegment(SevSegSrvs_u8eSegment01);
	SevSegSrvs_vidDisableSegment(SevSegSrvs_u8eSegment02);
	SevSegSrvs_vidDisableSegment(SevSegSrvs_u8eSegment03);
	SevSegSrvs_vidDisableSegment(SevSegSrvs_u8eSegment04);

	while(true){
		for(u8LocalCounter = 0; u8LocalCounter < 10; u8LocalCounter++){
			DIO_vidSetPinValue(DIO_u8PINA0, DIO_u8PinHigh);
			SevSegSrvs_vidDisplayNumber(u8LocalCounter, SevSegSrvs_u8eSegment01);
			Delay_mSec(500);
		}
	}
}
