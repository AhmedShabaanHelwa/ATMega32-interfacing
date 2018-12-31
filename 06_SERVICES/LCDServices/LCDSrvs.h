/*
 * LCDSrvs.h
 *
 *  Created on: Dec 30, 2018
 *      Author: AhmedShaban
 */

#ifndef LCDSRVS_H_
#define LCDSRVS_H_

extern FUNC(void, CODE_FLASH_CLASS)		LCDSrvs_vidIntegerToASCII(
											VAR(uint8,AUTOMATIC) 	u8Number,
											VAR(uint8, AUTOMATIC)	u8xPosition,
											VAR(uint8, AUTOMATIC)	u8yPosition);

extern FUNC(void, CODE_FLASH_CLASS)		LCDSrvs_vidDeleteCharacter(
											VAR(uint8, AUTOMATIC)	u8xPosition,
											VAR(uint8, AUTOMATIC)	u8yPosition);

#endif /* 06_SERVICES_LCDSERVICES_LCDSRVS_H_ */
