void setup() {
  // put your setup code here, to run once:
  Serial.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  int temperature = Bean.getTemperature();

  
  Serial.print(temperature);
  Serial.print(" C");
  Bean.sleep(3000);

}
