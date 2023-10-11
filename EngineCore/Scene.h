//
// Created by Ronan Tremoureux on 10/10/2023.
//

#ifndef SDLBASIC_SCENE_H
#define SDLBASIC_SCENE_H
#include "GameObject.h"
#include <vector>

class Scene {

public:
    virtual void update(){};
    virtual void start(){};
    virtual void draw(SDL_Renderer *sdlRenderer){};

    void mandatoryStart();
    void mandatoryUpdate();
    void mandatoryDraw(SDL_Renderer *sdlRenderer);

    //game object managment
    void addGameObject(GameObject *gameObject);
    void removeGameObject(GameObject *gameObject);

protected:
    std::vector<GameObject*> gameObjects;

};


#endif //SDLBASIC_SCENE_H
