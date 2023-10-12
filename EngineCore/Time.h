//
// Created by Ronan Tremoureux on 11/10/2023.
//

#ifndef GAMEPP_TIME_H
#define GAMEPP_TIME_H

class Time {
private:
    friend class Game;
    double deltaTime ;

public:
    Time() : deltaTime(0) {}
    // Get the singleton instance
    static Time& getInstance() {
        static Time instance;
        return instance;
    }

    static double getDeltaTime() {
        return getInstance().deltaTime;
    }

    void setDeltaTime(double newDeltaTime) {
        deltaTime = newDeltaTime;
    }

};

#endif //GAMEPP_TIME_H
