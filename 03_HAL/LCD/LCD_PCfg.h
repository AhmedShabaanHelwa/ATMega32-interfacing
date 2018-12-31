/*
 * LCD_PCfg.h
 *
 *  Created on: Dec 30, 2018
 *      Author: AhmedShaban
 */

#ifndef LCD_PCFG_H_
#define LCD_PCFG_H_

/* 1- Data Mode of operation:
 * LCD_u8EIGHT_BIT_MODE,
 * LCD_u8FOUR_BIT_MODE */
#define LCD_u8DATA_MODE			LCD_u8EIGHT_BIT_MODE

/* 2- Data pins */
#define LCD_u8DATA_PIN0					DIO_u8PINA0
#define LCD_u8DATA_PIN1					DIO_u8PINA1
#define LCD_u8DATA_PIN2					DIO_u8PINA2
#define LCD_u8DATA_PIN3					DIO_u8PINA3
#define LCD_u8DATA_PIN4					DIO_u8PINA4
#define LCD_u8DATA_PIN5					DIO_u8PINA5
#define LCD_u8DATA_PIN6					DIO_u8PINA6
#define LCD_u8DATA_PIN7					DIO_u8PINA7

/* 3- Control pins */
#define LCD_u8RS_REGSELECT_PIN			DIO_u8PINB0
#define LCD_u8RW_READWRITE_PIN			DIO_u8PINB1
#define LCD_u8EN_ENABLE_PIN				DIO_u8PINB2

#endif /* 03_HAL_LCD_LCD_PCFG_H_ */
