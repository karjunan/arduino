#define BUTTON_PIN 2
#define OUTPUT_PIN 12

void setup()
{
	Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(OUTPUT_PIN, OUTPUT);
}

void loop()
{
  
  	Serial.println(digitalRead(BUTTON_PIN));
  	if(digitalRead(BUTTON_PIN) == HIGH) {
    	Serial.println("BUTTON pressed");
      digitalWrite(OUTPUT_PIN, HIGH);
      delay(1000);
    } else {
     	Serial.println("BUTTON NOT Pressed" );
      digitalWrite(OUTPUT_PIN, LOW);
      delay(1000);
    }
  	
}