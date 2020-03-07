#include "controls/Controls.h"

using Hand = frc::GenericHID::JoystickHand;

ArcadeControls Controls::getDriveControls()
{
  double controllerY = controller.GetY(Hand::kLeftHand) * -1;
  double controllerX = controller.GetX(Hand::kRightHand);
  double controllerTrigger = controller.GetTriggerAxis(Hand::kRightHand);

  return ArcadeControls{controllerY, controllerX, controllerTrigger};
}
