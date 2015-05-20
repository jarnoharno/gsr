// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.clear();
  lcd.print("vo: ");
  lcd.setCursor(0,1);
  lcd.print("dt: ");
}

void printPadded(int x, int pad) {
  String sx = String(x);
  lcd.print(sx);
  for (int i = sx.length(); i < pad; ++i) {
    lcd.print(' ');
  }
}

void loop() {
  int x = analogRead(A0);
  int y = analogRead(A1);
  lcd.setCursor(4,0);
  printPadded(x,4);
  lcd.setCursor(4,1);
  printPadded(y,4);
  unsigned long t = millis();
  Serial.print('(');
  Serial.print(t);
  Serial.print(',');
  Serial.print(x);
  Serial.println(')');
  delay(y);
}

