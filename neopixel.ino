#include <Adafruit_NeoPixel.h>

#define PIN      9 // On Trinket or Gemma, suggest changing this to 1

#define NUMPIXELS 1 // Popular NeoPixel ring size

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
 
  pixels.begin(); // INITIALIZE NeoPixel strip object
  pixels.clear(); // Set all pixel colors to 'off'
}

void loop() 
{
  for(int i= 0;i<255;i++)
  {
    pixels.setPixelColor(0, pixels.Color(255, 0, 255));
    pixels.show();   // Send the updated pixel colors to the hardware.
    delay(50); // Pause before next pass through loop
  }
}
