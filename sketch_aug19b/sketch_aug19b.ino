#include <LiquidCrystal.h>
int LCD1 = 11;
int LCD2 = 10;
int LCD3 = 7;
int LCD4 = 6;
int LCD5 = 5;
int LCD6 = 4;
int pos = 0;
int vos = 0;
LiquidCrystal lcd(LCD1,LCD2,LCD3,LCD4,LCD5,LCD6);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
for(pos=0;pos<6;pos++){
lcd.setCursor(pos,vos);
lcd.print("Hello World");
delay(200);
lcd.clear();
}
if(pos=5){
  vos++;
}
for(pos=5;pos>0;pos--){
lcd.setCursor(pos,vos);
lcd.print("Hello World");
delay(200);
lcd.clear();
}
if(vos=2){
  vos=vos-2;
}
}
