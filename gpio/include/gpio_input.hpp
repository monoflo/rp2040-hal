#pragma once

#include "i_gpio_input.hpp"

class GpioInput : public IGpioInput
{
public:
    GpioInput(unsigned int n) : pin(n) {}

    void Initialize();

    bool Read();

private:
    unsigned int pin;
};

