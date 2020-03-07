/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc/DigitalInput.h>
#include <frc/VictorSP.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <frc2/command/SubsystemBase.h>

#include "wiring.h"

class SimpleClimber : public frc2::SubsystemBase
{
public:
  void Up();
  void Down();
  void Stop();

private:
  frc::VictorSP ClimbMotorArm{PWM::arm_motor};
  frc::VictorSP ClimbMotorRobot{PWM::robot_motor};
  frc::DigitalInput limitSwitch{DIO::winch_switch};
  bool isLimitReached();

  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
