/*
 * SevSeg_types.h
 *
 *  Created on: Dec 25, 2018
 *      Author: AhmedShaban
 */

#ifndef SEVSEG_TYPES_H_
#define SEVSEG_TYPES_H_

typedef	enum SevSeg_tenuCommnonType{
	u8CommonCathode = 0,
	u8CommonAnode
}SevSeg_tenuCommnonType;


typedef struct{
	SevSeg_tenuCommnonType	enuCommonType;
	uint8					u8CommonPin;
	uint8					u8AttachedPort;
}SevSeg_tstrSegment;

#endif /* 03_HAL_SEVENSEGMENTS_SEVSEG_TYPES_H_ */
