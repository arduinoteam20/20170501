/*
LiquidCrystal Library - Hello World
The circuit:
* LCD RS pin to digital pin 12
* LCD Enable pin to digital pin 11
* LCD D4 pin to digital pin 5
* LCD D5 pin to digital pin 4
* LCD D6 pin to digital pin 3
* LCD D7 pin to digital pin 2
* LCD R/W pin to ground
* 10K resistor:
* ends to +5V and ground
* wiper to LCD VO pin (pin 3)
*/

#include <LiquidCrystal.h> // include the library code
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // initialize interface pins
void setup() 
{
  lcd.begin(20, 2); // set up the LCD's number of columns and rows:
  lcd.println("04050192 Willy            ");
  lcd.setCursor(0,1);
  lcd.println("04050386 Chung              ");   
}
void loop() 
{

}

