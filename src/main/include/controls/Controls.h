#pragma once

#include <frc/XboxController.h>

#include "ArcadeControls.h"
#include "wiring.h"

class Controls
{
public:
  ArcadeControls getDriveControls();

private:
  frc::XboxController controller{controller::main_controller};
};