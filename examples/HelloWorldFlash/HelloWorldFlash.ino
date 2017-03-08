#include "LCD_1602_RUS.h"

LCD_1602_RUS lcd(0x27, 16, 2);

const wchar_t textPitch[] PROGMEM = L"НАКЛОНА";
const wchar_t textSet[]   PROGMEM = L"ВВОД";
const wchar_t textTimer[] PROGMEM = L"ТАЙМЕР";

void setup()
{
  lcd.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();

  lcd.setCursor(14, 0);
  lcd.print("123");
  lcd.setCursor(12, 1);
  lcd.print("1234");
    
  lcd.setCursor(1, 0);
  lcd.printF(textSet);
  lcd.print(' ');
  lcd.printF(textPitch);
  lcd.fillLine();
  
  lcd.setCursor(1, 1);
  lcd.printF(textPitch, 4, 2);
  lcd.print(' ');
  lcd.printF(textTimer);
  lcd.print('A');
  lcd.fillLine();
}

void loop()
{
}