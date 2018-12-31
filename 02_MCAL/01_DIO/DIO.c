/*
 * DIO.c
 *
 *  Created on: Dec 5, 2018
 *      Author: AhmedShaban
 */


/* 1- Standard Libraries */
/* 2- Generic Modules */
#include "../../01_LIB/BIT_MATH.h"
#include "../../01_LIB/STD_TYPES.h"
#include "../../05_COMMON/02_STDTYPES/Compiler.h"
/* 3- Global Modules */
/* 4- Module inclusions */
#include "DIO_reg.h"
#include "DIO_priv.h"
#include "DIO_config.h"
#include "DIO.h"
/* 5- Local definitions */
#define u8INITIAL_PORT_VAL			0x00
/* 5- Global Variables */
/* 6- Static Variables */
/* 7- Local Variables */

/* 8- Module APIs */
FUNC(void, CODE_FLASH_CLASS) DIO_vidInit(void)
{
	/* Set Pins directions */

		/* VERY BIG BUGG! */
	/********** Group B Directions **********/
	//DDRA = BIT_CONC(	DIO_u8PINA0_DIR,
	//					DIO_u8PINA1_DIR,
	//					DIO_u8PINA2_DIR,
	//					DIO_u8PINA3_DIR,
	//					DIO_u8PINA4_DIR,
	//					DIO_u8PINA5_DIR,
	//					DIO_u8PINA6_DIR,
	//					DIO_u8PINA7_DIR);

	/********** Group A Directions **********/
	DDRA = BIT_CONC(	DIO_u8PINA7_DIR,
						DIO_u8PINA6_DIR,
						DIO_u8PINA5_DIR,
						DIO_u8PINA4_DIR,
						DIO_u8PINA3_DIR,
						DIO_u8PINA2_DIR,
						DIO_u8PINA1_DIR,
						DIO_u8PINA0_DIR);


	/********** Group B Directions **********/

	DDRB = BIT_CONC(	DIO_u8PINB7_DIR,
						DIO_u8PINB6_DIR,
						DIO_u8PINB5_DIR,
						DIO_u8PINB4_DIR,
						DIO_u8PINB3_DIR,
						DIO_u8PINB2_DIR,
						DIO_u8PINB1_DIR,
						DIO_u8PINB0_DIR);
	/********** Group C Directions **********/
	DDRC = BIT_CONC(	DIO_u8PINC7_DIR,
						DIO_u8PINC6_DIR,
						DIO_u8PINC5_DIR,
						DIO_u8PINC4_DIR,
						DIO_u8PINC3_DIR,
						DIO_u8PINC2_DIR,
						DIO_u8PINC1_DIR,
						DIO_u8PINC0_DIR);
	/********** Group D Directions **********/
	DDRC = BIT_CONC(	DIO_u8PIND7_DIR,
						DIO_u8PIND6_DIR,
						DIO_u8PIND5_DIR,
						DIO_u8PIND4_DIR,
						DIO_u8PIND3_DIR,
						DIO_u8PIND2_DIR,
						DIO_u8PIND1_DIR,
						DIO_u8PIND0_DIR);

	/* 2- Set the initial values of the PORTS
	 * !Pseudo: use the DIO_vidSetPortValue to initialize the port*/
	//	DIO_vidSetPortValue(DIO_u8PORTA,	u8INITIAL_PORT_VAL);
	//	DIO_vidSetPortValue(DIO_u8PORTB,	u8INITIAL_PORT_VAL);
	//	DIO_vidSetPortValue(DIO_u8PORTC,	u8INITIAL_PORT_VAL);
	//	DIO_vidSetPortValue(DIO_u8PORTD,	u8INITIAL_PORT_VAL);

		/* 3- Pull up resistors control:
		 * default: STD_ON */
#if(DIO_u8PULL_UP_FEATURE == STD_OFF)

		SET_BIT(SIFOR,PUD);
#endif
}

FUNC(void, CODE_FLASH_CLASS) DIO_vidSetPinValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PinNumber,
		VAR(DIO_tenuPinValueType,DATA_RAM_CLASS)	enuValue)
		{
			//VAR(uint8, DATA_RAM_CLASS)
			if((u8PinNumber >= DIO_u8PORTA_START) && (u8PinNumber <= DIO_u8PORTA_END) )
			{
				/* 1- Remove pin offset */
				u8PinNumber -= DIO_u8PORTA_OFFSET;
				/* 2- set the value to the pin */
				ASSIGN_BIT_VALUE(PORTA, u8PinNumber, enuValue);
			}
			else if((u8PinNumber >= DIO_u8PORTB_START) && (u8PinNumber <= DIO_u8PORTB_END))
			{
				/* 1- Remove pin offset */
				u8PinNumber -= DIO_u8PORTB_OFFSET;
				/* 2- set the value to the pin */
				ASSIGN_BIT_VALUE(PORTB, u8PinNumber, enuValue);
			}
			else if((u8PinNumber >= DIO_u8PORTC_START) && (u8PinNumber <= DIO_u8PORTC_END))
			{
				/* 1- Remove pin offset */
				u8PinNumber -= DIO_u8PORTC_OFFSET;
				/* 2- set the value to the pin */
				ASSIGN_BIT_VALUE(PORTC, u8PinNumber, enuValue);
			}
			else if((u8PinNumber >= DIO_u8PORTD_START) && (u8PinNumber <= DIO_u8PORTD_END))
			{
				/* 1- Remove pin offset */
				u8PinNumber -= DIO_u8PORTD_OFFSET;
				/* 2- set the value to the pin */
				ASSIGN_BIT_VALUE(PORTD, u8PinNumber, enuValue);
			}
			else
			{
				/* DO NOTHING */
			}
		}

