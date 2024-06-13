int ir_pin=8;

void setup()
{
  pinMode(ir_pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int value= digitalRead(ir_pin);
  Serial.print("IR Output");
  Serial.println(value);
  delay(2000);
}