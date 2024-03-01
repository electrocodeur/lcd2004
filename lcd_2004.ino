//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(1,0);
  lcd.print("ElectroCodeur");
  lcd.setCursor(2,1);
  lcd.print("Bonjour monde!");
   lcd.setCursor(0,2);
  lcd.print("Arduino uno & 2004");

}


void loop()
{
}
