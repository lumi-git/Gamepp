//
// Created by Ronan Tremoureux on 10/10/2023.
//

#ifndef SDLBASIC_SCENE_H
#define SDLBASIC_SCENE_H
#include "GameObject.h"
#include <vector>

class Scene {

public:
    void update();
    void start();
    void mandatoryStart();
    void mandatoryUpdate();

    //game object managment
    void addGameObject(GameObject *gameObject);
    void removeGameObject(GameObject *gameObject);

protected:
    std::vector<GameObject*> gameObjects;

};


#endif //SDLBASIC_SCENE_H
