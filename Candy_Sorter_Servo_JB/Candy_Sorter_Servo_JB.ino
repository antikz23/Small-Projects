#include <Servo.h>

Servo myservo;

void setup() 
{
  myservo.attach(9);
}

void loop() 
{
 myservo.write(30);
 delay(300);
 myservo.write(60);
 delay(300);
 myservo.write(90);
 delay(300);
 myservo.write(120);
 delay(300);
 myservo.write(150);
 delay(300);
 myservo.write(180);
 delay(300);
 myservo.write(-180);
}
