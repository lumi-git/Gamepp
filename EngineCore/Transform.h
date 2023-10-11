//
// Created by Ronan Tremoureux on 11/10/2023.
//

#ifndef GAMEPP_TRANSFORM_H
#define GAMEPP_TRANSFORM_H


#include "Vector2.h"

class Transform {
private:
    Vector2 position;
    Vector2 scale;
    double rotation;
public:
    Transform();
    Vector2& getPosition();
    void setPosition(Vector2 newPosition);
    Vector2& getScale();
    void setScale(Vector2 newScale);
    double& getRotation();
    void setRotation(double newRotation);
};


#endif //GAMEPP_TRANSFORM_H
