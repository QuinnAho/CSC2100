/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Cylinder.h

*/

#pragma once

#include "Circle.h"

class Cylinder : public Circle {
private:

    float height;

public:

    Cylinder(float r = 0, float h = 0);
    void setHeight(float h);
    float getHeight() const; 

    float getArea(); 
    float getVolume() const;

};
