//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include "ExampleScene.h"
#include "ExampleObject.h"
#include "../EngineCore/Game.h"
#include <SDL.h>
#include "../EngineCore/Time.h"
#include "../Debug/Debug.h"
void ExampleScene::start() {
    //generation of 20000 objects
    SDL_Log("Starting the example scene");
    for(int i = 0; i < 1 ; i++)
        Game::instanciate(new ExampleObject());
}

void ExampleScene::update() {

    Game::getInstance()->setWindowName(std::to_string(Game::getInstance()->getCurrentFps()) + "frame delay in ms");
}

ExampleScene::ExampleScene() = default;
