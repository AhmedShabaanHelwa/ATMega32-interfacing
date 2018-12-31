/*
 * SevSeg.h
 *
 *  Created on: Dec 25, 2018
 *      Author: AhmedShaban
 */

#ifndef SEVSEG_H_
#define SEVSEG_H_

#include "SevSeg_types.h"

extern FUNC(void, CODE_FLASH_CLASS)		SevSeg_vidEnableSegment(
									P2VAR(SevSeg_tstrSegment, AUTOMATIC, AUTOMATIC)	pkstrSegPtr);
extern FUNC(void, CODE_FLASH_CLASS)		SevSeg_vidDisableSegment(
									P2VAR(SevSeg_tstrSegment, AUTOMATIC, AUTOMATIC)	pkstrSegPtr);
extern FUNC(void, CODE_FLASH_CLASS)		SevSeg_vidDisplayNumber(
									VAR(uint8, AUTOMATIC)							u8Number,
									P2CONST(SevSeg_tstrSegment, AUTOMATIC, ATUOMATIC)	pkstrSegPtr);

#endif /* 03_HAL_SEVENSEGMENTS_SEVSEG_H_ */
