#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  for (int i = 15; i >= 0; i--) {
    lcd.print("hello, world!");
    lcd.setCursor(i, 1);
    lcd.print("whee");
    delay(50);
    lcd.clear();
  }
}
 
