/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/ColourWheelCommand.h"


ColourWheelCommand::ColourWheelCommand(std::shared_ptr<Controls> controls, std::shared_ptr<ColourWheel> colourwheel)
    : controls(controls), colourwheel(colourwheel) {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ColourWheelCommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ColourWheelCommand::Execute() {}

// Called once the command ends or is interrupted.
void ColourWheelCommand::End(bool interrupted) 
{
  (void) interrupted;
}

// Returns true when the command should end.
bool ColourWheelCommand::IsFinished() { return false; }
