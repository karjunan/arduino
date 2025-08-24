#define POTENTIOMETER_PIN A2
#define LED_PIN 11

void setup()
{
  	// Input pin for Anolog not required
  	//pinMode(BUTTON_PIN, INPUT);
      pinMode(LED_PIN, OUTPUT);
      analogWrite(LED_PIN, analogRead(POTENTIOMETER_PIN));
  	  Serial.begin(9600);
  	
}

void loop()
{
  Serial.println(analogRead(POTENTIOMETER_PIN));
  int value = analogRead(POTENTIOMETER_PIN);
  analogWrite(LED_PIN, value);
    // delay(100);
}