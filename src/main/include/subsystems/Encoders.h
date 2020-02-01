#include <Encoder.h>

//plug into 0 and 1 on DIO (roborio)
//defualts to k4X and inverted = false
frc::Encoder::Encoder1(0,1)
Encoder1.SetDistancePerPulse(1./256.);