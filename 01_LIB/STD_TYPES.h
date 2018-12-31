/*  Static architecture			*/
/* Module: 		Standard Types	*/
/* Component:	01_LIB			*/
/* Created on: Dec 3, 2018		*/
/* Author: AhmedShaban			*/
/********************************/

#ifndef _STD_TYPES_H_
#define _STD_TYPES_H_

typedef unsigned 	char 	uint8;
typedef signed		char	sint8;

typedef unsigned 	short	uint16;
typedef signed		short	sint16;

typedef unsigned	long	uint32;
typedef	signed		long	sint32;

typedef unsigned long long	uint64;
typedef signed	 long long	sint64;

typedef float	f32;
typedef double	f64;

typedef enum {false = 0,
				true  =1
			}bool;

#endif /* 01_LIB_STD_TYPES_H_ */
