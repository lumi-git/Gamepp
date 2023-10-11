//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include "DrawRectComponent.h"
#include "Component.h"

DrawRectComponent::DrawRectComponent(GameObject * parent) : Component(parent) {

}

void DrawRectComponent::draw(SDL_Renderer *sdlRenderer) {

    SDL_Rect rect = {int(parent->getTransform()->getPosition().getX()), int(parent->getTransform()->getPosition().getY()), int(parent->getTransform()->getScale().getX()), int(parent->getTransform()->getScale().getY())};
    SDL_SetRenderDrawColor(sdlRenderer, 255, 255, 255, 255);
    SDL_RenderFillRect(sdlRenderer, &rect);

}