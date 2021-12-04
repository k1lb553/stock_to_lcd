#include <LiquidCrystal.h>
const int rs = 4, en = 5, d4 = 6, d5 = 7, d6 = 8, d7 = 9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
byte b;
long incoming_num = 0;

void setup() {
  lcd.begin(19, 3);
  lcd.setCursor(1, 1);
  Serial.begin(9600);
  //Serial.setTimeout(10);
}
void loop() {
  incoming_num = Serial.parseInt();
  int differ = incoming_num -422;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("TSLA:");
  lcd.print(incoming_num);
  lcd.setCursor(11, 0);
  lcd.print("Diff:");
  lcd.print(differ);
}
  //lcd.print("........................."); a delay() elrontja a decodingot
  //két féle su-pref-fix van, az egyik nem változik!
  
