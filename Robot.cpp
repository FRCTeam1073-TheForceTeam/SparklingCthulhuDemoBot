#include "Robot.h"
OI* Robot::oi = 0;
void Robot::RobotInit() {
	RobotMap::init();
	oi = new OI();
	lw = LiveWindow::GetInstance();
	autonomousCommand = new AutonomousCommand();
  }
	
void Robot::AutonomousInit() {
	if (autonomousCommand != NULL)
		autonomousCommand->Start();
}
	
void Robot::AutonomousPeriodic() {
	Scheduler::GetInstance()->Run();
}
	
void Robot::TeleopInit() {
	autonomousCommand->Cancel();
}
	
void Robot::TeleopPeriodic() {
	if (autonomousCommand != NULL)
		Scheduler::GetInstance()->Run();
}
void Robot::TestPeriodic() {
	lw->Run();
}
START_ROBOT_CLASS(Robot);
