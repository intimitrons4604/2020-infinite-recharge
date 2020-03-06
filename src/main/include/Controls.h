#pragma once

#include <frc/XboxController.h>

#include "subsystems/WinchControls.h"

class Controls
{
public:
  WinchControls Get_WinchControls();

private:
  frc::XboxController controller1{0};
};