/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/AutonomousCommand.h"

#include <frc/Encoder.h>

AutonomousCommand::AutonomousCommand(DriveTrain* drivetrain)
{
  this->drivetrain = drivetrain;
}

// Called when the command is initially scheduled.
void AutonomousCommand::Initialize()
{
  //intentionally empty
}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand::Execute()
{
  drivetrain->ArcadeDrive(ArcadeControls(1, 0, true));
}

void AutonomousCommand::End(bool interrupted)
{
  (void)interrupted;
  
  drivetrain->Stop();
}

// Returns true when the command should end.
bool AutonomousCommand::IsFinished()
{
  auto distance = drivetrain->GetEncoderDistance();
  return distance.first > 1 && distance.second > 1;

}
