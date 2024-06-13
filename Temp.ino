int temp_pin =A0;
float temp;

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
  delay(2000);
}