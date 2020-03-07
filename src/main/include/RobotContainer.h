#pragma once

#include <memory>

#include <frc2/command/Command.h>
#include <frc2/command/CommandBase.h>

#include "commands/DriveTrainCommand.h"
#include "commands/WinchCommand.h"
#include "controls/Controls.h"
#include "subsystems/DriveTrain.h"
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

  Controls m_controls;

  DriveTrain m_drivetrain;
  DriveTrainCommand m_drivecommand{&m_drivetrain, &m_controls};

  SimpleClimber m_winchsubsystem;
  WinchCommand m_winchcommand {&m_controls, &m_winchsubsystem};


  void ConfigureButtonBindings();
};
