void setup() {
  
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
    Serial.println("Begin writing");
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    Serial.println("Stoped writing");
    delay(1000);


}