FUNC(DIO_tenuPinValueType, CODE_FLASH_CLASS) DIO_enuGetPinValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PinNumber)
		{
			VAR(uint8, DATA_RAM_CLASS)	u8LocalValue = DIO_u8PinLow;

			if((u8PinNumber >= DIO_u8PORTA_START) && (u8PinNumber <= DIO_u8PORTA_END) )
				{
					/* 1- Remove pin offset */
					u8PinNumber -= DIO_u8PORTA_OFFSET;
					/* 2- set the value to the pin */
					u8LocalValue = GET_BIT_VALUE(PINA, u8PinNumber);
				}
			else if((u8PinNumber >= DIO_u8PORTB_START) && (u8PinNumber <= DIO_u8PORTB_END))
				{
					/* 1- Remove pin offset */
					u8PinNumber -= DIO_u8PORTB_OFFSET;
					/* 2- set the value to the pin */
					u8LocalValue = GET_BIT_VALUE(PINB, u8PinNumber);
				}
			else if((u8PinNumber >= DIO_u8PORTC_START) && (u8PinNumber <= DIO_u8PORTC_END))
				{
					/* 1- Remove pin offset */
					u8PinNumber -= DIO_u8PORTC_OFFSET;
					/* 2- set the value to the pin */
					u8LocalValue = GET_BIT_VALUE(PINC, u8PinNumber);
				}
			else if((u8PinNumber >= DIO_u8PORTD_START) && (u8PinNumber <= DIO_u8PORTD_END))
				{
					/* 1- Remove pin offset */
					u8PinNumber -= DIO_u8PORTD_OFFSET;
					/* 2- set the value to the pin */
					u8LocalValue = GET_BIT_VALUE(PIND, u8PinNumber);
				}
			else
				{
					/* DO NOTHING */
				}

			return (u8LocalValue);
		}

FUNC(void, CODE_FLASH_CLASS) DIO_vidTogglePinValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PinNumber)
		{
			//VAR(uint8, DATA_RAM_CLASS)
			if((u8PinNumber >= DIO_u8PORTA_START) && (u8PinNumber <= DIO_u8PORTA_END) )
				{
					/* 1- Remove pin offset */
					u8PinNumber -= DIO_u8PORTA_OFFSET;
						/* 2- set the value to the pin */
					TOGGLE_BIT(PORTA, u8PinNumber);
				}
			else if((u8PinNumber >= DIO_u8PORTB_START) && (u8PinNumber <= DIO_u8PORTB_END))
				{
					/* 1- Remove pin offset */
					u8PinNumber -= DIO_u8PORTB_OFFSET;
						/* 2- set the value to the pin */
					TOGGLE_BIT(PORTB, u8PinNumber);
				}
			else if((u8PinNumber >= DIO_u8PORTC_START) && (u8PinNumber <= DIO_u8PORTC_END))
				{
					/* 1- Remove pin offset */
					u8PinNumber -= DIO_u8PORTC_OFFSET;
					/* 2- set the value to the pin */
					TOGGLE_BIT(PORTC, u8PinNumber);
				}
			else if((u8PinNumber >= DIO_u8PORTD_START) && (u8PinNumber <= DIO_u8PORTD_END))
				{
					/* 1- Remove pin offset */
					u8PinNumber -= DIO_u8PORTD_OFFSET;
					/* 2- set the value to the pin */
					TOGGLE_BIT(PORTC, u8PinNumber);
				}
			else
				{
						/* DO NOTHING */
				}
	}

FUNC(void, CODE_FLASH_CLASS) DIO_vidSetPortValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PortNumber,
		VAR(uint8,DATA_RAM_CLASS)					u8Value)
		{
			switch(u8PortNumber)
			{
				case DIO_u8PORTA:
					PORTA = u8Value;
					break;
				case DIO_u8PORTB:
					PORTB = u8Value;
					break;
				case DIO_u8PORTC:
					PORTC = u8Value;
					break;
				case DIO_u8PORTD:
					PORTD = u8Value;
					break;
				default:
					break;
			}
		}

FUNC(uint8, CODE_FLASH_CLASS) DIO_u8GetPortValue(
		VAR(uint8,DATA_RAM_CLASS)					u8PortNumber)
		{
			VAR(uint8, DATA_RAM_CLASS)	u8LocalValue = DIO_u8PinLow;
			switch(u8PortNumber)
			{
			case DIO_u8PORTA:
				u8LocalValue = PINA;
				break;
			case DIO_u8PORTB:
				u8LocalValue = PINB;
				break;
			case DIO_u8PORTC:
				u8LocalValue = PINC;
				break;
			case DIO_u8PORTD:
				u8LocalValue = PIND;
				break;
			default:
				break;
			}
			return (u8LocalValue);
		}
