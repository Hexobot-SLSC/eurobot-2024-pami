#include <Arduino.h>
#include <Logging.h>
#include <Config.h>

#define MOTORS_PIN 2

void setup() {
  pinMode(MOTORS_PIN, OUTPUT);

  delay(START_DELAY);

  digitalWrite(MOTORS_PIN, HIGH);

  delay(TRAVEL_DURATION);

  digitalWrite(MOTORS_PIN, LOW);
}

void loop() {}