// コードを入力してください
#include "led_controller.hpp"
#include <iostream>

int main(){
    LedController c;
    c.turnOn();
    std::cout << c.getState() << std::endl;
    c.turnOff();
    std::cout << c.getState() << std::endl;
}