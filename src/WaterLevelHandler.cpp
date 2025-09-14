#include "WaterLevelHandler.h"

WaterLevelSensor::WaterLevelSensor(int analogPin)
    : _pin(analogPin) {}

int WaterLevelSensor::readWaterLevelSensor() {
    System.println("Reading Water Level Sensor...");
    // If connection, state should be true
    // If no connection, state should be false, and the pump should be unavailable
    return _state;
}

class WaterLevelSensor {
    public:
        WaterLevelSensor(int analogPin);

        int readWaterLevelSensor();
    private:
        bool _state;
}