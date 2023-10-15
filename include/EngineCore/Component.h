//
// Created by Ronan Tremoureux on 10/10/2023.
//

class GameObject;

#ifndef GAMEPP_COMPONENT_H
#define GAMEPP_COMPONENT_H
#include <SDL2/SDL.h>

namespace Gamepp {
    class Component {

    public:
        Component(GameObject * parent);

        Component();

        void mandatoryStart();
        void mandatoryUpdate();
        virtual void update(){};
        virtual void start(){};
        void mandatoryDraw(SDL_Renderer *sdlRenderer);
        virtual void draw(SDL_Renderer *sdlRenderer){};
        GameObject * parent{};


    };

}
#endif //SDLBASIC_COMPONENT_H
