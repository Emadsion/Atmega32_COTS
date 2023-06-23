#ifndef UART_INTERFACE_H
#define UART_INTERFACE_H

void MUART_VoidInitialization(void);
void MUART_VoidSendChar(u8 copy_u8Data);
u8 MUART_U8GetChar(void);

#endif