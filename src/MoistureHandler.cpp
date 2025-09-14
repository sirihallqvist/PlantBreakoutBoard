#include "MoistureHandler.h"
#include <Arduino.h>
// #include <iostream>

#include "constants.h"

MoistureHandler::MoistureHandler(int analogPin, int threshold)
    : _pin(analogPin), _threshold(threshold), _lastValue(0) {}

MoistureHandler::~MoistureHandler(){}

int MoistureHandler::readMoistureSensor() {
    _lastValue = analogRead(_pin);
    // std::cout << "Here is the value from the moisture sensor: " << _lastValue << std::endl;
    Serial.println("Here is the value from the moisture sensor: ");
    Serial.println(_lastValue);
    return _lastValue;
}

bool MoistureHandler::isTooDry() {
    return _lastValue < _threshold;
}