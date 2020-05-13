void setup()
{
  pinMode(3, OUTPUT);
  pinMode(10, INPUT_PULLUP);

}

void loop()
{
  digitalWrite(3, LOW);

  if(digitalRead(10) == HIGH)
  {
   	digitalWrite(3, HIGH);
    delay(500);
    digitalWrite(3, LOW);
  }
  
}
