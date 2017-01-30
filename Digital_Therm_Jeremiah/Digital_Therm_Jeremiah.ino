float x;
float y;

void setup()
{
  pinMode(23, INPUT);
  Serial.begin(9600);
}

void loop()
{
  x = analogRead(0);
  x = (x*5)/1024*100;
  y = analogRead(0);
  y = (x*9/5)+32;
 // analogWrite();
  Serial.print(x);
  Serial.print(", ");
  Serial.println(y);
  delay(1000);
}
