/*
 * DIO_config.h
 *
 *  Created on: Dec 5, 2018
 *      Author: AhmedShaban
 */

#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

/* Pin directions */
/* GROUP A */
#define DIO_u8PINA0_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINA1_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINA2_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINA3_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINA4_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINA5_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINA6_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINA7_DIR					DIO_u8OUTPUT_PIN
/* GROUP B */
#define DIO_u8PINB0_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINB1_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINB2_DIR					DIO_u8OUTPUT_PIN		/* Button pull-down*/
#define DIO_u8PINB3_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINB4_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINB5_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINB6_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINB7_DIR					DIO_u8OUTPUT_PIN
/* GROUP C */
#define DIO_u8PINC0_DIR					DIO_u8OUTPUT_PIN	/* Led */ /* single SevenSegment */
#define DIO_u8PINC1_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINC2_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINC3_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINC4_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINC5_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINC6_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PINC7_DIR					DIO_u8OUTPUT_PIN
/* GROUP D */
#define DIO_u8PIND0_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PIND1_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PIND2_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PIND3_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PIND4_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PIND5_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PIND6_DIR					DIO_u8OUTPUT_PIN
#define DIO_u8PIND7_DIR					DIO_u8OUTPUT_PIN

/* Disable Pull-up resistors */
#define DIO_u8PULL_UP_FEATURE			STD_ON


#endif /* DIO_CONFIG_H_ */
