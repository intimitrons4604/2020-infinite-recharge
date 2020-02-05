#include "commands/WinchCommand.h" 
#include "subsystems/SimpleClimber.h"

WinchCommand::WinchCommand(std::shared_ptr<Controls> controls, std::shared_ptr<SimpleClimber> simpleclimber)
    : controls(controls), simpleclimber(simpleclimber)
{
  AddRequirements(simpleclimber.get());
}

void WinchCommand::Initialize()
{

//Encoder1.getDistance(0)

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

  /*if(Encoder1.getDistance()>=5)
  {

  ClimbMotorArm.StopMotor();
  }*/
}

void WinchCommand::End(bool interrupted)
{
  simpleclimber->Stop();
}
