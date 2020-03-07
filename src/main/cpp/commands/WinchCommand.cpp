#include "commands/WinchCommand.h"

#include <frc/smartdashboard/SmartDashboard.h>

#include "subsystems/LimitSwitch.h"
#include "subsystems/SimpleClimber.h"
WinchCommand::WinchCommand(Controls* controls, SimpleClimber* simpleclimber)
    : controls(controls), simpleclimber(simpleclimber)
{
  AddRequirements(simpleclimber);
}

void WinchCommand::Initialize()
{
  // Encoder1.getDistance(0)
}

bool WinchCommand::IsFinished()
{
  if (simpleclimber->isLimitReached())
  {
    frc::SmartDashboard::PutString("DB/String 0", "IsFinishedReached");
    return true;
  }
  return false;
}

void WinchCommand::Execute()
{
  auto control = controls->Get_WinchControls();
  switch (control)
  {
    case WinchControls::Stop:
      simpleclimber->Stop();
      frc::SmartDashboard::PutString("DB/String 2", "Stop");
      break;

    case WinchControls::Up:
      if (simpleclimber->isLimitReached())
      {
        simpleclimber->Stop();
        frc::SmartDashboard::PutString("DB/String 2", "UpStopped");
      }
      else
      {
        simpleclimber->Up();
        frc::SmartDashboard::PutString("DB/String 2", "Up");
      }
      break;

    case WinchControls::Down:
      simpleclimber->Down();
      frc::SmartDashboard::PutString("DB/String 2", "Down");
      break;

    default:
      simpleclimber->Stop();
      frc::SmartDashboard::PutString("DB/String 2", "Defualt");
      break;
  }
}

/*bool WinchCommand::IsFinished()
{
  if(simpleclimber->isLimitReached())
  {
frc::SmartDashboard::PutString("DB/String 0","IsFinishedReached");
   return true;

  }
  return false;
}*/

void WinchCommand::End(bool interrupted)
{
  (void) interrupted;

  simpleclimber->Stop();
}
