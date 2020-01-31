#pragma once
#include <memory>

#include <frc2/command/Command.h>
#include <frc2/command/CommandHelper.h>
#include <frc2/command/CommandBase.h>
#include "subsystems/SimpleClimber.h"
#include "subsystems/WinchControls.h"
#include "Controls.h"
#include "subsystems/SimpleClimber.h"

class WinchCommand : public frc2::CommandHelper<frc2::CommandBase, WinchCommand>
{
 public:
  WinchCommand(std::shared_ptr<Controls> controls, std::shared_ptr<SimpleClimber> simpleclimber);

  void Initialize() override;
  void Execute() override;
  bool IsFinished() override;
  void End(bool interrupted) override;

 private:
  std::shared_ptr<Controls> controls;
  std::shared_ptr<SimpleClimber> simpleclimber;
};

