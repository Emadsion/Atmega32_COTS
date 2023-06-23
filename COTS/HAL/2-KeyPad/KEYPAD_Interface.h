#ifndef KEYPAD_INTERFACE_H
#define KEYPAD_INTERFACE_H


#define KPD_PORT PORTA

#define ROW1	0
#define ROW2	1
#define ROW3	2
#define ROW4	3

#define COL1	4
#define COL2	5
#define COL3	6
#define COL4	7

//Initialize the keypad
void KPD_Init(void);

//program keypad
u8 KPD_U8GetPressedKey(void);


#endif


