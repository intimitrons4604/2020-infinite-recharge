/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

static constexpr double kSpeed = 0.5;
#include "subsystems/ColourWheel.h"
#include <iostream>
#include <frc/util/Color.h>
ColourWheel::ColourWheel() {

}

// This method will be called once per scheduler run
void ColourWheel::Periodic() {

    frc::Color colour = colour_sensor.GetColor();


    std::cout << colour.red <<" " << colour.green <<" "<< colour.blue <<"\n";
}

void ColourWheel::SpinC() {
    if (colour_motor.Get())
    {
        Stop();
    }
    else
    {
        colour_motor.Set(kSpeed);
    }
    
}

void ColourWheel::SpinCC() {
    if (colour_motor.Get())
    {
        Stop();
    }
    else
    {
        colour_motor.Set(-kSpeed);
    }
  
}


void ColourWheel::Stop(){

    colour_motor.StopMotor();
}


