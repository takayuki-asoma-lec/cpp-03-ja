// コードを入力してください
#pragma once
#include "pressure_sensor.hpp"

class TirePressure : public PressureSensor 
{
public:
    pressure::psi read() const override
    {
        return pressure_;
    };

private:
    pressure::psi pressure_;
};