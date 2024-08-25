#include <Arduino.h>
#include <Adafruit_NeoPixel.h> //you need to install adadruit neopixel library first
 
#define NUM_PIXELS 1   //number of RGB. there is only one on OpenWear board

Adafruit_NeoPixel ws2812b(NUM_PIXELS, NEOPIXEL, NEO_GRB + NEO_KHZ800);

void setup()
{
  
  ws2812b.begin();
  ws2812b.clear();  

}

void loop()
{
  
  for(int i=0;i<100;i++){
    ws2812b.setPixelColor(0, ws2812b.Color(50, 100-i, i)); 
    ws2812b.show(); 
    delay(20);
  }
  for(int i=0;i<100;i++){
    ws2812b.setPixelColor(0, ws2812b.Color(50, i, 100-i)); 
    ws2812b.show(); 
    delay(20);
  }

  
}
