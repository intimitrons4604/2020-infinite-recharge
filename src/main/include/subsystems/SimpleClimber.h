/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/Talon.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/Encoder.h>
#include <frc/DigitalInput.h>


class SimpleClimber : public frc2::SubsystemBase {
 public:
  SimpleClimber();

  void Up();
  void Down();
  void Stop();

  bool isLimitReached(){
    if (limitSwitch->Get())
    {
        return true;
    }
    else {
      return false;
    }
  }
  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */

  void Periodic() override;

 private:
  frc::Talon fifth_talon{5};
  frc::Talon sixth_talon{6};
  frc::SpeedControllerGroup ClimbMotorArm{fifth_talon};
  frc::SpeedControllerGroup ClimbMotorRobot{sixth_talon};
  frc::Encoder EncoderArm{0,1};
  frc::Encoder EncoderRobot{2,3};
  frc::DigitalInput* limitSwitch;

  
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  
};
