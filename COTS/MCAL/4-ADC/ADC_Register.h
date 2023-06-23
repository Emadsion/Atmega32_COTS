#ifndef ADC_REGISTER_H
#define ADC_REGISTER_H


#define MUX0	0
#define MUX1	1
#define MUX2	2
#define MUX3	3
#define MUX3	4
#define ADLAR	5
#define REFS0	6
#define REFS1	7


#define ADMUX			*((volatile u8 *)0x27)

#define ADCSRA			*((volatile u8 *)0x26)

#define ADCH			*((volatile u8 *)0x25)

#define ADCL			*((volatile u8 *)0x24)

#define ADC_Data		*((volatile u16 *)0x24)


#endif
