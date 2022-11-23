#include <Atmel/REGX52.H>
#include "headers/LCD1602.h"
#include "headers/MatrixKeyboard.h"

void main()
{
    unsigned char keyNum = 0;
    LCD_Init();
    while (1) {
        keyNum = martrixKey();
        if (keyNum) {
            LCD_ShowNum(1, 1, keyNum, 2);
        }
    }
}