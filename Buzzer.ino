int buzzer =4;

void setup()
{
pinMode(buzzer,OUTPUT);
}

void loop()
{
  tone_melody();
}

void tone_melody()
{
int tones[]={262,196,196,220,196,0,247,262};
int durations[]={250,125,125,250,250,250,250,250};

for(int cnt=0;cnt<=7;cnt++)
{
tone(buzzer,tones[cnt],durations[cnt]);
delay(durations[cnt]*1.30);
}
}