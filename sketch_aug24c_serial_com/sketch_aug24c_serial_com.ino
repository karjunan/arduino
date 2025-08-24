#define LED_ID 10

void setup() {
  pinMode(LED_ID, OUTPUT);
  Serial.begin(921600);
  delay(1000);
}

void loop() {

  digitalWrite(LED_ID, HIGH);
  if(Serial.available() > 0) {
    int res = Serial.parseInt();
    // String res = Serial.readString();
    digitalWrite(LED_ID, LOW);
    delay(res);
    Serial.println(res);
  }

}
