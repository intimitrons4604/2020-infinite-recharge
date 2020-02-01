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


class DriveTrain : public frc2::Subsystem
{
  public:
    //void TankDrive(double leftSpeed, double righSpeed);

    //void KinematicsDrive(double xSpeed, double zRotation, units::meter_t trackWidth, bool isQuickTurn);

    //void OdometryDrive(double xSpeed, double zRotation, units::meter_t x, units::meter_t y);

    void ArcadeDrive(ArcadeControls controls);

    void Stop();

   private: 
    frc::Talon left_front{4};
    frc::Talon left_back{3};
    frc::SpeedControllerGroup left_motors{left_front, left_back};
    
    frc::Talon right_front{1};
    frc::Talon right_back{2};
    frc::SpeedControllerGroup right_motors{right_front, right_back};

    frc::DifferentialDrive drive_motors{left_motors, right_motors};

};
