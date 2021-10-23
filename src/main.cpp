#include <Arduino.h>

#include "robot.h"
#include "sonar.h"

#define L_DIR_PIN 4
#define L_SPEED_PIN 5
#define R_DIR_PIN 7
#define R_SPEED_PIN 6

#define TRIG_PIN 8
#define ECHO_PIN 9

Robot robot(L_DIR_PIN, L_SPEED_PIN, R_DIR_PIN, R_SPEED_PIN);
Sonar sonar(TRIG_PIN, ECHO_PIN);

void setup() {
  robot.setSpeed(100, 100);
}

void loop() {
  int dist = sonar.getDist();

  Serial.print(dist); 
  Serial.println(" cm");

  if(dist < 10) {
    robot.moveBackward();
  } else {
    robot.moveForward();
  }
  
  delay(100);
}