#include <frc/Counter.h>
#include <frc/DigitalInput.h>
#include <frc/SpeedController.h>
#include <frc/Victor.h>

#include "subsystems/SimpleClimber.h"
// plug into 4 and 5 on DIO (roborio)
// default limit switch set to 1 (is open) --> SET THIS UP!
// frc::DigitalInput limit{4};
// DigitalInput limit = DigitalInput (4);
// limit.get();<- WORK ON FIXING THIS ONE
// DigitalInput* limitSwitch;
// LimitSwitch = DigitalInput (1);