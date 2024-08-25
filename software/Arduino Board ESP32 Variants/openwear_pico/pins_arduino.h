#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define EXTERNAL_NUM_INTERRUPTS 16
#define NUM_DIGITAL_PINS        40
#define NUM_ANALOG_INPUTS       16

#define analogInputToDigitalPin(p)  (((p)<20)?(analogChannelToDigitalPin(p)):-1)
#define digitalPinToInterrupt(p)    (((p)<40)?(p):-1)
#define digitalPinHasPWM(p)         (p < 34)

static const uint8_t TX = 1;
static const uint8_t RX = 3;

static const uint8_t SDA = 21;
static const uint8_t SCL = 22;

#define WIRE1_PIN_DEFINED 1  
static const uint8_t SDA1 = 23;
static const uint8_t SCL1 = 18;

static const uint8_t SS    = 5;
static const uint8_t MOSI  = 23;
static const uint8_t MISO  = 19;
static const uint8_t SCK   = 18;

#define NEOPIXEL 10
#define NEOPIXEL_POWER 5
#define LIGHT_SENSOR 35

static const uint8_t A0 = 4;
static const uint8_t A1 = 2;
static const uint8_t A2 = 18;
static const uint8_t A3 = 23;
static const uint8_t A4 = 26;
static const uint8_t A5 = 25;
static const uint8_t A6 = 27;
static const uint8_t A7 = 14;
static const uint8_t A8 = 12;
static const uint8_t A9 = 13;
static const uint8_t A10 = 15;

static const uint8_t T0 = 4;
static const uint8_t T1 = 0;
static const uint8_t T2 = 2;
static const uint8_t T3 = 15;
static const uint8_t T4 = 13;
static const uint8_t T5 = 12;
static const uint8_t T6 = 14;
static const uint8_t T7 = 27;
static const uint8_t T8 = 33;
static const uint8_t T9 = 32;

static const uint8_t DAC1 = 25;
static const uint8_t DAC2 = 26;

#endif /* Pins_Arduino_h */
