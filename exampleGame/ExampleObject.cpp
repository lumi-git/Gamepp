//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "ExampleObject.h"
#include <SDL2/SDL.h>

ExampleObject::ExampleObject() {

}

void ExampleObject::update() {
    getTransform().setPosition(getTransform().getPosition() + 1);
    SDL_Log(getTransform().getPosition().toString().c_str());
}

void ExampleObject::start() {
    SDL_Log("Starting the example object");
}