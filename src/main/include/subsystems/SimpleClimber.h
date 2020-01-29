#pragma once

#include <frc/SpeedControllerGroup.h>
#include <frc/Talon.h>
#include <frc2/command/SubsystemBase.h>

class SimpleClimber : public frc2::SubsystemBase
{
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
