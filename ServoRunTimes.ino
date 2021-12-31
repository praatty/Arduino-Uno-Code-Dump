/*
 Generate a sevro full speed counterclockwise signal with pin 13 and 
 full speed clockwise signal with pin 12.
 */

 #include <Servo.h>

 Servo servoLeft;
 Servo servoRight;

 void setup()
 {
  servoLeft.attach(13);
  servoRight.attach(12);

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(3000);
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(3000);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);

 }

 void loop()
 {
 }
