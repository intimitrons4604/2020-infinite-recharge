#include "controls/ArcadeControls.h"

#include <algorithm>

ArcadeControls::ArcadeControls(double xSpeed, double zRotation, bool turbo)
{
  this->xSpeed = std::clamp(xSpeed, -1.0, 1.0);
  this->zRotation = std::clamp(zRotation, -1.0, 1.0);
  this->turbo = turbo;
}

double ArcadeControls::getXSpeed()
{
  return xSpeed;
}

double ArcadeControls::getZRotation()
{
  return zRotation;
}

bool ArcadeControls::isTurbo()
{
  return turbo;
}


