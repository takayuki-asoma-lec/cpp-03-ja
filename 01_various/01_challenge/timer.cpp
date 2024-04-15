// コードを入力してください
#include "timer.hpp"
#include <iostream>

Timer::Timer(){
    start_ = std::chrono::system_clock::now();
}

Timer::~Timer(){
    const auto end = std::chrono::system_clock::now();
    const auto msec = 
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start_).count();
    std::cout << msec << " msec" << std::endl;
}