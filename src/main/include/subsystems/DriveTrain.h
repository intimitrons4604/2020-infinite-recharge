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
#include <frc/Encoder.h>
#include <frc/ADXRS450_Gyro.h>
#include <frc/SPI.h>
#include <frc/geometry/Pose2d.h>
#include <frc/geometry/Rotation2d.h>






class DriveTrain : public frc2::Subsystem
{
  public:
    //void TankDrive(double leftSpeed, double righSpeed);

    void KinematicsDrive(double xSpeed, double zRotation, units::meter_t trackWidth, bool isQuickTurn);

    void OdometryDrive(double xSpeed, double zRotation, units::meter_t x, units::meter_t y);

    void ArcadeDrive(ArcadeControls controls);

    void Stop();
    
    void Periodic() override;


   private: 

    frc::Talon left_front{PWM::left_front};
    frc::Talon left_back{PWM::left_back};
    frc::SpeedControllerGroup left_motors{left_front, left_back};
    
    frc::Talon right_front{PWM::right_front};
    frc::Talon right_back{PWM::right_back};
    frc::SpeedControllerGroup right_motors{right_front, right_back};

    frc::DifferentialDrive drive_motors{left_motors, right_motors};

    //odometry encoders & gyro
    frc::Encoder drive_encoder{7, 8, false, frc::Encoder::EncodingType::k4X};
    frc::Encoder drive_encoder2{9, 0, false, frc::Encoder::EncodingType::k4X};
  
    frc::ADXRS450_Gyro drive_gyro{frc::SPI::Port::kOnboardCS1};

    frc::DifferentialDriveOdometry m_odometry{frc::Rotation2d()};
    frc::Pose2d drive_pose{5_m, 13.5_m, 0_rad};

    //

    

};