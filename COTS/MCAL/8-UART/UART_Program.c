#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "UART_Interface.h"
#include "UART_Private.h"
#include "UART_Config.h"


void MUART_VoidInitialization(void)
{
	/* Set BaudRate -> 9600/16MhZ */
	UBRRL = 102;
	UBRRH = 0;
	/* Asynchronous, Odd Parity, Stop bit 1, 8bit fram format  */
	UCSRC=0xA6;
	/* Enable RX and TX */
	UCSRB = 0x18;
	
	
	#if USART_TRANSMISSION_SPEED ==	DOUBLE
		SET_BIT(UCSRA,PA);
		SET_BIT(UCSRA,U2X);
	#elif USART_TRANSMISSION_SPEED == NORMAL
		SET_BIT(UCSRA,PA);
		CLR_BIT(UCSRA,U2X);
	#endif
}

void MUART_VoidSendChar(u8 copy_u8Data)
{
  // Wait until transmission Register Empty
  while((UCSRA&0x20) == 0x00);
  UDR = copy_u8Data;
}

u8 MUART_U8GetChar(void)
{
  u8 LOC_Result;
  // Wait until Reception Complete.
  while((UCSRA&0x80) == 0x00);
  Result = UDR;
  
  /* Clear Flag */
  SET_BIT(UCSRA,7);
  return Result;
}