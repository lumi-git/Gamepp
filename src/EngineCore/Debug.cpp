//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "EngineCore/Debug.h"
#include <iostream>
#include <SDL2/SDL.h>

namespace Gamepp{
    void Debug::Logger(const char *message) {
        SDL_Log("%s", message);
    }

    void Debug::Logger(const std::string &message) {
        SDL_Log("%s", message.c_str());
    }
}

