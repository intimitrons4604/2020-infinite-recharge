#pragma once

#include <frc/XboxController.h>

#include "ArcadeControls.h"
#include "controls/WinchControls.h"
#include "wiring.h"

class Controls
{
public:
  ArcadeControls getDriveControls();
  WinchControls Get_WinchControls();

private:
  frc::XboxController controller{controller::main_controller};
};
