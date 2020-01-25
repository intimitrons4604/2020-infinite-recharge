/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

static constexpr double kSpeed = 1;
#include "subsystems/SimpleClimber.h"

SimpleClimber::SimpleClimber() {
  ClimbMotors.SetInverted(false);
}

void SimpleClimber::Stop(){

  ClimbMotors.StopMotor();
}

void SimpleClimber::Up(){

  ClimbMotors.Set(kSpeed);
}

void SimpleClimber::Down(){

  ClimbMotors.Set(-kSpeed);

}





void SimpleClimber::Periodic() {
  // Implementation of subsystem periodic method goes here.
}
