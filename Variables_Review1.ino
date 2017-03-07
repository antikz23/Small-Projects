int x = 0;
byte y = 0;
unsigned int z = 0;
long a = 0;
unsigned long b = 0;
float c = 0;
double d = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print(x--);
  Serial.print(",  ");
  Serial.print(y--);
  Serial.print(",  ");
  Serial.print(z--);
  Serial.print(",  ");
  Serial.print(a--);
  Serial.print(",  ");
  Serial.print(b--);
  Serial.print(",  ");
  Serial.print(c--);
  Serial.print(",  ");
  Serial.println(d--);
  delay(10);
}

