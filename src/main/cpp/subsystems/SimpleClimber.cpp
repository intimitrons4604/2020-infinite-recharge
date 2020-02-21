/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/SimpleClimber.h"
#include "subsystems/LimitSwitch.h"
#include <frc/smartdashboard/SmartDashboard.h>


static constexpr double ArmSpeed = 0.5;
static constexpr double RoboSpeed = 1;
SimpleClimber::SimpleClimber() {
  limitSwitch = new frc::DigitalInput(4);
}

void SimpleClimber::Stop(){

  ClimbMotorArm.StopMotor();
  ClimbMotorRobot.StopMotor();
}

void SimpleClimber::Up(){
//print out working for testing
std::cerr<< "cout works!";
frc::SmartDashboard::PutString("DB/String 0","Up");

  //old code
  ClimbMotorArm.Set(ArmSpeed);
  ClimbMotorRobot.Set(-RoboSpeed);


 EncoderArm.GetDistance();
 EncoderRobot.GetDistance();

  //test code
  if(EncoderArm.GetDistance()>=5||EncoderRobot.GetDistance()<=-5){

  ClimbMotorArm.StopMotor();

  }
  else
  {
    /* code */

    ClimbMotorArm.Set(ArmSpeed); 
  }
  

}

void SimpleClimber::Down(){
//printing out "down" for testing
frc::SmartDashboard::PutString("DB/String 0","Down");
frc::SmartDashboard::PutString("DB/String 1","SmartDashboardWorks");

  ClimbMotorArm.Set(-ArmSpeed);
  ClimbMotorRobot.Set(RoboSpeed);

  EncoderArm.GetDistance();
 EncoderRobot.GetDistance();

  //test code
  if(EncoderArm.GetDistance()>=-5||EncoderRobot.GetDistance()<=5){

  ClimbMotorArm.StopMotor();

  }
 /* else
  {
     code 

    ClimbMotorArm.Set(ArmSpeed); 
  }
  */



}

void SimpleClimber::Periodic() {
  // Implementation of subsystem periodic method goes here.
}
