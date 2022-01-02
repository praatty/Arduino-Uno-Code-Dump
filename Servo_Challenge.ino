#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() 
{
  tone(4, 3000, 1000);                    // Play tone for 1 second
  delay(1000);                            // Delay to finish tone
  servoLeft.attach(11);                   // Attach left signal to P11
  servoRight.attach(12);                  // Attach right signal to P12

  Serial.begin (9600);                    // start the robot 
  
  servoLeft.attach(11);                   //attach left p13
  servoRight.attach(12);                  //attach right p12
//Forward
  servoLeft.writeMicroseconds(1700);      //Left wheel clockwise 
  servoRight.writeMicroseconds(1300);     //Right wheel clockwise 
  delay(3400);                            //forward 61cm for 3.4 seconds 

//Turn Left
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(500);

  servoLeft.writeMicroseconds(1700);     //Left wheel clockwise 
  servoRight.writeMicroseconds(1300);    //Right wheel clockwise 
  delay(1700);                           //forward 30.5cm for 2 seconds 

//180 degree pivot turn
  servoLeft.writeMicroseconds(17500);    //Left weheel clockwise 
  servoRight.writeMicroseconds(1610);    //Right wheel clockwise 
  delay(500);                            //forward 99cm for 7.6 seconds 
 
  servoLeft.detach();                    //stop tranferring servo signals
  servoRight.detach();
}

//forward 99cm 
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);

void loop() 
{
  
}
