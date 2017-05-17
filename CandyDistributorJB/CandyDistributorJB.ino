#include <Servo.h>

Servo myservo;
int pos = 0;
void setup()
{
  myservo.attach(9, 500, 2700);
  // ././ myservo.setMaximumPulse(2500);
  // myservo.setMinimumPulse(500);
}

void loop()
{
  myservo.write(45);
  delay(3000);
  myservo.write(90);
  delay(3000);
  myservo.write(127);
  delay(3000);
}
