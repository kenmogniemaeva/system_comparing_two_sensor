const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adc = analogRead(sensorPin);
  float voltage = adc * (5.0 / 1023.0);
  float tempC = voltage * 100.0;   // LM35 : 10 mV par °C

  Serial.print(adc);
  Serial.print(",");
  Serial.println(tempC);
  delay(500);
}