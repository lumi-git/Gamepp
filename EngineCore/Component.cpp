//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include <SDL_render.h>
#include "Component.h"
#include "GameObject.h"

Component::Component(GameObject *parent) {
    this->parent = parent;
}

void Component::mandatoryDraw(SDL_Renderer *sdlRenderer) {
    draw(sdlRenderer);
}

