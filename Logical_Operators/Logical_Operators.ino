int x;
int y;
void setup()
{
 pinMode(9, OUTPUT);
 pinMode(11, INPUT);
 pinMode(12, INPUT);
}

void loop()
{
  x = digitalRead(11);
  y = digitalRead(12);
  if ((y == LOW) or (x == HIGH))
 {
   digitalWrite(9, LOW);
 }
 else 
 {
   digitalWrite(9, HIGH);
 }
}
