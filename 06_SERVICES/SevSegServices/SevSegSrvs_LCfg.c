/*
 * SevSegSrvs_LCfg.c
 *
 *  Created on: Dec 25, 2018
 *      Author: AhmedShaban
 */
/* 2- Generic Modules */
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Modules */
#include "../../02_MCAL/01_DIO/DIO.h"
#include "../../03_HAL/SevenSegments/SevSeg_types.h"
/* 4- Module inclusions */
#include "SevSegSrvs_priv.h"
#include "SevSegSrvs_PCfg.h"
/* 5- Local Definitions */



CONST(SevSeg_tstrSegment, DATA_RAM_CALSS)		SevSegSrvs_akstreSegments[u8NUM_OF_SEGMENTS] = {

	/* Segment #1 */
	{SevSegSrvs_SGMNT01_COMMON_TYPE, SevSegSrvs_SGMNT01_COMMON_PIN, SevSegSrvs_SGMNT01_ATTACHED_PORT},
	/* Segment #2 */
	{SevSegSrvs_SGMNT02_COMMON_TYPE, SevSegSrvs_SGMNT02_COMMON_PIN, SevSegSrvs_SGMNT02_ATTACHED_PORT},
	/* Segment #3 */
	{SevSegSrvs_SGMNT03_COMMON_TYPE, SevSegSrvs_SGMNT03_COMMON_PIN, SevSegSrvs_SGMNT03_ATTACHED_PORT},
	/* Segment #4 */
	{SevSegSrvs_SGMNT04_COMMON_TYPE, SevSegSrvs_SGMNT04_COMMON_PIN, SevSegSrvs_SGMNT04_ATTACHED_PORT}

};
