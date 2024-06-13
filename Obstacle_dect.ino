#include<LiquidCrystal.h>
const int rs=7,en=6,d4=5,d5=4,d6=3,d7=2;
int ir_pin=8;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
int buzzer =9;

void setup()
{
  pinMode(ir_pin, INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int value= digitalRead(ir_pin);
  Serial.print("IR Output");
  Serial.println(value);
  delay(2000);

 
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  if (value == 1)
  {
    lcd.print("Obsctacle Detected");
    delay(500);
    tone(buzzer,500,500);
  }
  else
  {
    lcd.print("No Obstacle");
    noTone(buzzer);
    delay(500);
  }
}