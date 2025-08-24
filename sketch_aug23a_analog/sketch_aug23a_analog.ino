#define LED_PIN 11

void setup() {
  
  pinMode(LED_PIN, OUTPUT);

  analogWrite(LED_PIN, 255);
  delay(1000);
}

void loop() {

  for(int i = 255; i >= 0; i--) {
    analogWrite(LED_PIN, i);
    delay(100);
    if(i == 0) {
      delay(1000);
    }
  }
  // analogWrite(LED_PIN,200);
  // delay(500);
  // analogWrite(LED_PIN, 100);
  // delay(500);
  // analogWrite(LED_PIN, 50);
  // delay(500);
  // analogWrite(LED_PIN, 5);
  // delay(500);
  // analogWrite(LED_PIN, 0);
  // delay(1000);
}
