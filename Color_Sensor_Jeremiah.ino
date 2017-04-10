int x;
int y;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  //red
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  delay(100);
  y = 0;
  for(x = 0; x <= 10; x++)
  {
    y = y + analogRead(0);
  }
  y = y/10;
  Serial.print(y);
  Serial.print(':');
  
  //green
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(100);
  y = 0;
  for(x = 0; x <= 10; x++)
  {
    y = y + analogRead(0);
  }
  y = y/10;
  Serial.print(y);
  Serial.print(':');
  
  //blue
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(100);
  y = 0;
  for(x = 0; x <= 10; x++)
  {
    y = y + analogRead(0);
  }
  y = y/10;
  Serial.println(y);

  
}

