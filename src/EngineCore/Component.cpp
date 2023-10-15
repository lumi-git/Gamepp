//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include <SDL2/SDL.h>
#include "EngineCore/Component.h"
#include "EngineCore/GameObject.h"
#include "Component.h"

namespace Gamepp {
    Component::Component(GameObject *parent) {
        this->parent = parent;
    }


    void Component::mandatoryDraw(SDL_Renderer *sdlRenderer)
    {
        draw(sdlRenderer);
    }
}
