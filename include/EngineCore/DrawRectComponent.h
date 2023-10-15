//
// Created by Ronan Tremoureux on 10/10/2023.
//

#ifndef GAMEPP_DRAWRECTCOMPONENT_H
#define GAMEPP_DRAWRECTCOMPONENT_H
#include "Component.h"
#include "GameObject.h"
namespace Gamepp {


    class DrawRectComponent: public Component {
    public:
        DrawRectComponent(GameObject * parent);
        void draw(SDL_Renderer * sdlRenderer) override;

    };

}
#endif //SDLBASIC_DRAWRECTCOMPONENT_H
