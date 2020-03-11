/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/VictorSP.h>
#include <rev/ColorSensorV3.h>
#include <frc/I2C.h>


class ColourWheel : public frc2::SubsystemBase {
 public:
  ColourWheel();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic();
  void Stop();
  void SpinC();
  void SpinCC();



 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
 frc::VictorSP colour_motor {8};
 rev::ColorSensorV3 colour_sensor {frc::I2C::Port::kOnboard};
  


};
