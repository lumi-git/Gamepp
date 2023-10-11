//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include "GameObject.h"

GameObject::GameObject() {
    m_transform = new Transform();

}

void GameObject::mandatoryUpdate() {
    update();
}

void GameObject::mandatoryStart() {
    start();
}

Transform * GameObject::getTransform() {
    return m_transform;
}

std::string GameObject::getName() {
    return m_name;
}

void GameObject::setName(const std::string& name) {
    m_name = name;
}