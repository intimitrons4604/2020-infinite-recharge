#pragma once 

#include <frc2/command/Subsystem.h>
#include <frc/Servo.h>

class BallBucket : public frc2::Subsystem
{
    public:

    BallBucket();
    void SetPosition(double position);
 

    private:

    frc::Servo door;

};