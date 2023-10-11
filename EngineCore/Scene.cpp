//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include "Scene.h"
#include "../Debug/Debug.h"
void Scene::mandatoryUpdate() {
    update();
    for (auto &gameObject : gameObjects) {
        gameObject->mandatoryUpdate();
    }
}


void Scene::mandatoryStart() {
    start();
    for (auto &gameObject : gameObjects) {
        gameObject->mandatoryStart();
    }
}

void Scene::addGameObject(GameObject *gameObject) {
    gameObjects.push_back(gameObject);
}

void Scene::removeGameObject(GameObject *gameObject) {
    for (auto it = gameObjects.begin(); it != gameObjects.end(); ++it) {
        if (*it == gameObject) {
            gameObjects.erase(it);
            break;
        }
    }

}

void Scene::mandatoryDraw(SDL_Renderer *sdlRenderer) {
    draw(sdlRenderer);
    for (auto &gameObject : gameObjects) {
        gameObject->mandatoryDraw(sdlRenderer);
    }

}

