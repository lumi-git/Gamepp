//
// Created by Ronan Tremoureux on 11/10/2023.
//

#include "Vector2.h"


Vector2::Vector2(double x, double y) : x(x), y(y) {}

Vector2::Vector2() : x(0), y(0) {}

Vector2 Vector2::operator+(const Vector2 &other) const {
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator+(double scalar) const {
    return Vector2(x/scalar,y/scalar);
}

Vector2 Vector2::operator-(double scalar) const {
    return Vector2(x-scalar,y-scalar);
}

Vector2 Vector2::operator-(const Vector2 &other) const {
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator/(double scalar) const {
    return Vector2(x/scalar,y/scalar);
}

Vector2 Vector2::operator/(const Vector2 &other) const {
    return Vector2(x / other.x, y / other.y);
}

Vector2 Vector2::operator*(double scalar) const {
    return Vector2(x*scalar,y*scalar);
}

Vector2 Vector2::operator*(const Vector2 &other) const {
    return Vector2(x * other.x, y * other.y);
}

double Vector2::dot(const Vector2 &other) const {
    return x*other.x + y*other.y;
}

std::string Vector2::toString() const {
    return std::to_string(x) + std::to_string(y);
}


