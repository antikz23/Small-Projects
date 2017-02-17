int x;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  for(int x = 0; x < 4; x++)
  {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(175);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(175);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(175);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    delay(500);
  }
}

void loop()
{

}

