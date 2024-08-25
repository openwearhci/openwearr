void setup() {
  Serial.begin(115200);

}

void loop() {
  int light = analogRead(LIGHT_SENSOR); //LIGHT_SENSOR is GPIO 35 for OpenWear
  Serial.println(light);

}
