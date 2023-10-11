//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "ExampleObject.h"
#include <SDL2/SDL.h>
#include "../Debug/Debug.h"
ExampleObject::ExampleObject(): GameObject() {


}

void ExampleObject::update() {

    getTransform()->setPosition(getTransform()->getPosition() + 1.0);
    Debug::log(getTransform()->getPosition().toString());
}

void ExampleObject::start() {
    Debug::log("Starting the object: " + getName());
}