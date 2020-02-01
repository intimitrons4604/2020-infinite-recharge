#include "controls/Controls.h"

using Hand = frc::GenericHID::JoystickHand;

ArcadeControls Controls::getDriveControls()
{
  double controllerY = controller.GetY(Hand::kRightHand);
  double controllerX = controller.GetX(Hand::kLeftHand);
  double controllerTrigger = controller.GetTriggerAxis(Hand::kRightHand);

  return ArcadeControls{controllerY, controllerX, controllerTrigger};
}


