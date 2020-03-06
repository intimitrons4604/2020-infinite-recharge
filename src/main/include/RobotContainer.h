#pragma once

#include <frc2/command/Command.h>

#include "subsystems/DriveTrain.h"
#include "commands/DriveTrainCommand.h"
#include "controls/Controls.h"
#include "commands/ColourWheelCommand.h"
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

  frc2::Command* GetAutonomousCommand();

private:
  // The robot's subsystems and commands are defined here...
  DriveTrain m_drivetrain; 
  DriveTrainCommand m_drivecommand{&m_drivetrain, &m_drivecontrols};
  Controls m_drivecontrols;
  ColourWheelCommand m_colourcommand{&controls, &colourwheel};

  void ConfigureButtonBindings();
};
