//
//  main.cpp
//
//  Copyright © 2018 Compiled Creations Limited. All rights reserved.
//

#include <iostream>
#include "../EngineCore/Game.h"
#include "ExampleScene.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

#include <SDL.h>

#pragma clang diagnostic pop

using std::cout;

int main(int argc, const char *argv[]) {

    Game::getInstance()->setWindowHeight(600);
    Game::getInstance()->setWindowWidth(800);

    Game::getInstance()->setWindowName("My Super Game");

    Game::getInstance()->addScene(new ExampleScene());

    Game::getInstance()->setCurrentScene(0);

    Game::getInstance()->create();

    return 0;
}