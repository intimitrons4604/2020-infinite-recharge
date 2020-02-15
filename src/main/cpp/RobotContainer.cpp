#include "RobotContainer.h"

RobotContainer::RobotContainer() 
 {
  // Initialize all of your commands and subsystems here

  // Configure the button bindings
  ConfigureButtonBindings();

  m_drivetrain.SetDefaultCommand(m_drivecommand);
}

void RobotContainer::ConfigureButtonBindings()
{
  // Configure your button bindings here
}

frc2::Command* RobotContainer::GetAutonomousCommand()
{
  // An example command will be run in autonomous
  return &m_autocommand;
  
}
