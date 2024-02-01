/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Circle.h

*/

#pragma once

#include <iostream>
#include <cmath>

class Circle {
private:
    float radius;

public:
    void setRadius(float r);
    float getRadius() const;
    
    virtual float getPerimeter() const;
    virtual float getArea() const;
    
    explicit Circle(float r);
    Circle();
};
