// コードを入力してください
#pragma once
#include "led_controller.h"

class LedController {
public:
    LedController(){
        led_init();
    };
    void turnOn(){
        led_on();
    };
    void turnOff()
    {
        led_off();
    };
    bool getState()
    {
        return led_get_state();
    };
};