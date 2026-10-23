#include <Arduino.h>

// Define both built-in LED pins
#define LED_YELLOW PF11 
#define LED_RED PF12    

void setup() {
  // Initialize both LED pins as outputs
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
  // Turn Yellow ON and Red OFF
  digitalWrite(LED_YELLOW, HIGH);
  digitalWrite(LED_RED, LOW);
  delay(500);                      // Wait 500 milliseconds

  // Turn Yellow OFF and Red ON
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_RED, HIGH);
  delay(500);                      // Wait 500 milliseconds
}