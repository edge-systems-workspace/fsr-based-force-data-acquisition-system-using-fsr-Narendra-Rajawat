#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 */

// TODO 1:
// Define FSR analog pin (Use A0)
#define FSR_PIN A0

// TODO 2:
// Create variable to store sensor reading
// int fsrValue = 0;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    // Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    // Serial.println("FSR Force Measurement System Initialized");
}

void loop() {

    // TODO 5:
    // Read analog value from FSR
    // fsrValue = analogRead(FSR_PIN);

    // TODO 6:
    // Print raw ADC value
    // Serial.print("FSR Raw Value: ");
    // Serial.println(fsrValue);

    // TODO 7:
    // Apply simple threshold logic (detect pressure)
    // if (fsrValue > 100) {
    //
    //     // TODO 8:
    //     // Print pressure detection message
    //     Serial.println("Pressure Detected!");
    // } else {
    //     Serial.println("No Pressure");
    // }

    // TODO 9:
    // Add delay (1 second)
    // delay(1000);
}