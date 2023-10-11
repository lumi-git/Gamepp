//
// Created by Ronan Tremoureux on 10/10/2023.
//

#ifndef SDLBASIC_GAMEOBJECT_H
#define SDLBASIC_GAMEOBJECT_H
#include "Transform.h"
#include "Component.h"
#include <string>
#include <vector>


class GameObject {
    public:
        GameObject();
        virtual void update(){};
        void mandatoryUpdate();
        virtual void start(){};
        void mandatoryStart();
        virtual void draw(SDL_Renderer *sdlRenderer){};
        void mandatoryDraw(SDL_Renderer *sdlRenderer);
        void setName(const std::string& name);
        std::string getName();
        Transform * getTransform();
        void addComponent(Component * component);



    private:
        void setRandomName();

        std::string m_name;
        Transform * m_transform;
        std::vector<Component*> m_components;

};


#endif //SDLBASIC_GAMEOBJECT_H
