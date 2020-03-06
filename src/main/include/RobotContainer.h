#pragma once

#include <memory>

#include <frc2/command/Command.h>
#include <frc2/command/CommandBase.h>

#include "Controls.h"
#include "commands/WinchCommand.h"
#include "subsystems/SimpleClimber.h"

/**
 * This class is where the bulk of the robot should be declared.  Since
 * Command-based is a "declarative" paradigm, very little robot logic should
 * actually be handled in the {@link Robot} periodic methods (other than the
 * scheduler calls).  Instead, the structure of the robot (including subsystems,
 * commands, and button mappings) should be declared here.
 */
class RobotContainer
{
public:
  RobotContainer();

  frc2::Command *GetAutonomousCommand();

private:
  // The robot's subsystems and commands are defined here...
  std::shared_ptr<SimpleClimber> m_subsystem;
  std::shared_ptr<WinchCommand> m_command;
  std::shared_ptr<Controls> m_controls;

  void ConfigureButtonBindings();
};
