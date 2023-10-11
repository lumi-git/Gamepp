//
// Created by Ronan Tremoureux on 10/10/2023.
//

#ifndef SDLBASIC_DRAWRECTCOMPONENT_H
#define SDLBASIC_DRAWRECTCOMPONENT_H


#include "Component.h"
#include "GameObject.h"

class DrawRectComponent: public Component {
public:
    DrawRectComponent(GameObject * parent);
    void draw(SDL_Renderer * sdlRenderer) override;

};


#endif //SDLBASIC_DRAWRECTCOMPONENT_H
