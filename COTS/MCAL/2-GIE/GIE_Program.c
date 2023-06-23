/*********************************************************/
/* Author      : Muhammad Emad                            */
/* Date        : 10 NOV 2020                             */
/* Version     : V01                                     */
/*********************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "GIE_Interface.h"
#include "GIE_Register.h"

void GIE_VidEnable(void)
{
	SET_BIT(SREG,7);
}

void GIE_VidDisable(void)
{
	 CLR_BIT(SREG,7);
}