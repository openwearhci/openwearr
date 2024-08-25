/*
 * Interfacing Arduino with BMP280 temperature and pressure sensor.
 * This is a free software with NO WARRANTY.
 * This code is modified from Adafruit BMP280 library.
 * 
 */
 
#include <Wire.h>             // include Wire library, required for I2C devices
#include <Adafruit_Sensor.h>  // include Adafruit sensor library
#include <Adafruit_BMP280.h>  // include adafruit library for BMP280 sensor  // include LCD library
 
// define device I2C address: 0x76 or 0x77 (0x77 is library default address)
#define BMP280_I2C_ADDRESS  0x76
 
Adafruit_BMP280 bmp280;
 
 
void setup() {
  Serial.begin(9600);

  Serial.println(F("Arduino + BMP280"));
  
  if (!bmp280.begin(BMP280_I2C_ADDRESS))
  {  
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
    while (1);
  }
 
}
 
 
void loop()
{
  // get temperature, pressure and altitude from library
  float temperature = bmp280.readTemperature();  // get temperature
  float pressure    = bmp280.readPressure();     // get pressure
  float altitude_   = bmp280.readAltitude(1013.25); // get altitude (this should be adjusted to your local forecast)
 
 
  // print data on the serial monitor software
  // 1: print temperature
  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" °C");
  // 2: print pressure
  Serial.print("Pressure    = ");
  Serial.print(pressure/100);
  Serial.println(" hPa");
  // 3: print altitude
  Serial.print("Approx Altitude = ");
  Serial.print(altitude_);
  Serial.println(" m");
    
  Serial.println();  // start a new line
  delay(2000);       // wait 2 seconds
  
}
// end of code.
