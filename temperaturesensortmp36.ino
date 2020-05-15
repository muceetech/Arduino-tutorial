
int sensorval;
float temp;       
 
void setup() 
{
  Serial.begin(9600); //Start the Serial Port at 9600 baud
}

void loop() 
{
  // put your main code here, to run repeatedly: 
  sensorval = analogRead(A0);     //read the analog sensor and store it
  temp = (sensorval *5.0)/1023.0; // convert the analog value to voltage
  temp = temp - 0.5;              // subtract the offset voltage = 0.5V for TMP36 sensor to get temperature         
   
  Serial.print("Temperature in Celcius: ");
  Serial.println(temp);
}
