/* Static Architecture 		*/
/* Module: 		BIT_MATH	*/
/* Component: 	01_LIB		*/
/****************************/

#ifndef	_BIT_MATH_H_
#define _BIT_MATH_H_

/* 1- Basic bit operations */
/* !Bug: unbalanced parenthesis in SET-BIT,
 * 		 caused errors in DIO.c */
#define SET_BIT(REG, BITNO)						(REG |= (1 << BITNO))
#define CLEAR_BIT(REG, BITNO)					(REG &= ~(1 << BITNO))
#define TOGGLE_BIT(REG, BITNO)					(REG ^= (1 << BITNO))
/* 2- Basic bit status operations */
#define IS_BIT_SET(REG,BITNO)					(REG & ( 1 << BITNO))
#define IS_BIT_CLEAR(REG,BITNO)					(!(REG & (1 << BITNO)))
/* 3- Advanced bit operations */
#define	ASSIGN_BIT_VALUE(REG,BITNO,VALUE)	do{							\
												CLEAR_BIT(REG,BITNO);	\
												REG |= (VALUE << BITNO);\
											}while(0);
											/* Get the value first, then adjust it to write */

/* ALternative way of assign bit. No thing new
/* except the do-while will be written in single line
/* #define ASSIGN_BIT_VALUE(REG,BITNO,VALUE)		do{CLEAR_BIT(REG,BITNO);REG |= (VALUE << BITNO);}while(0);
 */

#define GET_BIT_VALUE(REG,BITNO)				(( REG & (1 << BITNO) ) >> BITNO)
/* 4- Bit concatenation operations */
#define BIT_CONC(B7,B6,B5,B4,B3,B2,B1,B0)		CONC_HELP(B7,B6,B5,B4,B3,B2,B1,B0)
#define CONC_HELP(B7,B6,B5,B4,B3,B2,B1,B0)		0b##B7##B6##B5##B4##B3##B2##B1##B0
#endif
