#include "Drive.h"
Drive::Drive(SmartCANJaguar* leftBack, SmartCANJaguar* leftFront,
		SmartCANJaguar* rightBack, SmartCANJaguar* rightFront) : Subsystem("Drive"){
	this->leftBack = leftBack;
	this->leftFront = leftFront;
	this->rightBack = rightBack;
	this->rightFront = rightFront;
}

