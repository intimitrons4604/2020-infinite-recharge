#include "Controls.h"

WinchControls Controls::Get_WinchControls()
{
  bool up = controller1.GetYButton();
  bool down = controller1.GetAButton();

  if (up && down)
  {
    return WinchControls::Stop;
  }
  else if (up)
  {
    return WinchControls::Up;
  }
  else if (down)
  {
    return WinchControls::Down;
  }
  else
  {
    return WinchControls::Stop;
  }
};