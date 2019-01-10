
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int sensorPin = A3;
void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Temperature C");
}

void loop() {
int sensorVal=analogRead(sensorPin)*0.48876;
lcd.setCursor(0, 1);
lcd.print(sensorVal);
delay(250);
}
