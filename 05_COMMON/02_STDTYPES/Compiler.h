/*
 * Compiler.h
 *
 *  Created on: Dec 5, 2018
 *      Author: AhmedShaban
 */

#ifndef STDTYPES_COMPILER_H_
#define STDTYPES_COMPILER_H_

/* FUNC macro for the declaration and definition of functions, that ensures correct syntax of function declarations
   rettype     return type of the function
   memclass    classification of the function itself
 */
# define FUNC(rettype, memclass) rettype 

/* FUNC_P2CONST macro for declaration and definition of functions returning a pointer to a constant, that ensures
     correct syntax of function declarations.
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   memclass    classification of the function itself
 */
# define FUNC_P2CONST(rettype, ptrclass, memclass) const rettype* 

/* FUNC_P2VAR macro for the declaration and definition of functions returning a pointer to a variable, that ensures
     correct syntax of function declarations
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   memclass    classification of the function itself
 */
# define FUNC_P2VAR(rettype, ptrclass, memclass) rettype* 

/* P2VAR macro for the declaration and definition of pointers in RAM, pointing to variables
   ptrtype     type of the referenced variable memory class
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define P2VAR(ptrtype, memclass, ptrclass) ptrtype* 

/* P2CONST macro for the declaration and definition of pointers in RAM pointing to constants
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define P2CONST(ptrtype, memclass, ptrclass) const ptrtype* 

/* CONSTP2VAR macro for the declaration and definition of constant pointers accessing variables
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define CONSTP2VAR(ptrtype, memclass, ptrclass) ptrtype *const 

/* CONSTP2CONST macro for the declaration and definition of constant pointers accessing constants
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype *const 

/* P2FUNC macro for the type definition of pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   fctname     function name respectively name of the defined type
 */
# define P2FUNC(rettype, ptrclass, fctname) rettype (* fctname) 

/* CONSTP2FUNC macro for the type definition of pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   fctname     function name respectively name of the defined type
 */
# define CONSTP2FUNC(rettype, ptrclass, fctname) rettype (*const fctname) 

/* CONST macro for the declaration and definition of constants
   type        type of the constant
   memclass    classification of the constant itself
 */
# define CONST(type, memclass) const type 

/* VAR macro for the declaration and definition of variables
   vartype     type of the variable
   memclass    classification of the variable itself
 */
# define VAR(vartype, memclass) vartype 


/* Standard status types */

/* 1st classification: High and Low  */
# define STD_HIGH		1u			/* Physical state of 5V or 3.3V */
# define STD_LOW		0u			/* Physical state of 0V */

/* 2nd classification: Active and Idle */
# define STD_ACTIVE		1u			/* Logical state Active */
# define STD_IDLE		0u			/* Logical state IDLE 	*/

/* 3rd classification: On and Off */
# define STD_ON			1u
# define STD_OFF		0u

/* 4th classification: Ok and not OK, for OSEK compliance */
# ifndef STDTYPEDEFINED
# define STDTYPEDEFINED

# define E_OK			0u
# define E_NOT_OK		1u

# endif

#endif /* 05_COMMON_02_STDTYPES_COMPILER_H_ */
