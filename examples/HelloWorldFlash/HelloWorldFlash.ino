#include "LCD_1602_RUS.h"

LCD_1602_RUS lcd(0x27, 16, 2);

const wchar_t line1[] PROGMEM = L"Теперь можно";
const wchar_t line2[] PROGMEM = L"по-русски";

void setup()
{
  lcd.init();                      // initialize the lcd
  // Print a message to the LCD.
  lcd.backlight();

  lcd.setCursor(14, 0);
  lcd.print('.');
  lcd.setCursor(12, 1);
  lcd.print('.');
    
  lcd.setCursor(2, 0);
  lcd.printF(line1);
  lcd.setCursor(3, 1);
  lcd.printF(line2);
}

void loop()
{
}