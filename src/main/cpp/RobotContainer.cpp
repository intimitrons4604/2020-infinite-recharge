#include "RobotContainer.h"

RobotContainer::RobotContainer() //: m_autonomousCommand(&m_subsystem)
{
  m_subsystem = std::make_unique<SimpleClimber>();
  m_controls = std::make_unique<Controls>();
  m_command = std::make_unique<WinchCommand>(m_controls, m_subsystem);
  // Initialize all of your commands and subsystems here

  m_subsystem->SetDefaultCommand(*m_command);

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
  // An example command will be run in autonomous
  // return &m_autonomousCommand;
}
