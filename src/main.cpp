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

    Serial.begin(9600);
    // Initialize Serial communication (9600 baud)

    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    // Configure RGB pins as OUTPUT

    Serial.println("RGB LED Control Initialized");
    // Print initialization message
}

void loop() {

    // -------- DIGITAL MODE --------

    digitalWrite(redPin,HIGH);
    // Turn ON red (digital HIGH)

    digitalWrite(redPin,LOW);
    // Turn OFF red

    // -------- ANALOG (PWM) MODE --------

    analogWrite(redPin,125);
    // Set RED brightness using analogWrite()

    analogWrite(greenPin,255);
    // Set GREEN brightness using analogWrite()

    analogWrite(bluePin,211);
    // Set BLUE brightness using analogWrite()

    delay(1000);
    // Add delay for visible transition
}
