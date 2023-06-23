#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "KEYPAD_Interface.h"
#include <util/delay.h>

const u8 number[4][4] =
{
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16} 
	
};

void KPD_Init(void)
{
	//COLUMNS
	DIO_VidSetPinDirection(KPD_PORT,COL1,OUTPUT);
	DIO_VidSetPinDirection(KPD_PORT,COL2,OUTPUT);
	DIO_VidSetPinDirection(KPD_PORT,COL3,OUTPUT);
	DIO_VidSetPinDirection(KPD_PORT,COL4,OUTPUT);

	//ROWS
	DIO_VidSetPinDirection(KPD_PORT,ROW1,INPUT);
	DIO_VidSetPinDirection(KPD_PORT,ROW2,INPUT);
	DIO_VidSetPinDirection(KPD_PORT,ROW3,INPUT);
	DIO_VidSetPinDirection(KPD_PORT,ROW4,INPUT);
	
	DIO_VidSetPortValue(KPD_PORT,0xFF);
}

u8 KPD_U8GetPressedKey(void)
{
	u8 LOC_U8Col, LOC_U8Row;
	u8 LOC_U8Button=0;
	for (LOC_U8Col =0 ; LOC_U8Col < 4 ; LOC_U8Col++)
	{
		DIO_VidSetPinValue(KPD_PORT, LOC_U8Col+4, LOW);
		for(LOC_U8Row = 0; LOC_U8Row < 4; LOC_U8Row++)
		{
			if (DIO_u8GetPinValue(KPD_PORT, LOC_U8Row) == 0)
				{
				LOC_U8Button = number[LOC_U8Row][LOC_U8Col];
										//for bouncing
			//while(DIO_u8GetPinValue(KPD_PORT, LOC_U8Row) == 0);
									//or
			//_delay_ms(2 to 200 ms as fastest human can press the button);
			_delay_ms(20);
				}
		}
		DIO_VidSetPinValue(KPD_PORT, LOC_U8Col+4, HIGH);
	}
	return LOC_U8Button;
}
