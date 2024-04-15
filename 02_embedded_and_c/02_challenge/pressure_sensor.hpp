// コードを入力してください
#pragma once
#include "units.hpp"

class PressureSensor 
{
public:
    virtual pressure::psi read() const = 0;
};