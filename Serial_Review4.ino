int x = 0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.print(x, DEC);
  Serial.print(", ");
  Serial.print(x, BIN);
  Serial.print(", ");
  Serial.write(x);
  Serial.print(", ");
  Serial.println(x++, HEX);
  delay(500);
}
