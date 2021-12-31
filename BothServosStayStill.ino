/* Generate signal to make the servo stay still for centering. */

#include <Servo.h>      // Include servo library

Servo servoLeft;        // Declare left servo
Servo servoRight;       //Declare right servo

void setup()            // Built in initialization block
{
  servoLeft.attach(13); // Attach left signal to pin 13
      servoLeft.writeMicroseconds(1500);  // 1.5 ms stay still signal, pin 13
      
}

void loop()         //Main loop auto=repeats
{                   // 1.5 ms stay still signal, pin 13
}
