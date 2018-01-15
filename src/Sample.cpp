/*
 * Sample.cpp
 */
#include <Arduino.h>
#include "Sample.h"

Sample::Sample(uint8_t pin) {
  _pin = pin;
  pinMode(pin, OUTPUT);
}

Sample::on() {
  digitalWrite(_pin, HIGH);
}

Sample::off() {
  digitalWrite(_pin, LOW);
}

