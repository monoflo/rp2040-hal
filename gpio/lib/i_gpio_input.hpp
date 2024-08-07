#pragma once

#include "i_gpio.hpp"

class IGpioInput : public IGpio
{
public:
    virtual ~IGpioInput() {}

    virtual void Initialize() = 0;

    virtual bool Read() = 0;
};

