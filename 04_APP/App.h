/*
 * App.h
 *
 *  Created on: Dec 3, 2018
 *      Author: AhmedShaban
 */

#ifndef APP_H_
#define APP_H_

#include "../05_COMMON/02_STDTYPES/Compiler.h"

FUNC(void, CODE_FLASH_CLASS)	App_vidDioToggleLED(void);
FUNC(void, CODE_FLASH_CLASS)	APP_vidDioToggleLEDWithButton(void);

FUNC(void, CODE_FLASH_CLASS)	APP_vidSingleSevSegCounter(void);
FUNC(void, CODE_FLASH_CLASS)	APP_vidTwoSevSegCounter(void);

FUNC(void, CODE_FLASH_CLASS)	APP_vidKeypadSevenSeg(void);

void lcd(void);
FUNC(void, CODE_FLASH_CLASS)		APP_LCD01(void);
FUNC(void, CODE_FLASH_CLASS)		APP_LCD02(void);
FUNC(void, CODE_FLASH_CLASS)		APP_LCD03(void);
#endif /* 04_APP_APP_H_ */
