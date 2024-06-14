/*
    Project name : LED Chaser
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-led-chaser
*/

// Define the number of LEDs and their corresponding pins
const int numLEDs = 8;
const int ledPins[numLEDs] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // Initialize each LED pin as an output
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on each LED in sequence
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on the LED
    delay(100); // Wait for 100 milliseconds
    digitalWrite(ledPins[i], LOW); // Turn off the LED
  }

  // Turn off each LED in reverse sequence
  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH); // Turn on the LED
    delay(100); // Wait for 100 milliseconds
    digitalWrite(ledPins[i], LOW); // Turn off the LED
  }
}
