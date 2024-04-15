// コードを入力してください
#pragma once

template<typename T>
T clamp(T val, T min, T max){
    if(val > max)
        return max;
    if(val < min)
        return min;
    return val;
}