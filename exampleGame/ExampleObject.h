//
// Created by Ronan Tremoureux on 11/10/2023.
//

#ifndef SDLBASIC_EXAMPLEOBJECT_H
#define SDLBASIC_EXAMPLEOBJECT_H
#include "../EngineCore/GameObject.h"

class ExampleObject: public GameObject{
public:
    ExampleObject();
    void update() override;
    void start() override;
};


#endif //SDLBASIC_EXAMPLEOBJECT_H
