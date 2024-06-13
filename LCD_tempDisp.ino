#include <LiquidCrystal.h>
const int rs=7,en=6,d4=5,d5=4,d6=3,d7=2;
int temp_pin =A0;
float temp;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup()
{
  pinMode(temp_pin,INPUT);
  Serial.begin(9600);
  
}

void loop()
{
   temp=analogRead(temp_pin)*0.00488*100;
  Serial.print("Temperature :");
  Serial.println(temp,4);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Temperature:");
   lcd.setCursor(0,1);
  lcd.print(temp);
  delay(2000);
}
