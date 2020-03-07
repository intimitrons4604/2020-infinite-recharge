#include "controls/Controls.h"

using Hand = frc::GenericHID::JoystickHand;

ArcadeControls Controls::getDriveControls()
{
  double controllerY = controller.GetY(Hand::kLeftHand) * -1;
  double controllerX = controller.GetX(Hand::kRightHand);
  double controllerTrigger = controller.GetTriggerAxis(Hand::kRightHand);

  return ArcadeControls{controllerY, controllerX, controllerTrigger};
}

WinchControls Controls::Get_WinchControls()
{
  bool up = controller.GetYButton();
  bool down = controller.GetAButton();
  if (down && up)
  {
    return WinchControls::Stop;
  }
  if (up)
  {
    return WinchControls::Up;
  }
  if (down)
  {
    return WinchControls::Down;
  }
  else
  {
    return WinchControls::Stop;
  }
}