#ifndef ROBOT_H
#define ROBOT_H

class Robot {
public:
	Robot(int lDirPin, int lSpeedPin, int rDirPin, int rSpeedPin);
	void setSpeed(int speed);
	void setSpeed(int lSpeed, int rSpeed);
	void moveForward();
	void moveBackward();
	void turnLeft();
	void turnRight();
	void stop();
private:
	void init();
	void move();
  int lDirPin, lSpeedPin;
  int rDirPin, rSpeedPin;
	int speed;
	int lSpeed, rSpeed;
};

#endif // ROBOT_H