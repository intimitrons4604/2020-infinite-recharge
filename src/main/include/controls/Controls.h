#pragma once

#include <frc/XboxController.h>

#include "controls/ArcadeControls.h"
#include "controls/ColourControls.h"
#include "controls/WinchControls.h"
#include "wiring.h"

class Controls
{
public:
  ArcadeControls getDriveControls();
  WinchControls Get_WinchControls();
  ColourControls getColourControls();

private:
  frc::XboxController controller{controller::main_controller};
};
