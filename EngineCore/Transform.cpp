//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "Transform.h"

Transform::Transform() {
    position = Vector2();
    scale = Vector2();
    rotation = 0;

}

Vector2& Transform::getPosition() {
    return position;
}

void Transform::setPosition(Vector2 newPosition) {
    position = newPosition;
}

void Transform::setScale(Vector2 newScale) {
    scale = newScale;
}

Vector2& Transform::getScale() {
    return scale;
}

double& Transform::getRotation() {
    return rotation;
}

void Transform::setRotation(double newRotation) {

}
