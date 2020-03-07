#pragma once

namespace CAN
{
constexpr int left_front = 4;
constexpr int left_back = 3;
constexpr int right_front = 1;
constexpr int right_back = 2;
} // namespace CAN

namespace controller
{
constexpr int main_controller = 0;
}

namespace DIO
{
constexpr int winch_switch = 0;
constexpr int leftEncoderA = 1;
constexpr int leftEncoderB = 2;
constexpr int rightEncoderA = 3;
constexpr int rightEncoderB = 4;

} // namespace DIO

namespace PWM
{
constexpr int arm_motor = 5;
constexpr int robot_motor = 6;

} // namespace PWM
