#include "Controls.h"
#include <frc2/command/button/JoystickButton.h>


WinchControls Controls::Get_WinchControls()
{
  bool up = controller1.GetYButton();
  frc2::JoystickButton joystickButton{&controller1, static_cast<int>(frc::XboxController::Button::kB)};
  bool down = controller1.GetAButton();
  std::shared_ptr<Controls> controllerpointer = std::make_shared<Controls>(controller1);
  std::shared_ptr<SimpleClimber> climberpointer = std::make_shared<SimpleClimber>();
  joystickButton.WhenPressed(WinchCommand(controllerpointer, climberpointer));
};

