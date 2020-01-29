#pragma once

#include <frc/XboxController.h>
#include "commands/WinchCommand.h"



enum class WinchControls
{
    Stop,
    Up,
    Down
};


class Controls
{
public:
WinchControls Get_WinchControls();

private:
frc::XboxController controller1{0};


};