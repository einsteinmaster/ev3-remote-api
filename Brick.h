#pragma once

#include "BrickDefs.h"
#include "HIDCon.h"
#include "Command.h"

class Brick{
	HIDCon con;
	uint16_t msg_cnt;
public:
	Brick();
	~Brick();
	bool Initialize(const char* path);
	bool Initialize() { return Initialize("/dev/hidraw0"); }
	void setMotorPower(Output motor,int8_t power);
};