int state = 0;
int x;
void setup()
{
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  x = digitalRead(9);
  switch (state)
  {
    case 0:
      if (x == LOW)
      {
        digitalWrite(10, LOW);
        state = 1;
      }
      delay(500);
      break;

    case 1:
      if (x == LOW)
      {
        digitalWrite(10, HIGH);
        state = 0;
      }
      delay(500);
      break;
  }
}
