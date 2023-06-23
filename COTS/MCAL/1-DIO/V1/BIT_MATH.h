/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/
#ifndef _BIT_MATH_H
#define _BIT_MATH_H

#define SetPin(VAR,BITNO)	(VAR) |=  (1 << (BITNO))
#define ClrPin(VAR,BITNO)		(VAR) &= ~(1 << (BITNO))
#define TogPin(VAR,BITNO)	(VAR) ^=  (1 << (BITNO))
#define GetPin(VAR,BITNO)	(((VAR) >> (BITNO)) & 0x01)


#endif