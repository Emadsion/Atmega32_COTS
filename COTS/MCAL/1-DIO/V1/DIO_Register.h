#ifndef _DIO_REGISTER_H_
#define _DIO_REGISTER_H_

/* Group A Registers */
#define PORTA_RG  	*((volatile u8*)0x3B)
#define DDRA_RG  	*((volatile u8*)0x3A)
#define PINA_RG   	*((volatile u8*)0x39)

/* Group B Registers */
#define PORTB_RG  	*((volatile u8*)0x38)
#define DDRB_RG 	*((volatile u8*)0x37)
#define PINB_RG		*((volatile u8*)0x36)

/* Group C Registers */
#define PORTC_RG 	*((volatile u8*)0x35)
#define DDRC_RG  	*((volatile u8*)0x34)
#define PINC_RG   	*((volatile u8*)0x33)

/* Group D Registers */
#define PORTD_RG  		*((volatile u8*)0x32)
#define DDRD_RG	 		*((volatile u8*)0x31)
#define PIND_RG		   	*((volatile u8*)0x30)

#endif