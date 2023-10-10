//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include "ExampleScene.h"
#include <SDL2/SDL.h>

void ExampleScene::update() {
    SDL_Log("ExampleScene::update");
}

void ExampleScene::start() {
    Scene::start();
    for (auto &gameObject : gameObjects) {
        gameObject->start();
    }
}