// #include "src/thread.h" // "/src/thread.h"
// #include "rtos/ThisThread.h"
// #include "mbed.h"
#include "src/constants.h"
#include "src/MoistureHandler.h"
#include "src/PumpHandler.h"

// Create global objects
MoistureHandler moistureSensor(config::MOISTURE_SENSOR_PIN_1, config::MOISTURE_THRESHOLD);
PumpHandler pumpHandler(config::MOTOR_PUMP_PIN_1);

unsigned long lastCheckTime = 0;

void setup() {
  Serial.begin(config::SERIAL_COMMUNICATION_BAUDRATE);
  while(!Serial);
  Serial.println("Watering System Started.");
}

void loop(){
  unsigned long now = millis();

  if (now - lastCheckTime >= config::CHECK_INTERVAL_MS || lastCheckTime == 0) {
    lastCheckTime = now;

    int moistureValue = moistureSensor.readMoistureSensor();
    Serial.print("Moisture reading: ");
    Serial.println(moistureValue);

    if (moistureSensor.isTooDry()) {
      Serial.println("Too dry! Watering...");
      pumpHandler.startPump();
      delay(1000);
      pumpHandler.stopPump();
      // pump.waterFor(config::WATER_DURATION_MS)
    } else {
      Serial.println("Moisture is fine.");
    }
  }
  delay(1000); // Prevent busy looping
}
