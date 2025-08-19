// C++ code
//
#include <LiquidCrystal.h>
#define Gaz A1
#define TempSen A2
const int LDR = A3;
#define led_red 7
#define led_green 6
float voltage;
float tempC;
int LDRValue = 0;
const int buzzer = 9;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  lcd.begin(16,2);
  pinMode(Gaz, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop()
{
  float sensorGaz = analogRead(Gaz);
  voltage = (analogRead(A2) * 5.0) / 1024.0;
  tempC = (voltage - 0.5) * 100;
  LDRValue = analogRead(LDR);
  
  lcd.clear();
  if (sensorGaz>=200 && tempC>=50 && LDRValue>=500){
    lcd.setCursor(0,0);
    lcd.print(sensorGaz);
    lcd.print(" ");
    lcd.print(tempC);
    lcd.print(" ");
    lcd.print(LDRValue);
  	lcd.setCursor(0,1);
    lcd.print("FIRE DETECTED");
    tone(buzzer,200);
    digitalWrite(led_green, 0);
    digitalWrite(led_red, 1);
  }
  else{
    lcd.setCursor(0,0);
    lcd.print(sensorGaz);
    lcd.print(" ");
    lcd.print(tempC);
    lcd.print(" ");
    lcd.print(LDRValue);
  	lcd.setCursor(0,1);
    lcd.print("NO FIRE DETECTED");
    noTone(buzzer);
    digitalWrite(led_green,1);
    digitalWrite(led_red, 0);
  }
  delay(500);
}