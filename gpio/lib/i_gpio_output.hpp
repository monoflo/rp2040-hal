#pragma once

#include "i_gpio.hpp"

class IGpioOutput : public IGpio
{
public:
    virtual ~IGpioOutput() {}

    virtual void Initialize() = 0;

    virtual bool Read() = 0;
    virtual void Write(bool value) = 0;
};

