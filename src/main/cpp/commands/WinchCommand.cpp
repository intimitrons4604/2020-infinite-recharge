#include "commands/WinchCommand.h" 
#include "subsystems/SimpleClimber.h"
#include "subsystems/LimitSwitch.h"
#include <frc/smartdashboard/SmartDashboard.h>
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
      frc::SmartDashboard::PutString("DB/String 2","Stop"); 
      break;
     

    case WinchControls::Up:
      simpleclimber->Up();
      frc::SmartDashboard::PutString("DB/String 2","Up");
      break;
      
    case WinchControls::Down:
      simpleclimber->Down();
      frc::SmartDashboard::PutString("DB/String 2","Down");
      break;
      
    default:
      simpleclimber->Stop();
      frc::SmartDashboard::PutString("DB/String 2","Defualt");
      break;
  }
}

bool WinchCommand::IsFinished()
{
  if(simpleclimber->isLimitReached())
  {
frc::SmartDashboard::PutString("DB/String 0","IsFinishedReached");
   return true;

  } 
  return false;
}

void WinchCommand::End(bool interrupted)
{
  simpleclimber->Stop();
}
