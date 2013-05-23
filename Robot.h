#ifndef ROBOT_H
#define ROBOT_H
#include "WPILib.h"
#include "WPILibExtensions/WPILibExtensions.h"
#include "OI.h"
#include "Robotmap.h"
#include "Commands/AutonomousCommand.h"
class Robot : public IterativeRobot{
public:
	Robot();
	static OI *oi;
	virtual void RobotInit();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
	virtual void DisabledInit();
	LiveWindow *lw;
private:
	Command *autonomousCommand;
};
#endif
