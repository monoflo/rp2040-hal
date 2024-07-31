#include "include/gpio_output.hpp"

#include "hardware/gpio.h"

void GpioOutput::Initialize()
{
    gpio_init(this->pin);
    gpio_set_dir(this->pin, GPIO_OUT);
}

bool GpioOutput::Read()
{
    return this->value;
}

void GpioOutput::Write(bool value)
{
    gpio_put(this->pin, value);
    this->value = value;
}

