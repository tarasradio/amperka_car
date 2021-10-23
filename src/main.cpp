#include <Arduino.h>

#include "robot.h"

#define L_DIR_PIN 4
#define L_SPEED_PIN 5
#define R_DIR_PIN 7
#define R_SPEED_PIN 6

Robot robot(L_DIR_PIN, L_SPEED_PIN, R_DIR_PIN, R_SPEED_PIN);

void setup() {
  robot.setSpeed(100, 100);
}

void loop() {
  robot.moveForward();
  delay(1000);
  robot.stop();
  delay(1000);
}