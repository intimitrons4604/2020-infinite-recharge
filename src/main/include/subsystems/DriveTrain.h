#pragma once

#include <frc/Talon.h> 
#include <frc/drive/DifferentialDrive.h>
#include <frc2/command/Subsystem.h>
#include <frc/kinematics/DifferentialDriveKinematics.h>
#include <frc/kinematics/DifferentialDriveOdometry.h>
#include <units/units.h>
#include <frc/geometry/Pose2d.h>

class DriveTrain : public frc2::Subsystem
{
  public:
    DriveTrain();
    void TankDrive(double leftSpeed, double righSpeed);

    void KinematicsDrive(double xSpeed, double zRotation, units::meter_t trackWidth, bool isQuickTurn);

    void OdometryDrive(double xSeed, double zRotation, units::meter_t x, units::meter_t y);

    void Stop();

   private: 
    frc::Talon left_front{PWM::left_front};
    frc::Talon left_back{PWM::left_back};
    frc::SpeedControllerGroup left_motors;
    
    frc::Talon right_front{PWM::right_front};
    frc::Talon right_back{PWM::right_back};

};
