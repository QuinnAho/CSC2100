/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Circle.h

*/

#pragma once

class Circle
{

private:

    float radius;

public:

    void setRadius(float r);
    float getRadius();

    float getPerimeter() const;
    float getArea() const;

    explicit Circle(float r = 0);
};
