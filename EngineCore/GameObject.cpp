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

void GameObject::mandatoryDraw(SDL_Renderer *sdlRenderer) {
    //Here we can add boundary of the game object based on a config later
    for (auto &component : m_components) {
        component->draw(sdlRenderer);
    }
    draw(sdlRenderer);
}

void GameObject::addComponent(Component * component) {
    m_components.push_back(component);
}