#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
 
#define NUM_PIXELS 1   
// change with your threshold value
const int threshold = 70;
// variable for storing the touch pin value 
int touchValue;
const int touchPin = A1; 
bool light = 0;

Adafruit_NeoPixel ws2812b(NUM_PIXELS, NEOPIXEL, NEO_GRB + NEO_KHZ800);

void setup()
{
  Serial.begin(115200);
  ws2812b.begin();
  ws2812b.clear();  
  pinMode (touchPin, OUTPUT);

}

void loop()
{
  touchValue = touchRead(touchPin);
  if(touchValue < threshold){
    if(light==0){
      light=1;
    }else if(light==1){
      light=0;
    }
  }
  
  //Serial.println(touchValue);
  if(light==0){
    ws2812b.setPixelColor(0, ws2812b.Color(50, 40, 80)); 
    ws2812b.show(); 
  }else if(light==1){
    ws2812b.clear(); 
    ws2812b.show(); 
  }


}
