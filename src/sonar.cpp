#include <Arduino.h>
#include "sonar.h"
	
Sonar::Sonar(int trigPin, int echoPin) {
	this->trigPin = trigPin;
	this->echoPin = echoPin;

	init();
}

void Sonar::init() {
	pinMode(this->trigPin, OUTPUT);
	pinMode(this->echoPin, INPUT);
}

int Sonar::getDist() {
	int duration, distance;

  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW); 
	
  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58;

  return distance;
}
	
	