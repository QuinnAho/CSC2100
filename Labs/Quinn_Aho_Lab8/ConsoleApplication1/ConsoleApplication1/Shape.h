/*

Quinn Aho
Lab 8
2/16/24
Shape.h

*/

#pragma once

class Shape {

public:

    virtual float getArea() const = 0; // Pure virtual function
    virtual ~Shape() {}
};
