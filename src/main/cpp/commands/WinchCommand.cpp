#include "commands/WinchCommand.h"

#include <frc/smartdashboard/SmartDashboard.h>

#include "subsystems/SimpleClimber.h"
WinchCommand::WinchCommand(Controls* controls, SimpleClimber* simpleclimber)
    : controls(controls), simpleclimber(simpleclimber)
{
  AddRequirements(simpleclimber);
}

void WinchCommand::Initialize()
{
}

bool WinchCommand::IsFinished()
{
  return false;
}

void WinchCommand::Execute()
{
  auto control = controls->Get_WinchControls();
  switch (control)
  {
    case WinchControls::Stop:
      simpleclimber->Stop();
      break;

    case WinchControls::Up:
      simpleclimber->Up();
      break;

    case WinchControls::Down:
      simpleclimber->Down();
      break;

    default:
      simpleclimber->Stop();
      break;
  }
}

void WinchCommand::End(bool interrupted)
{
  (void) interrupted;

  simpleclimber->Stop();
}
