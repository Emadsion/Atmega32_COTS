#include "STD_TYPES.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include <avr/delay.h>
#include "LCD_Config.h"


void LCD_VidWriteData(u8 data)
{
	//RS
	DIO_VidSetPinValue(COM_PORT,RS,HIGH);
	//R/W
	DIO_VidSetPinValue(COM_PORT,RW,LOW);
	//Send Data
	DIO_VidSetPortValue(DATA_PORT,data);
	
	//EN
	
	DIO_VidSetPinValue(COM_PORT,EN,HIGH);
	_delay_ms(1);
	
	DIO_VidSetPinValue(COM_PORT,EN,LOW);
	_delay_ms(1);

}

void LCD_VidWriteNum(u8 num)
{

	int n,x=0;
	if(num==0)
	{
		LCD_VidWriteData(48);
	}
	else
	{
		while(num>0)
		{
			x=x*10+(num%10);
			num=num/10;
		}

		while(x>0)
		{
			n=x%10;
			LCD_VidWriteData(n+48);
			x=x/10;

		}
	}
}

void LCD_VidWriteCommand(u8 command)
{
	//RS
	DIO_VidSetPinValue(COM_PORT,RS,LOW);
	//R/W
	DIO_VidSetPinValue(COM_PORT,RW,LOW);
	//Send Data
	DIO_VidSetPortValue(DATA_PORT,command);
	
	//EN
	
	DIO_VidSetPinValue(COM_PORT,EN,HIGH);
	_delay_ms(1);
	
	DIO_VidSetPinValue(COM_PORT,EN,LOW);
	_delay_ms(1);
	
}
void LCD_VidInt(void)
{
		DIO_VidSetPortDirection(DATA_PORT,0b11111111);
		
		DIO_VidSetPortDirection(COM_PORT,0b11111111);
		
        	_delay_ms(40);
			
			//2 Lines & 8bit mode & 5*8 pix
		LCD_VidWriteCommand(Function_Set);
		    _delay_ms(1);
		
		LCD_VidWriteCommand(Display_On);
            _delay_ms(1);
			
		//clear..
		LCD_VidWriteCommand(Clear);
		    _delay_ms(2);

        
		

}

void LCD_voidSendString(u8 *data)
{
     while((*data)!='\0')
     {
    	 LCD_VidWriteData(*data);
        data++;
     }
}

void LCD_voidSetPosition(u8 row,u8 col)
{
	if(row==0)
	{
		LCD_VidWriteCommand(128+col);
	}
	else if(row==1)
	{
		LCD_VidWriteCommand(128+64+col);
	}
}

void LCD_VidSetCGRAMAdres(void)
{
	LCD_VidWriteCommand(64);

	LCD_VidWriteData(0b00000000);
	LCD_VidWriteData(0b00000001);
	LCD_VidWriteData(0b00000001);
	LCD_VidWriteData(0b00000001);
	LCD_VidWriteData(0b00011111);
	LCD_VidWriteData(0b00000000);
	LCD_VidWriteData(0b00000000);
	LCD_VidWriteData(0b00000000);
	LCD_voidSetPosition(0,0);





}

















