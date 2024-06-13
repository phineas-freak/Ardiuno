#include <DHT.h>
#define DHTPIN 9
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup()
{
  Serial.begin(9600);
  Serial.println("DHT11 Test");
  dht.begin();
}

void loop()
{
  float h= dht.readHumidity();
  float t= dht.readTemperature();
  Serial.print("Humidity:");
  Serial.print(h);
  Serial.print("%\n");
  Serial.print("Tempertature:");
  Serial.print(t);
  Serial.print("*C");
  Serial.print("%\n");
  Serial.print("%\n");
  delay(1000);
}