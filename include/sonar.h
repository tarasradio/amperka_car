#ifndef SONAR_H
#define SONAR_H

class Sonar {
public:
	Sonar(int trigPin, int echoPin);
	int getDist();
private:
	void init();
	int trigPin, echoPin;
};

#endif // SONAR_H