//
// Created by Ronan Tremoureux on 10/10/2023.
//

#ifndef SDLBASIC_GAMEOBJECT_H
#define SDLBASIC_GAMEOBJECT_H
#include "Transform.h"
#include <string>

class GameObject {
    public:
        GameObject();
        virtual void update(){};
        void mandatoryUpdate();
        virtual void start(){};
        void mandatoryStart();
        void setName(const std::string& name);
        std::string getName();
        Transform * getTransform();

    private:
        void setRandomName();

        std::string m_name;
        Transform * m_transform;

};


#endif //SDLBASIC_GAMEOBJECT_H
