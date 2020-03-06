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

enum class BallBucketControls 
{
  

}

class Controls{
  public:
    ArcadeControls getDriveControls();
    ColourControls getColourControls();
    BallBucketControls getBallBucketControls();
  private:
    frc::XboxController controller{controller::main_controller}; 
};

