#include "SafetyPins.h"

/*
 * Analog
 */
 
void safetyPinMode(AnalogSafetyPin pin, uint8_t pin_mode) {
  int pin_num = static_cast<int>(pin);
  pinMode(pin_num, pin_mode);
}

void pinMode(AnalogSafetyPin pin, uint8_t pin_mode) {
  int pin_num = static_cast<int>(pin);
  pinMode(pin_num, pin_mode);
}

float safetyPinAnalogRead(AnalogSafetyPin pin) {
  int pin_num = static_cast<int>(pin);
  float value = analogRead(pin_num);

  return value;
}

float analogRead(AnalogSafetyPin pin) {
  return safetyPinAnalogRead(pin);
}

/*
 * Digital
 */
 
void safetyPinMode(DigitalSafetyPin pin, uint8_t pin_mode) {
  int pin_num = static_cast<int>(pin);
  pinMode(pin_num, pin_mode);
}

void pinMode(DigitalSafetyPin pin, uint8_t pin_mode) {
  int pin_num = static_cast<int>(pin);
  pinMode(pin_num, pin_mode);
}

int safetyPinDigitalRead(DigitalSafetyPin pin) {
  int pin_num = static_cast<int>(pin);
  int value = digitalRead(pin_num);

  return value;
}

int digitalRead(DigitalSafetyPin pin) {
  return safetyPinDigitalRead(pin);
}
