#pragma once
#include "Brick.h"

class Motor{
	Output port;
public:
	Motor(Output port);
	void stop();
	void brake();
	void run(uint8_t speed);
	void run_time(uint8_t speed, uint32_t time, Then then = Then::Hold);
	void run_angle(uint8_t speed, uint32_t angle, Then then = Then::Hold);
};