#pragma once

#include "i_gpio_output.hpp"
#include "i_motor_driver.hpp"

class DRV8833 : public IMotorDriver
{
public:
    void Initialize();
private:
    IGpioOutput& out1;  // test
};
