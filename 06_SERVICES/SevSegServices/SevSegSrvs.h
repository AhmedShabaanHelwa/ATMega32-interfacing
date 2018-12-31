/*
 * SevSegSrvs.h
 *
 *  Created on: Dec 25, 2018
 *      Author: AhmedShaban
 */

#ifndef _SEVSEGSRVS_H_
#define _SEVSEGSRVS_H_
#include "../../03_HAL/SevenSegments/SevSeg_types.h"
#include "SevSegSrvs_priv.h"

#define SevSegSrvs_u8eSegment01			0
#define SevSegSrvs_u8eSegment02			1
#define SevSegSrvs_u8eSegment03			2
#define SevSegSrvs_u8eSegment04			3

extern FUNC(void, CODE_FLASH_CLASS)	SevSegSrvs_vidEnableSegment(
										VAR(uint8, AUTOMATIC) u8SegmentNumber);

extern FUNC(void, CODE_FLASH_CLASS)	SevSegSrvs_vidDisableSegment(
										VAR(uint8, AUTOMATIC) u8SegmentNumber);

extern FUNC(void, CODE_FLASH_CLASS)	SevSegSrvs_vidDisplayNumber(
										VAR(uint8, AUTOMATIC) u8Number,
										VAR(uint8, AUTOMATIC) u8SegmentNumber);

extern CONST(SevSeg_tstrSegment, DATA_RAM_CALSS)		SevSegSrvs_akstreSegments[u8NUM_OF_SEGMENTS];

#endif /* 06_SERVICES_SEVSEGSERVICES_SEVSEGSRVS_H_ */
