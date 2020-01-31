/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DriveTrainCommand.h"
#include "controls/Controls.h"

DriveTrainCommand::DriveTrainCommand(DriveTrain* aSubsystem,
                           std::function<double()> aForward,
                           std::function<double()> aRotation,
                           ArcadeControls* aArcadecontrols)
    : m_subsystem{aSubsystem}, m_forward{aForward}, m_rotation{aRotation}, m_arcadecontrols{aArcadeControls} {
  
  AddRequirements({aSubsystem});

}

void DriveTrainCommand::Execute() {
  m_subsystem->ArcadeDrive(arcadecontrols);
}


