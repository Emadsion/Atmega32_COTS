#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"
#include "DIO_Register.h"

void DIO_VidSetPinDirection(u8 port, u8 pin, u8 state)
{
	if (state == OUTPUT)
	{
		switch(port)
		{
			case PORTA: SetPin(DDRA_RG, pin);	break;
			case PORTB: SetPin(DDRB_RG, pin);	break;
			case PORTC: SetPin(DDRC_RG, pin);	break;
			case PORTD: SetPin(DDRD_RG, pin);	break;
		}
	}
	else if (state == INPUT)
	{
		switch(port)
		{
		case PORTA: ClrPin(DDRA_RG, pin);		break;
		case PORTB: ClrPin(DDRB_RG, pin);		break;
		case PORTC: ClrPin(DDRC_RG, pin);		break;
		case PORTD: ClrPin(DDRD_RG, pin);		break;
		}
	}
	else
	{
		//do nothing
	}
}


void DIO_VidSetPinValue(u8 port, u8 pin, u8 value)
{
	if (value == HIGH)
	{
		switch(port)
		{
			case PORTA: SetPin(PORTA_RG, pin);	break;
			case PORTB: SetPin(PORTB_RG, pin);	break;
			case PORTC: SetPin(PORTC_RG, pin);	break;
			case PORTD: SetPin(PORTD_RG, pin);	break;
		}
	}
	else if (value == LOW)
	{
		switch(port)
		{
		case PORTA: ClrPin(PORTA_RG, pin);	break;
		case PORTB: ClrPin(PORTB_RG, pin);	break;
		case PORTC: ClrPin(PORTC_RG, pin);	break;
		case PORTD: ClrPin(PORTD_RG, pin);	break;
		}
	}
	else
	{
		
	}	
}


void DIO_VidTogglePin(u8 port, u8 pin)
{
	switch (port)
	{
		case PORTA: TogPin(PORTA_RG, pin);	break;
		case PORTB: TogPin(PORTB_RG, pin);	break;
		case PORTC: TogPin(PORTC_RG, pin);	break;
		case PORTD: TogPin(PORTD_RG, pin);	break;
	}
}

u8 DIO_U8GetPinValue(u8 port, u8 pin)
{
	u8 pin_value;
	switch(port)
	{
		case PORTA: pin_value = GetPin(PORTA_RG, pin);	break;
		case PORTB: pin_value = GetPin(PORTB_RG, pin);	break;
		case PORTC: pin_value = GetPin(PORTC_RG, pin);	break;
		case PORTD: pin_value = GetPin(PORTD_RG, pin);	break;
		
	}
	return pin_value;
	
}

void DIO_VidSetPortDirection(u8 port,u8 astate)
{
	if (astate == OUTPUT)
		astate = 0xFF;
	else if(astate == INPUT)
		astate = 0x00;
		
	switch(port)
	{
		case PORTA: DDRA_RG = astate;	break;
		case PORTB: DDRB_RG = astate;	break;
		case PORTC: DDRC_RG = astate;	break;
		case PORTD: DDRD_RG = astate;	break;
	}
}

void DIO_VidSetPortValue(u8 port, u8 avalue)
{
	if (avalue == HIGH)
		avalue = 0xFF;
	else if(avalue == LOW)
		avalue = 0x00;
	switch(port)
	{
		case PORTA: PORTA_RG = avalue;	break;
		case PORTB: PORTB_RG = avalue;	break;
		case PORTC: PORTC_RG = avalue;	break;
		case PORTD: PORTD_RG = avalue;	break;
		
	}
}
