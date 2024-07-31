#pragma once

#include "i_gpio_output.hpp"

class GpioOutput : public IGpioOutput
{
public:
    GpioOutput(unsigned int n) : pin(n) {}

    void Initialize();

    bool Read();
    void Write(bool value);

private:
    unsigned int pin;
    bool value;
};

