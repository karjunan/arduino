const int trigPin = 6; // Trigger pin
const int echoPin = 7; // Echo pin
const int ledPin = 10; // Led PIN

long duration;
int distanceCm;

void setup() {
  // put your setup code here, to run once:

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Send a 10 microsecond pulse to trigger the sensor
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the duration of the high pulse from the echo pin
  // The pulseIn() function measures the time it takes for the pulse to return
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate the distance based on the speed of sound
  // Speed of sound is approx. 343 m/s or 0.0343 cm/µs
  // The distance is half of the total travel time (out and back)
  distanceCm = duration * 0.0343 / 2;
  
  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distanceCm);
  if(distanceCm < 50) {
      digitalWrite(ledPin, HIGH);
  } else {
      digitalWrite(ledPin, LOW);
  }
  // Serial.println(" cm");

  // Wait a moment before the next measurement to avoid interference
  delay(100);
}
