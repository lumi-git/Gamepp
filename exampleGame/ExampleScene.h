//
// Created by Ronan Tremoureux on 10/10/2023.
//

#ifndef SDLBASIC_EXAMPLESCENE_H
#define SDLBASIC_EXAMPLESCENE_H


#include "../EngineCore/Scene.h"

class ExampleScene : public Scene {
public:
    ExampleScene();
    void update() override;
    void start() override;
};


#endif //SDLBASIC_EXAMPLESCENE_H
