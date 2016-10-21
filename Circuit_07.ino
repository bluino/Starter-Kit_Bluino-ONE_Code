const int temperaturePin = 0;

void setup() { 
  Serial.begin(115200);
}

void loop() {
  float voltage, degreesC, degreesF;
  voltage = analogRead(temperaturePin) * 0.004882814; 
  degreesC = (voltage - 0.5) * 100.0;
  degreesF = degreesC * (9.0/5.0) + 32.0;
  
  Serial.print("voltage: "); 
  Serial.print(voltage); 
  Serial.print(" deg C: "); 
  Serial.print(degreesC); 
  Serial.print(" deg F: "); 
  Serial.println(degreesF);
  delay(1000);
}
