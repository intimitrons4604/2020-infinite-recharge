#include <Encoder.h>

//plug into 0 and 1 on DIO (roborio)
//defualts to k4X and inverted = false
frc::Encoder::EncoderArm(0,1)
EncoderArm.SetDistancePerPulse(1./256.);

//plug into 2 and 3 on DIO (roborio)
//defaults to k4X and intverted = false
frc::Encoder::EncoderRobot(2,3)
EncoderRobot.SetDistancePerPulse(1./256.);