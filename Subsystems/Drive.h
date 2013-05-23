#ifndef DRIVE_H
#define DRIVE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../WPILibExtensions/WPILibExtensions.h"
class Drive : public Subsystem{
public:
	Drive(SmartCANJaguar* leftBack, SmartCANJaguar* leftFront, SmartCANJaguar* rightBack, SmartCANJaguar* rightFront);
private:
	SmartCANJaguar* leftBack;
	SmartCANJaguar* leftFront;
	SmartCANJaguar* rightBack;
	SmartCANJaguar* rightFront;
};
#endif

