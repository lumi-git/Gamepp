//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include "GameObject.h"
#include <random>
GameObject::GameObject() {
    m_transform = new Transform();
    setRandomName();
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

void GameObject::setRandomName() {
    setName("GameObject_" + std::to_string(rand()));
}

void GameObject::setName(const std::string& name) {
    m_name = name;
}