#include <Arduino.h>

#include "robot.h"

Robot::Robot(int lDirPin, int lSpeedPin, int rDirPin, int rSpeedPin) {
  this->lDirPin = lDirPin;
	this->lSpeedPin = lSpeedPin;
	this->rDirPin = rDirPin;
	this->rSpeedPin = rSpeedPin;

	init();
}

void Robot::init() {
	pinMode(this->lDirPin, OUTPUT);
	pinMode(this->lSpeedPin, OUTPUT);
	pinMode(this->rDirPin, OUTPUT);
	pinMode(this->rSpeedPin, OUTPUT);

	stop();
}

void Robot::stop() {
	analogWrite(this->lSpeedPin, 0);
	analogWrite(this->rSpeedPin, 0);
}

void Robot::move() {
	analogWrite(this->lSpeedPin, this->speed);
}

void Robot::setSpeed(int speed) {
	this->lSpeed = this->rSpeed = speed;
}

void Robot::setSpeed(int lSpeed, int rSpeed) {
	this->lSpeed = lSpeed;
	this->rSpeed = rSpeed;
}

void Robot::moveForward() {
	digitalWrite(this->lDirPin, 1);
	digitalWrite(this->rDirPin, 1);
	move();
}

void Robot::moveBackward() {
	digitalWrite(this->lDirPin, 0);
	digitalWrite(this->rDirPin, 0);
	move();
}

void Robot::turnLeft() {
	digitalWrite(this->lDirPin, 0);
	digitalWrite(this->rDirPin, 1);
	move();
}

void Robot::turnRight() {
	digitalWrite(this->lDirPin, 1);
	digitalWrite(this->rDirPin, 0);
	move();
}