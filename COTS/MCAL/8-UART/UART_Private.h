#ifndef UART_PRIVATE_H
#define UART_PRIVATE_H

/* UART Registetrs */
#define UDR								*((volatile u8 *) 0x2C)
#define UCSRA							*((volatile u8 *) 0x2B)
#define UCSRB							*((volatile u8 *) 0x2A)
#define UBRRL							*((volatile u8 *) 0x29)

/*
 * URSEL = 1 --> UCSRC
 * URSEL = 0 --> UBRRH
 *
 */
#define UCSRC							*((volatile u8 *) 0x40)
#define UBRRH							*((volatile u8 *) 0x40)











#endif