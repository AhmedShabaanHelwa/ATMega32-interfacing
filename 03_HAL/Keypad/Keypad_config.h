/*
 * Keypad_config.h
 *
 *  Created on: Dec 27, 2018
 *      Author: AhmedShaban
 */

#ifndef KEYPAD_CONFIG_H_
#define KEYPAD_CONFIG_H_

/* 1- Number of columns, to set 4x3 or 4x4 configuration */
#define Keypad_u8NUM_OF_COLUMNS					4

/* 2- Switches pull resistance configuration: PULL-up or Pull-down  */
#define Keypad_u8PULL_RESISTOR_CONFIG			Keypad_u8PULL_UP_RES

/* 3- OUTPUT Pins (ROWs) */
#define Keypad_u8ROW01							DIO_u8PINA0
#define Keypad_u8ROW02							DIO_u8PINA1
#define Keypad_u8ROW03							DIO_u8PINA2
#define Keypad_u8ROW04							DIO_u8PINA3

/* 4- INPUT Pins (COLUMNs) */
#define Keypad_u8COLUMN01						DIO_u8PINA4
#define Keypad_u8COLUMN02						DIO_u8PINA5
#define Keypad_u8COLUMN03						DIO_u8PINA6
#define Keypad_u8COLUMN04						DIO_u8PINA7

#endif /* 03_HAL_KEYPAD_KEYPAD_CONFIG_H_ */
