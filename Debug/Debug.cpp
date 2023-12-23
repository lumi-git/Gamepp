//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "Debug.h"
#include <iostream>
#include <SDL.h>
void Debug::log(const char *message) {
    SDL_Log("%s", message);
}

void Debug::log(const std::string &message) {
    SDL_Log("%s", message.c_str());
}

