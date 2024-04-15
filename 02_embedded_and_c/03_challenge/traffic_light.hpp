// コードを入力してください
#pragma once

enum class TrafficLightState
{
    red,
    yellow,
    green
};

uint trafficLightDuration(TrafficLightState state){
    switch(state){
        case TrafficLightState::red:
            return 1.0;
        case TrafficLightState::yellow:
            return 2.0;
        case TrafficLightState::green:
            return 3.0;
    }
}