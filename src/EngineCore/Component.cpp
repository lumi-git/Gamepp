//
// Created by Ronan Tremoureux on 10/10/2023.
//


#include <SDL.h>
#include "EngineCore/Component.h"
#include "EngineCore/GameObject.h"

namespace Gamepp {
    Gamepp::Component::Component(GameObject *parent) {
        this->parent = parent;
    }

    Gamepp::Component::Component()
    {

    }

    void Gamepp::Component::mandatoryDraw(SDL_Renderer *sdlRenderer)
    {
        draw(sdlRenderer);
    }
}
