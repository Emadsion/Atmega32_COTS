#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "seg_Interface.h"


void seg1_print(u8 letter)
{
	switch (letter)
	{
		case 'a': DIO_VidSetPinValue(SEG1_PORT, 0, HIGH); break;
		
		case 'b': DIO_VidSetPinValue(SEG1_PORT, 1, HIGH); break;
		
		case 'c': DIO_VidSetPinValue(SEG1_PORT, 2, HIGH); break;
		
		case 'd': DIO_VidSetPinValue(SEG1_PORT, 3, HIGH); break;
		
		case 'e': DIO_VidSetPinValue(SEG1_PORT, 4, HIGH); break;
		
		case 'f': DIO_VidSetPinValue(SEG1_PORT, 5, HIGH); break;
		
		case 'g': DIO_VidSetPinValue(SEG1_PORT, 6, HIGH); break;
		
		case '.': DIO_VidSetPinValue(SEG1_PORT, 7, HIGH); break;
		
		default:																 break;
		
	}
}
	
void seg2_print(u8 letter)
{
	switch (letter)
	{
		case 'a': DIO_VidSetPinValue(SEG2_PORT, 0, HIGH); break;
		
		case 'b': DIO_VidSetPinValue(SEG2_PORT, 1, HIGH); break;
		
		case 'c': DIO_VidSetPinValue(SEG2_PORT, 2, HIGH); break;
		
		case 'd': DIO_VidSetPinValue(SEG2_PORT, 3, HIGH); break;
		
		case 'e': DIO_VidSetPinValue(SEG2_PORT, 4, HIGH); break;
		
		case 'f': DIO_VidSetPinValue(SEG2_PORT, 5, HIGH); break;
		
		case 'g': DIO_VidSetPinValue(SEG2_PORT, 6, HIGH); break;
		
		case '.': DIO_VidSetPinValue(SEG2_PORT, 7, HIGH); break;
		
		default:																 break;
		
	}
}