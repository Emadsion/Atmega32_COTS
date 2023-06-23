#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ADC_Register"


void ADC_Init(void)
{
	//CLR channeles and single end
	CLR_BIT(ADMUX,MUX0);
	CLR_BIT(ADMUX,MUX1);
	CLR_BIT(ADMUX,MUX2);
	CLR_BIT(ADMUX,MUX3);
	CLR_BIT(ADMUX,MUX4);
	
	//Select ADLAR to be right justified
	CLR_BIT(ADMUX,ADLAR);
	
	//Selecting V refrence to be from Vcc = 5v
	SET_BIT(ADMUX,6);
	CLR_BIT(ADMUX,7);
	
	
	//Select Prescaler value = 64
	CLR_BIT(ADCSRA,0);
	SET_BIT(ADCSRA,1);
	SET_BIT(ADCSRA,2);
	
	//Enable ADC
	SET_BIT(ADCSRA,7);
}

u16 ADC_ReadData(channel)
{
	u16 ADC_Data,AL;
	ADMUX = ADMUX|(channel & 0x0f);
	//Start Conversion
	SET_BIT(ADCSRA,6);
	//wait for conversion (wait for flag)
	while(GET_BIT(ADCSRA,4)==0);
	//Must set flag again
	SET_BIT(ADCSRA,4);
	return ADC_Data;
	
}
