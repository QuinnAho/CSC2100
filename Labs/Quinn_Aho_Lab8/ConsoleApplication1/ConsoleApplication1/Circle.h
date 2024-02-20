/*

Quinn Aho
Lab 8
2/16/24
Circle.h

*/

#pragma once

#include "Shape.h"

class Circle : public Shape {

private:

    float radius;

public:

    Circle(float r = 0.0);
    void setRadius(float r);
    float getRadius() const;
    float getArea() const override;
};
