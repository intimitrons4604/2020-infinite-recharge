/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/SimpleClimber.h"


static constexpr double ArmSpeed = 0.5;
static constexpr double RoboSpeed = 1;
SimpleClimber::SimpleClimber() {
  //ClimbMotors.SetInverted(false);
}

void SimpleClimber::Stop(){

  ClimbMotorArm.StopMotor();
  ClimbMotorRobot.StopMotor();
}

void SimpleClimber::Up(){
  //old code
  //ClimbMotorArm.Set(ArmSpeed);
  //ClimbMotorRobot.Set(-RoboSpeed);
 
  //test code
  if(Encoder1.getDistance()>=5){

  ClimbMotorArm.StopMotor();

  }
  else
  {
    /* code */
    ClimbMotorArm.Set(ArmSpeed); 
  }
  
}

void SimpleClimber::Down(){

  ClimbMotorArm.Set(-ArmSpeed);
  ClimbMotorRobot.Set(RoboSpeed);

}

void SimpleClimber::Periodic() {
  // Implementation of subsystem periodic method goes here.
}
