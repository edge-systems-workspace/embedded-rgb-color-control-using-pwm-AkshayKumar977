#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author AKSHAY KUMAR
 * @date 2026-01-22
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

  int redPin = 9;
 // Define RED pin (Use 9)

 int greenPin = 10;
 // Define GREEN pin (Use 10)

 int bluePin = 11;
 // Define BLUE pin (Use 11)

void setup() {

    // T
    // Initialize Serial communication (9600 baud)

    // TODO 5:
    // Configure RGB pins as OUTPUT

    // TODO 6:
    // Print initialization message
}

void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)

    // TODO 8:
    // Turn OFF red

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()

    // TODO 10:
    // Set GREEN brightness using analogWrite()

    // TODO 11:
    // Set BLUE brightness using analogWrite()

    // TODO 12:
    // Add delay for visible transition
}
