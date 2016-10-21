const int sensorPin = 0; 
const int ledPin = 9; 
int lightLevel;

void setup() { 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  lightLevel = analogRead(sensorPin); 
  lightLevel = map(lightLevel, 0, 1023, 0, 255); 
  lightLevel = constrain(lightLevel, 0, 255); 
  analogWrite(ledPin, lightLevel);
}
