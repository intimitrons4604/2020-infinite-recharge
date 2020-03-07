#pragma once
#include <memory>

#include <frc2/command/Command.h>
#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "controls/Controls.h"
#include "controls/WinchControls.h"
#include "subsystems/SimpleClimber.h"

class WinchCommand : public frc2::CommandHelper<frc2::CommandBase, WinchCommand>
{
public:
  WinchCommand(Controls* controls, SimpleClimber* simpleclimber);

  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End(bool interrupted) override;

private:
  Controls* controls;
  SimpleClimber* simpleclimber;
};
