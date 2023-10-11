//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include "ExampleScene.h"
#include "ExampleObject.h"
#include "../EngineCore/Game.h"
#include <SDL2/SDL.h>

void ExampleScene::update(){

}

void ExampleScene::start() {
    //generation of 20000 objects
    SDL_Log("Starting the example scene");
    for(int i = 0; i < 20000; i++)
        Game::instanciate(new ExampleObject());
}

ExampleScene::ExampleScene() = default;
