//
// Created by Ronan Tremoureux on 11/10/2023.
//

#ifndef GAMEPP_VECTOR2_H
#define GAMEPP_VECTOR2_H

#include <string>
class Vector2 {
private:
    double x;
    double y;

public:

    //constructors
    Vector2(double x, double y);

    Vector2();

    // vectorials operations
    Vector2 operator+(const Vector2 &other) const;
    Vector2 operator-(const Vector2 &other) const;
    Vector2 operator*(const Vector2 &other) const;
    Vector2 operator/(const Vector2 &other) const;

    // scalar operations
    Vector2 operator*(double scalar) const;
    Vector2 operator/(double scalar) const;
    Vector2 operator+(double scalar) const;
    Vector2 operator-(double scalar) const;

    std::string toString() const;

    double dot(const Vector2 &other) const;

    // getters and setters
    double getX() const;

    double getY() const;

    void setX(double x);

    void setY(double y);

};


#endif //GAMEPP_VECTOR2_H
