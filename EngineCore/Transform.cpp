//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "Transform.h"
#include <SDL2/SDL.h>
Transform::Transform() {
    position = new Vector2();
    scale = new Vector2();
    rotation = new double();
}


Transform::~Transform() {
}

Vector2 & Transform::getPosition() {
    return *position;
}

void Transform::setPosition( const Vector2 & newPosition) {
    *position = newPosition;
}

void Transform::setScale(const Vector2 & newScale) {
    *scale = newScale;
}

Vector2 & Transform::getScale() {
    return *scale;
}

double & Transform::getRotation() {
    return *rotation;
}

void Transform::setRotation(const double & newRotation) {
    *rotation = newRotation;
}
