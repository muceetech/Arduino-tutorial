#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int angle = 0;    // variable to store the servo position
int analogval; 
void setup() 
{
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() 
{
  val = analogRead(A0); // Ao is connected to potentiometer
  angle = map(val,0,1023,0,255);
  myservo.write(angle);  
  delay(15);  
  
}
