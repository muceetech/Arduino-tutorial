void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int a = analogRead(A0);
  Serial.print("Analog voltage is ");
  Serial.println((a * 5.0) /1023.0);
}
