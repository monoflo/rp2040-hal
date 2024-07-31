#pragma once

class IMotorDriver
{
public:
    virtual ~IMotorDriver() {}

    virtual void Initialize() = 0;
};