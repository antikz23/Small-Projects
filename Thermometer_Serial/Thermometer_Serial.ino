
float x;

void setup()
{
  pinMode(23, INPUT);
  Serial.begin(9600);
}

void loop()
{
  x = analogRead(0);
  x = (x*5)/1024;
 // analogWrite();
  Serial.println(x);
  delay(500);
}
