#ifndef SAFETYPINS_H
#define SAFETYPINS_H

#include <Arduino.h>

enum class AnalogSafetyPins {
  A0_SAFE = A0,
  A1_SAFE = A1,
  A2_SAFE = A2,
  A3_SAFE = A3,
  A4_UNSAFE_TWI_SDA = A4,
  A5_UNSAFE_TWI_SCL = A5,
};

enum class DigitalSafetyPins {
  D0_UNSAFE_SERIAL_RX = 0,
  D1_UNSAFE_SERIAL_TX = 1,
  D2_SAFE = 2,
  D3_SAFE_PWM = 3,
  D4_SAFE = 4,
  D5_SAFE_PWM = 5,
  D6_SAFE_PWM = 6,
  D7_SAFE = 7,
  D8_SAFE = 8,
  D9_SAFE_PWM = 9,
  D10_UNSAFE_PWM_SPI_SS = 10,
  D11_UNSAFE_PWM_SPI_MOSI = 11,
  D12_UNSAFE_SPI_MISO = 12,
  D13_UNSAFE_SPI_SCK = 13,
};


typedef AnalogSafetyPins AnalogSafetyPin;
typedef DigitalSafetyPins DigitalSafetyPin;

const AnalogSafetyPin A0_SAFE                   = AnalogSafetyPins::A0_SAFE;
const AnalogSafetyPin A1_SAFE                   = AnalogSafetyPins::A1_SAFE;
const AnalogSafetyPin A2_SAFE                   = AnalogSafetyPins::A2_SAFE;
const AnalogSafetyPin A3_SAFE                   = AnalogSafetyPins::A3_SAFE;
const AnalogSafetyPin A4_UNSAFE_TWI_SDA         = AnalogSafetyPins::A4_UNSAFE_TWI_SDA;
const AnalogSafetyPin A5_UNSAFE_TWI_SCL         = AnalogSafetyPins::A5_UNSAFE_TWI_SCL;

const DigitalSafetyPin D0_UNSAFE_SERIAL_RX      = DigitalSafetyPins::D0_UNSAFE_SERIAL_RX;
const DigitalSafetyPin D1_UNSAFE_SERIAL_TX      = DigitalSafetyPins::D1_UNSAFE_SERIAL_TX;
const DigitalSafetyPin D2_SAFE                  = DigitalSafetyPins::D2_SAFE;
const DigitalSafetyPin D3_SAFE_PWM              = DigitalSafetyPins::D3_SAFE_PWM;
const DigitalSafetyPin D4_SAFE                  = DigitalSafetyPins::D4_SAFE;
const DigitalSafetyPin D5_SAFE_PWM              = DigitalSafetyPins::D5_SAFE_PWM;
const DigitalSafetyPin D6_SAFE_PWM              = DigitalSafetyPins::D6_SAFE_PWM;
const DigitalSafetyPin D7_SAFE                  = DigitalSafetyPins::D7_SAFE;
const DigitalSafetyPin D8_SAFE                  = DigitalSafetyPins::D8_SAFE;
const DigitalSafetyPin D9_SAFE_PWM              = DigitalSafetyPins::D9_SAFE_PWM;
const DigitalSafetyPin D10_UNSAFE_PWM_SPI_SS    = DigitalSafetyPins::D10_UNSAFE_PWM_SPI_SS;
const DigitalSafetyPin D11_UNSAFE_PWM_SPI_MOSI  = DigitalSafetyPins::D11_UNSAFE_PWM_SPI_MOSI;
const DigitalSafetyPin D12_UNSAFE_SPI_MISO      = DigitalSafetyPins::D12_UNSAFE_SPI_MISO;
const DigitalSafetyPin D13_UNSAFE_SPI_SCK       = DigitalSafetyPins::D13_UNSAFE_SPI_SCK;

/*
 * Analog
 */
 
void safetyPinMode(AnalogSafetyPin pin, uint8_t pin_mode);
void pinMode(AnalogSafetyPin pin, uint8_t pin_mode);

float safetyPinAnalogRead(AnalogSafetyPin pin);
float analogRead(AnalogSafetyPin pin);

/*
 * Digital
 */
 
void safetyPinMode(DigitalSafetyPin pin, uint8_t pin_mode);
void pinMode(DigitalSafetyPin pin, uint8_t pin_mode);

int safetyPinDigitalRead(DigitalSafetyPin pin);
int digitalRead(DigitalSafetyPin pin);

#endif // SAFETYPINS_H
