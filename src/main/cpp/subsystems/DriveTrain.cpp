#include "subsystems/DriveTrain.h"

static constexpr double kSpeedLimit = 0.5;






void DriveTrain::ArcadeDrive(double xSpeed, double zRotation, bool squareInputs)
{
    double xSpeedLimited = 0;
    double zSpeedLimited = 0;
    if (squareInputs)
    {
        xSpeedLimited = 0;
        zSpeedLimited = 0;
    }
    if (!squareInputs)
    {
        xSpeedLimited = xSpeed * kSpeedLimit;
        zSpeedLimited = zRotation * kSpeedLimit;
    } 

   drive_motors.ArcadeDrive(xSpeedLimited, zSpeedLimited, false);
}