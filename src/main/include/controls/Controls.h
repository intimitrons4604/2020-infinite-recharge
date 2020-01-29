#pragma once

#include "wiring.h"

#include <frc/XboxController.h>

#include "ArcadeControls.h"

class Controls{
  public:
    ArcadeControls getDriveControls();
  private:
    frc::XboxController controller{0}; 
};