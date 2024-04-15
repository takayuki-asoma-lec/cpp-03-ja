// コードを入力してください
#pragma once
#include "temperature_sensor.hpp"

class CabinTemperature : public TemperatureSensor{
public:
    temperature::kelvin read() const override
    {
        return temp_;
    };

private:
    temperature::kelvin temp_;
};