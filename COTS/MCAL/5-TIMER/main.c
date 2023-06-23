#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "Timer_Interface.h"
#include <util/delay.h>

//void toggle_led(void);

void main(void)
{
	DIO_VidSetPinDirection(PORTB, 3, OUTPUT);
	//TIMER0_VoidSetCallBack(&toggle_led);
	TIMER0_VidInit();




	while(1)
	{
		TIMER0_VoidDutyCycle(30);
		 _delay_ms(3000);
		 TIMER0_VoidDutyCycle(60);
		 _delay_ms(3000);
		 TIMER0_VoidDutyCycle(12);
		 _delay_ms(3000);


	}
}

/*void toggle_led(void)
{
	DIO_ToggelPin(PORTA,1);

}*/
