#pragma once

#include "wiring.h"

#include <frc/XboxController.h>

#include "ArcadeControls.h"

enum class ColourControls
{
  SpinC,
  SpinCC,
  Stop
};

class Controls{
  public:
    ArcadeControls getDriveControls();
    ColourControls getColourControls();
  private:
    frc::XboxController controller{controller::main_controller}; 
};

