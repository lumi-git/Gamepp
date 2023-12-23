//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "ExampleObject.h"
#include <SDL.h>
#include "../Debug/Debug.h"
#include "../EngineCore/DrawRectComponent.h"
#include "../EngineCore/Time.h"
#include "../EngineCore/Game.h"

ExampleObject::ExampleObject(): GameObject() {
}

void ExampleObject::update() {

    getTransform()->getPosition().setX(getTransform()->getPosition().getX() + 1);

}

void ExampleObject::start() {
    getTransform()->setScale(Vector2(100,100));
    getTransform()->setPosition(Vector2(Game::getInstance()->getWindowWidth()/2, Game::getInstance()->getWindowHeight()/2));
    addComponent(new DrawRectComponent(this));
}
