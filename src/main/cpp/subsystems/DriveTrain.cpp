#include "subsystems/DriveTrain.h"


static constexpr double kSpeedLimit = 0.5;






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