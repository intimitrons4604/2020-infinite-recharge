static constexpr double kSpeed = 0.5;
#include "subsystems/SimpleClimber.h"

SimpleClimber::SimpleClimber()
{
  ClimbMotors.SetInverted(false);
}

void SimpleClimber::Stop()
{
  ClimbMotors.StopMotor();
}

void SimpleClimber::Up()
{
  ClimbMotors.Set(kSpeed);
}

void SimpleClimber::Down()
{
  ClimbMotors.Set(-kSpeed);
}

void SimpleClimber::Periodic()
{
  // Implementation of subsystem periodic method goes here.
}
