const int red=1; //RED
const int yellow =2; //YELLOW
const int green = 3; //GREEN


void setup()
{
	pinMode(red, OUTPUT);
	pinMode(yellow, OUTPUT);
	pinMode(green, OUTPUT);
}

void loop()
{
	digitalWrite(red, HIGH);
	delay (1000);
	digitalWrite(red,LOW);
	digitalWrite(yellow, HIGH);
	delay(1000);
	digitalWrite(yellow,LOW);
	digitalWrite(green,HIGH);
	delay(5000);
	digitalWrite(green,LOW);
}