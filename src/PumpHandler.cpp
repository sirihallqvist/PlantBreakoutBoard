#include "PumpHandler.h"
#include "constants.h"
// #include <iostream>

PumpHandler::PumpHandler(int digitalPin)
    : _pin(digitalPin) {}

void PumpHandler::startPump() {
    // std::cout << "Starting pump for " << config::WATER_DURATION_MS << " milliseconds" << std::endl;
    Serial.print("Starting pump for ");
    Serial.print(config::WATER_DURATION_MS);
    Serial.println(" milliseconds.");
    _state = true;
}

void PumpHandler::stopPump() {
    if(isRunning()){
        // std::cout << "Stopping pump" << std::endl;
        Serial.println("Stopping pump");
        _state = false;
    } else{
        // std::cout << "Pump is not running and therefore can't be stopped" << std::endl;
        Serial.println("Pump is not running and therefore can't be stopped");
    }
}

bool PumpHandler::isRunning(){
    return _state;
}

// Other functionalities to put it in state true (running) etc