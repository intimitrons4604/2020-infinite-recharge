#include "commands/WinchCommand.h"

WinchCommand::WinchCommand(std::shared_ptr<Controls> controls, std::shared_ptr<SimpleClimber> simpleclimber)
    : controls(controls), simpleclimber(simpleclimber)
{
  AddRequirements(simpleclimber.get());
}

void WinchCommand::Initialize()
{
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

bool WinchCommand::IsFinished()
{
  return false;
}

void WinchCommand::End(bool interrupted)
{
  simpleclimber->Stop();
}
