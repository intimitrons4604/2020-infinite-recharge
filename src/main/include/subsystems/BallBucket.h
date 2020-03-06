#pragma once 

#include <frc2/command/Subsystem.h>
#include <frc/Servo.h>
#include "wiring.h"

class BallBucket : public frc2::Subsystem
{
    public:

    BallBucket();
    void SetPosition(double position);
 

    private:

    frc::Servo door_left{bucket::door_left};
    frc::Servo door_right{bucket::door_right};
   

};