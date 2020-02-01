#include "subsystems/DriveTrain.h"


static constexpr double kSpeedLimit = 0.5;
//kSpeedLimit should be a positive number lower than 1



void DriveTrain::ArcadeDrive(ArcadeControls controls)
{
    double xSpeedLimited = 0;
    double zSpeedLimited = 0;
    if (controls.isTurbo())
    {
        xSpeedLimited = 0;
        zSpeedLimited = 0;
    }
    else
    //xSpeedLimit and zSpeedLimit should be between the values -1.0 and 1.0
    {
        xSpeedLimited = controls.getXSpeed() * kSpeedLimit;
        zSpeedLimited = controls.getZRotation() * kSpeedLimit;
    } 

   drive_motors.ArcadeDrive(xSpeedLimited, zSpeedLimited, false);
}

void DriveTrain::Stop()
{
    double xSpeedLimited = 0;
    double zSpeedLimited = 0;
    bool squareInputs = false;
    drive_motors.ArcadeDrive(xSpeedLimited, zSpeedLimited, squareInputs);
}