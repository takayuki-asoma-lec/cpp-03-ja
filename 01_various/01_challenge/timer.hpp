#pragma once
#include <chrono>

// コードを入力してください
class Timer{
public:
    Timer();
    ~Timer();
private:
    std::chrono::system_clock::time_point start_;
};