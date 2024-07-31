#include "include/gpio_input.hpp"

#include "hardware/gpio.h"

void GpioInput::Initialize()
{
    gpio_init(this->pin);
    gpio_set_dir(this->pin, GPIO_IN);
}

bool GpioInput::Read()
{
    return gpio_get_out_level(this->pin);
}

