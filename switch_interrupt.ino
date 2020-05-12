volatile byte state = LOW;
void setup()
{
  pinMode(11, OUTPUT); // pin 11 is output
  pinMode(2, INPUT);  // pin 2 is input - pushbutton
  attachInterrupt(digitalPinToInterrupt(2), blink, RISING);
}

void loop()
{
  
}

void blink()
{
  state = !state; // state is a temp variable which stores the state of led
  digitalWrite(11,state);
  delay(500);
}
