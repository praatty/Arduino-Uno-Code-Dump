/*
* Robotics with Shield - RightServoTest
* 
*/

#include <Servo.h>    //
Servo servoRight;     //

void setup()          //
{
  Serial.begin(9600);
  Serial.println("Beep!");
  tone(4, 3000, 1000);
  delay(1000);
  servoRight.attach(12);               //
  servoRight.writeMicroseconds(1300);  //
  delay(3000);                         //
  servoRight.writeMicroseconds(1500);  //
  delay(1000);                         //
  servoRight.writeMicroseconds(17000); //
  delay(3000);                         //
  servoRight.writeMicroseconds(1500);  //
}

 void loop() {
  // put your main code here, to run repeatedly:

}
