/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/SimpleClimber.h"

#include <frc/smartdashboard/SmartDashboard.h>

static constexpr double ArmSpeed = 0.5;
static constexpr double RoboSpeed = 1;

bool SimpleClimber::isLimitReached()
{
  if (limitSwitch.Get())
  {
    std::cout << "LimitSwitch pressed";
    frc::SmartDashboard::PutString("DB/String 1", "SwitchPressed");
    return true;
  }
  else
  {
    std::cout << "not pressed";
    frc::SmartDashboard::PutString("DB/String 1", "SwitchNotPressed");
    return false;
  }
}

void SimpleClimber::Stop()
{
  ClimbMotorArm.StopMotor();
  ClimbMotorRobot.StopMotor();
}

void SimpleClimber::Up()
{
  if (isLimitReached())
  {
    Stop();
  }
  else
  {
    ClimbMotorArm.Set(ArmSpeed);
    ClimbMotorRobot.Set(-RoboSpeed);
  }
}

void SimpleClimber::Down()
{
  ClimbMotorArm.Set(-ArmSpeed);
  ClimbMotorRobot.Set(RoboSpeed);
}
