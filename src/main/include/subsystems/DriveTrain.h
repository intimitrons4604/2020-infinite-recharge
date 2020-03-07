#pragma once

#include <ctre/phoenix/motorcontrol/can/WPI_VictorSPX.h>

#include <frc/ADXRS450_Gyro.h>
#include <frc/Encoder.h>
#include <frc/SPI.h>
#include <frc/SpeedControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/geometry/Pose2d.h>
#include <frc/geometry/Rotation2d.h>
#include <frc/kinematics/DifferentialDriveKinematics.h>
#include <frc/kinematics/DifferentialDriveOdometry.h>
#include <frc2/command/Subsystem.h>
#include <units/units.h>

#include "controls/ArcadeControls.h"
#include "wiring.h"

class DriveTrain : public frc2::Subsystem
{
public:

  void KinematicsDrive(double xSpeed, double zRotation, units::meter_t trackWidth, bool isQuickTurn);

  void OdometryDrive(double xSpeed, double zRotation, units::meter_t x, units::meter_t y);

  void ArcadeDrive(ArcadeControls controls);
  void Stop();

  void Periodic() override;

private:
  ctre::phoenix::motorcontrol::can::WPI_VictorSPX left_front{CAN::left_front};
  ctre::phoenix::motorcontrol::can::WPI_VictorSPX left_back{CAN::left_back};
  frc::SpeedControllerGroup left_motors{left_front, left_back};

  ctre::phoenix::motorcontrol::can::WPI_VictorSPX right_front{CAN::right_front};
  ctre::phoenix::motorcontrol::can::WPI_VictorSPX right_back{CAN::right_back};
  frc::SpeedControllerGroup right_motors{right_front, right_back};

  frc::DifferentialDrive drive_motors{left_motors, right_motors};

  // odometry encoders & gyro
  frc::Encoder drive_encoder{7, 8, false, frc::Encoder::EncodingType::k4X};
  frc::Encoder drive_encoder2{9, 0, false, frc::Encoder::EncodingType::k4X};

  frc::ADXRS450_Gyro drive_gyro{frc::SPI::Port::kOnboardCS1};

  frc::DifferentialDriveOdometry m_odometry{frc::Rotation2d{0_deg}};
  frc::Pose2d drive_pose{5_m, 13.5_m, 0_rad};

  //
};
