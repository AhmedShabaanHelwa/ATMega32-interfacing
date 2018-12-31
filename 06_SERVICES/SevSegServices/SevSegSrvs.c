/*
 * SevSegSrvs.c
 *
 *  Created on: Dec 25, 2018
 *      Author: AhmedShaban
 */
/* 1- Standard Libraries  */
/* 2- Generic Libraries */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Module */
#include "../../03_HAL/SevenSegments/SevSeg.h"
/* 4- Module inclusion */
#include "SevSegSrvs_priv.h"
#include "SevSegSrvs_PCfg.h"
#include "SevSegSrvs.h"
/* 5- Local definitions and macros */

/* !Description: This module do proper routing of seven segments signals */

FUNC(void, CODE_FLASH_CLASS)	SevSegSrvs_vidEnableSegment(
										VAR(uint8, AUTOMATIC) u8SegmentNumber)
{
	switch(u8SegmentNumber)
	{
	case SevSegSrvs_u8eSegment01:
		SevSeg_vidEnableSegment(&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment01]);
		break;
	case SevSegSrvs_u8eSegment02:
		SevSeg_vidEnableSegment(&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment02]);
		break;
	case SevSegSrvs_u8eSegment03:
		SevSeg_vidEnableSegment(&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment03]);
		break;
	case SevSegSrvs_u8eSegment04:
		SevSeg_vidEnableSegment(&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment04]);
		break;
	default:
		break;
	}
}




FUNC(void, CODE_FLASH_CLASS)	SevSegSrvs_vidDisableSegment(
										VAR(uint8, AUTOMATIC) u8SegmentNumber)
{
	switch(u8SegmentNumber)
	{
	case SevSegSrvs_u8eSegment01:
		SevSeg_vidDisableSegment(&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment01]);
		break;
	case SevSegSrvs_u8eSegment02:
		SevSeg_vidDisableSegment(&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment02]);
		break;
	case SevSegSrvs_u8eSegment03:
		SevSeg_vidDisableSegment(&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment03]);
		break;
	case SevSegSrvs_u8eSegment04:
		SevSeg_vidDisableSegment(&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment04]);
		break;
	default:
		break;
	}
}



FUNC(void, CODE_FLASH_CLASS)	SevSegSrvs_vidDisplayNumber(
										VAR(uint8, AUTOMATIC) u8Number,
										VAR(uint8, AUTOMATIC) u8SegmentNumber)
{
	switch(u8SegmentNumber)
	{
	case SevSegSrvs_u8eSegment01:
		SevSeg_vidDisplayNumber(u8Number,
								SevSegSrvs_akstreSegments+SevSegSrvs_u8eSegment01);
		break;

	case SevSegSrvs_u8eSegment02:
		SevSeg_vidDisplayNumber(u8Number,
								&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment02]);
		break;

	case SevSegSrvs_u8eSegment03:
		SevSeg_vidDisplayNumber(u8Number,
								&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment03]);
		break;

	case SevSegSrvs_u8eSegment04:
		SevSeg_vidDisplayNumber(u8Number,
								&SevSegSrvs_akstreSegments[SevSegSrvs_u8eSegment04]);
		break;

	default:
		break;
	}
}
