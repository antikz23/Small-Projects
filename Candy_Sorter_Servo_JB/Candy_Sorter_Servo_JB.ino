#include <Servo.h>

Servo myservo;

void setup() 
{
  myservo.attach(9, 300, 2700);
// ././ myservo.setMaximumPulse(2500);
// myservo.setMinimumPulse(500);
}

void loop() 
{
 myservo.write(0);
 delay(1000);
 myservo.write(30);
 delay(1000);
 
 myservo.write(70);
 delay(1000);
 myservo.write(110);
 delay(1000);
 myservo.write(170);
 delay(1000);
}
