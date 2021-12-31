/*
* Robotics with Shield - LeftServoTest
* 
*/

#include <Servo.h>    //
Servo servoLeft;     //

void setup()          //
{
  Serial.begin(9600);
  Serial.println("Beep!");
  tone(4, 3000, 1000);
  delay(1000);
  servoLeft.attach(12);                //
  servoLeft.writeMicroseconds(1300);   //
  delay(3000);                         //
  servoLeft.writeMicroseconds(1500);   //
  delay(1000);                         //
  servoLeft.writeMicroseconds(17000);  //
  delay(3000);                         //
  servoLeft.writeMicroseconds(1500);   //
}
 
void loop() {
  // put your main code here, to run repeatedly:

}
