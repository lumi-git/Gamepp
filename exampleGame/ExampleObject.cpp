//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "ExampleObject.h"
#include <SDL2/SDL.h>
#include "../Debug/Debug.h"
#include "../EngineCore/DrawRectComponent.h"
#include "../EngineCore/Time.h"
#include "../EngineCore/Game.h"

ExampleObject::ExampleObject(): GameObject() {
}

void ExampleObject::update() {

    getTransform()->setPosition(Vector2(getTransform()->getPosition().getX() + rand()%3 -1 , getTransform()->getPosition().getY() + rand()%3 -1));

    if(getTransform()->getPosition().getX() > Game::getInstance()->getWindowWidth() || getTransform()->getPosition().getX() < 0 || getTransform()->getPosition().getY() > Game::getInstance()->getWindowHeight() || getTransform()->getPosition().getY() < 0)
        getTransform()->setPosition(Vector2(Game::getInstance()->getWindowWidth()/2, Game::getInstance()->getWindowHeight()/2));

}

void ExampleObject::start() {
    getTransform()->setScale(Vector2(100,100));
    getTransform()->setPosition(Vector2(Game::getInstance()->getWindowWidth()/2, Game::getInstance()->getWindowHeight()/2));
    addComponent(new DrawRectComponent(this));
}
