/* 
  Send 1/100th speed servosignals for viewing with an LED.
*/

void loop()  // Built in initialization block
{
 pinMode(13, OUTPUT);  // set digital pin 13 as OUTPUT
}

void loop() 
{
  digitalWrite(13, HIGH);  //Pin 13 = 5 V, LED emits light
  delay(170);   //..for 0.17 seconds
  digitalWrite(13, LOW);  //Pin 13 = 0 V, LED no light
  delay(1830);  //..for 1.83 seconds
}
