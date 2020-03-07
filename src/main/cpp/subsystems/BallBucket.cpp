#include "subsystems/BallBucket.h"

#include <frc/Servo.h>

BallBucket::BallBucket()
{
}

void BallBucket::SetPosition(double position)
{
  // 1. GetAngle   2. if 90, go to 0; if 0, go to 90  3. if !0 or 90, go to 0
  // >45degrees go to 90. <=45, go to minimum
  door_left.SetAngle(position);
}
