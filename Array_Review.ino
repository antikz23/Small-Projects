int x;
byte ar[5] = {8, 12, 32, 44, 19};
byte gr[5];
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for (x = 0; x < 5; x++)
  {
    gr[x]=ar[x] + 2;
    Serial.print(ar[x]);
    Serial.print(":");
    Serial.print(gr[x]);
    Serial.print("  ");
    delay(500);
  }
  Serial.println(":");
}
