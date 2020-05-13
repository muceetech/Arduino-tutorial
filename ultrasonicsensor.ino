const int echo = 8, Trig = 9;
void setup() 
{
      Serial.begin(9600);
      pinMode(Trig, OUTPUT);
      pinMode(echo, INPUT);
}
void loop()
{
      long duration, inches, cm;
      digitalWrite(Trig, LOW);
      delayMicroseconds(2);
      digitalWrite(Trig, HIGH);
      delayMicroseconds(10);
      digitalWrite(Trig, LOW);
      duration = pulseIn(echo, HIGH);
      inches	=	microsecondsToInches(duration);
      cm	=	microsecondsToCentimeters(duration);
      Serial.print(inches);
      Serial.print("in, ");
      Serial.print(cm);
      Serial.print("cm");
      Serial.println();
      delay(100);
}

long microsecondsToInches(long microseconds)
   {
    return microseconds / 74 / 2;   
   }
long microsecondsToCentimeters(long microseconds)
  {
    return microseconds / 29 / 2;  
  }


