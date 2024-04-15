// コードを入力してください
#pragma once
#include "units.hpp"

class TemperatureSensor{
public:
    virtual temperature::kelvin read() const = 0;
};
