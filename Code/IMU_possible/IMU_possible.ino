void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  float x, y, z;

  if (IMU.accelerationAvailable()) {
      IMU.readAcceleration(x, y, z);

      Serial.print(x);
      Serial.print('\t');
      Serial.print(y);
      Serial.print('\t');
      Serial.println(z);
  }
}
