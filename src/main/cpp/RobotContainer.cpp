#include "RobotContainer.h"

RobotContainer::RobotContainer()
{
  m_drivetrain.SetDefaultCommand(m_drivecommand);

  m_winchsubsystem.SetDefaultCommand(m_winchcommand);

  // Configure the button bindings
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings()
{
  // Configure your button bindings here
}

frc2::Command* RobotContainer::GetAutonomousCommand()
{
  return nullptr;
}
