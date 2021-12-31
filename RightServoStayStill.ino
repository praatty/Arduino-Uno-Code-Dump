/* Transmit the center or stay still signal on pin 12 for central adjustment */

#include <Servo.h>

Servo servoRight;

void setup()
{
  servoRight.attach(12);
  servoRight.writeMicroseconds(1500);
}

void loop()
{
}
