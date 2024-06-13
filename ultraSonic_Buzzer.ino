const int trig_pin=8;
const int echo_pin=9;
const int buzzer=2;

long duration;
int distance;

void setup()
{
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig_pin,LOW);
  delayMicroseconds(50);
  
  digitalWrite(trig_pin,HIGH);
  delayMicroseconds(10);
  
  digitalWrite(trig_pin,LOW);
  duration =pulseIn(echo_pin,HIGH);
  distance =duration*0.034/2;
  Serial.println("Distance in cm: "+String(distance));
  delay(100);

  if(distance <=5)
  {
    tone(buzzer,500,500);
  delay(100);
  }

  else
  {
    noTone(buzzer);
  delay(500);
  }
}