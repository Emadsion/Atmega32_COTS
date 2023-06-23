
#ifndef LCD_H_
#define LCD_H_
void LCD_VidWriteData(u8 data);
void LCD_VidWriteCommand(u8 command);
void LCD_VidInt(void);
void LCD_voidSendString(u8 *data);
void LCD_voidSetPosition(u8 row,u8 col);
void LCD_VidSetCGRAMAdres();
void LCD_VidWriteNum(u8 num);
#endif
