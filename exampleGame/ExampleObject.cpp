//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "ExampleObject.h"
#include <SDL2/SDL.h>
#include "../Debug/Debug.h"
#include "../EngineCore/DrawRectComponent.h"
#include "../EngineCore/Time.h"

ExampleObject::ExampleObject(): GameObject() {
}

void ExampleObject::update() {
    getTransform()->setPosition(getTransform()->getPosition() + 0.1*Time::getDeltaTime());
}

void ExampleObject::start() {
    getTransform()->setScale(Vector2(100,100));
    addComponent(new DrawRectComponent(this));
}
