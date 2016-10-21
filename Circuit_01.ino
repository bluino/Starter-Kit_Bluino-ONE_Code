int sensorPin = 0; 
int ledPin = 13;

void setup() { 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); 
  delay(sensorValue); 
  digitalWrite(ledPin, LOW); 
  delay(sensorValue);
}
