/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "commands/DriveTrainCommand.h"

#include "controls/Controls.h"

DriveTrainCommand::DriveTrainCommand(DriveTrain* aSubsystem, Controls* aControls)
    : m_subsystem{aSubsystem}, m_controls{aControls}
{
  AddRequirements({aSubsystem});
}

void DriveTrainCommand::Initialize()
{

}

void DriveTrainCommand::Execute()
{
  m_subsystem->ArcadeDrive(m_controls->getDriveControls());
}

void DriveTrainCommand::End(bool interrupted)
{
  (void) interrupted;
}

bool DriveTrainCommand::IsFinished()
{
return false;
}