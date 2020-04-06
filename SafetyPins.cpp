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
