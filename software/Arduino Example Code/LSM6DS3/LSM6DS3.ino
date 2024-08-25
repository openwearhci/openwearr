/*****************************************************************************/
// This code is modified from Seeed LSM6DS3 library.
//
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
//
/*******************************************************************************/

#include "LSM6DS3.h"
#include "Wire.h"
#define WIRE Wire1
//Create a instance of class LSM6DS3
LSM6DS3 myIMU(I2C_MODE, 0x6B);    //I2C device address 0x6B

void setup() {
    // put your setup code here, to run once:
    Wire1.begin(SDA1,SCL1);
    Serial.begin(115200);
    while (!Serial);
    //Call .begin() to configure the IMUs
    if (myIMU.begin() != 0) {
        Serial.println("Device error");
    } else {
        Serial.println("Device OK!");
    }
}

void loop() {
    //Accelerometer
    //Serial.print("\nAccelerometer:\n");
    Serial.print(" X1:");
    Serial.print(myIMU.readFloatAccelX(), 4);
    Serial.print(",");
    Serial.print(" Y1:");
    Serial.print(myIMU.readFloatAccelY(), 4);
    Serial.print(",");
    Serial.print(" Z1:");
    Serial.println(myIMU.readFloatAccelZ(), 4);


    //Gyroscope
    //Serial.print("\nGyroscope:\n");
    // Serial.print(" X1 = ");
    // Serial.println(myIMU.readFloatGyroX(), 4);
    // Serial.print(" Y1 = ");
    // Serial.println(myIMU.readFloatGyroY(), 4);
    // Serial.print(" Z1 = ");
    // Serial.println(myIMU.readFloatGyroZ(), 4);

    //Thermometer
    //Serial.print("\nThermometer:\n");
    // Serial.print(" Degrees C1 = ");
    // Serial.println(myIMU.readTempC(), 4);
    // Serial.print(" Degrees F1 = ");
    // Serial.println(myIMU.readTempF(), 4);

}
