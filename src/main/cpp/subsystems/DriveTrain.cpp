#include "subsystems/DriveTrain.h"

static constexpr double kSpeedLimit = 0.5;
static const char* kSubSystemName = "DriveTrain";




void DriveTrain::ArcadeDrive(double xSpeed, double zRotation, bool squareInputs = true)
{
    double xSpeedLimit = 0;
    double zSpeedLImit = 0;
    if (squareInputs = true)
    {
        xSpeedLimit = 0;
        zSpeedLImit = 0;
    }
    if (squareInputs = false)
    {
        xSpeedLimit = xSpeed * kSpeedLimit;
        zSpeedLImit = zRotation * kSpeedLimit;
    } 

   drive_motors.ArcadeDrive(xSpeedLimit, zSpeedLimit, false);
}
