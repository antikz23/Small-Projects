#include <Servo.h>

Servo myservo;
char x = 0;
void setup()
{
  Serial.begin(9600);
  myservo.attach(9, 500, 2700);
  // ././ myservo.setMaximumPulse(2500);
  // myservo.setMinimumPulse(500);
}

void loop()
{
  if (Serial.available() > 0)
  {
    x = Serial.read();
    Serial.println(x);

    if (x == 'r')
    {
      myservo.write(170);
     // x = 0;
    }
    if (x == 'o')
    {
      myservo.write(120);
     // x = 0;
    }
  }

  // myservo.write(0);
  //delay(1000);
  //myservo.write(30);
  //delay(1000);
  //myservo.write(70);
  //delay(1000);
  //myservo.write(120);
  //delay(1000);
  //myservo.write(170);
  //delay(1000);
}
