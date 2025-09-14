#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace config {
    // MOISTURE PINS
    const int MOISTURE_SENSOR_PIN_1 = A0;
    
    // MOTOR PINS
    const int MOTOR_PUMP_PIN_1 = D2;

    // WATER LEVEL PIN
    const int WATER_LEVEL_PIN = A7;
    
    // THRESHOLDS
    const int MOISTURE_THRESHOLD = 600; // Needs to be adjusted
    
    // TIMINGS
    const unsigned long WATER_DURATION_MS = 3000; // 3 seconds
    // constexpr unsigned long CHECK_INTERVAL_MS = 4UL * 60 * 60 * 1000; // 4 hours
    const unsigned long CHECK_INTERVAL_MS = 1000; // 1 seconds
    
    // BAUDRATE
    const int SERIAL_COMMUNICATION_BAUDRATE = 9600;
}

#endif // CONSTANTS_H