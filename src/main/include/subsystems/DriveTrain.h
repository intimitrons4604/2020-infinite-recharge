#pragma once

#include <frc/Talon.h> 
#include <frc/drive/DifferentialDrive.h>
#include <frc2/command/Subsystem.h>
#include <frc/kinematics/DifferentialDriveKinematics.h>
#include <frc/kinematics/DifferentialDriveOdometry.h>
#include <units/units.h>
#include <frc/geometry/Pose2d.h>
#include <frc/SpeedControllerGroup.h>
#include "controls/ArcadeControls.h"
#include "wiring.h"


class DriveTrain : public frc2::Subsystem
{
  public:
    //void TankDrive(double leftSpeed, double righSpeed);

    //void KinematicsDrive(double xSpeed, double zRotation, units::meter_t trackWidth, bool isQuickTurn);

    //void OdometryDrive(double xSpeed, double zRotation, units::meter_t x, units::meter_t y);

    void ArcadeDrive(ArcadeControls controls);

    void Stop();

   private: 
    frc::Talon left_front{PWM::left_front};
    frc::Talon left_back{PWM::left_back};
    frc::SpeedControllerGroup left_motors;
    
    frc::Talon right_front{PWM::right_front};
    frc::Talon right_back{PWM::right_back};
    frc::SpeedControllerGroup right_motors;

    frc::DifferentialDrive drive_motors{left_motors, right_motors};

};
