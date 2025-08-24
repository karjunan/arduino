#define POTENTIOMETER_PIN A2
#define BUTTON_PIN 2
#define RED_PIN 12
#define YELLOW_PIN 11
#define GREEN_PIN 10
 

void setup()
{
  	// Input pin for Anolog not required
  	//pinMode(BUTTON_PIN, INPUT);
    Serial.begin(9600);
    pinMode(BUTTON_PIN, INPUT);
    pinMode(RED_PIN, OUTPUT);
    digitalWrite(RED_PIN, HIGH);
    pinMode(YELLOW_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
  		
}

void setLow() {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
}

void loop()
{

  Serial.println(digitalRead(BUTTON_PIN));
  if(digitalRead(BUTTON_PIN) == HIGH) {
    	setLow();
      delay(1000);
    } else {
      digitalWrite(RED_PIN, HIGH);
      delay(1000);
      digitalWrite(RED_PIN, LOW);
      digitalWrite(YELLOW_PIN, HIGH);
      delay(1000);
      digitalWrite(YELLOW_PIN, LOW);
      digitalWrite(GREEN_PIN, HIGH);
      delay(1000);
      digitalWrite(GREEN_PIN, LOW);
  }  
}