#pragma once

class ArcadeControls
{
public:
    ArcadeControls(double xSpeed, double zRotation, bool turbo);
    double getXSpeed();
    double getZRotation();
    bool isTurbo();

private:
    double xSpeed;
    double zRotation;
    bool turbo;
};