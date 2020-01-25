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


class SimpleClimber : public frc2::SubsystemBase {
 public:
  SimpleClimber();

  void Up();
  void Down();
  void Stop();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */

  void Periodic() override;

 private:
  frc::Talon fifth_talon{5};
  frc::Talon sixth_talon{6};
  frc::SpeedControllerGroup ClimbMotors{fifth_talon, sixth_talon};
  

  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};