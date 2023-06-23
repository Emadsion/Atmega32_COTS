//God help us 
#ifndef	_DIO_INTERFACE_H_
#define	_DIO_INTERFACE_H_

//Define Ports
#define PORTA	0
#define PORTB	1
#define PORTC	2
#define PORTD	3
//Define Pins
#define PIN0	0
#define PIN1	1
#define PIN2	2
#define PIN3	3
#define PIN4	4
#define PIN5	5
#define PIN6	6
#define PIN7	7
//Define Direction state
#define OUTPUT 	1
#define INPUT		0
//Define Pin value
#define HIGH	1
#define LOW	0


// function to set pin direction
void DIO_VidSetPinDirection(u8 port, u8 pin, u8 state);

//function to set pin value
void DIO_VidSetPinValue(u8 port, u8 pin, u8 value);

//function to toggle pin
void DIO_VidTogglePin(u8 port, u8 pin);

//function to get pin (return the value inside the pin)
u8 DIO_U8GetPinValue(u8 port, u8 pin);

//function to set Port direction
void DIO_VidSetPortDirection(u8 port,u8 state);

//function to set Port value 
void DIO_VidSetPortValue(u8 port, u8 pin);


#endif