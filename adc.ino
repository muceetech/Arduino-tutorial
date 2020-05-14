void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int a = analogRead(A0);
  Serial.print("Analog value is ");
  Serial.println(a);
}
