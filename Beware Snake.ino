#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,  16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(2,0);
  lcd.print("Beware Snake!");
  delay(700);
  lcd.clear();
  delay(700);
    lcd.setCursor(2,0);
  lcd.print("Beware Snake!");
  delay(700);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int pos1 = 0;pos1<=2;pos1++){
    for(int pos2 =0;pos2<=16;pos2++){
      lcd.setCursor(pos2,pos1);
      lcd.print("--<");
      delay(200);
      lcd.clear();
    }
  }
}
