
#include <Wire.h>
const int MPU=0x68;
float AccX,AccY, AccZ;
float GyroX,GyroY,GyroZ;
float accAngleX, accAngleY,accAngleZ;
float roll,pitch,yaw;
float AccErrorX,AccErrorY,GyroErrorX,GyroErrorY,GyroErrorZ;
float elapsedTime,currentTime,previousTime;
int c=0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);
  Wire.write(0x00);
  Wire.endTransmission(true);
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.beginTransmission(MPU);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,6,true);
  AccX = (Wire.read() << 8 | Wire.read()) / 16384.0;
  AccY = (Wire.read() << 8 | Wire.read()) / 16384.0;
  AccZ = (Wire.read() << 8 | Wire.read()) / 16384.0;

  accAngleX = (atan(AccY/sqrt(powAccX,2)+pow(AccZ,2))) * 180/PI)-0.58;
  accAngleY = 



}
