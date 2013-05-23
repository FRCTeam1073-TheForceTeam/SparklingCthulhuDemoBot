#ifndef OI_H
#define OI_H
#include "WPILib.h"
#include "WPILibExtensions/WPILibExtensions.h"
class OI {
private:
	SmartJoystick* driveStick;
	SmartJoystick* operatorStick;
public:
	OI();
	SmartJoystick* GetDriveStick();
	SmartJoystick* GetOperatorStick();
};
#endif
