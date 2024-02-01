/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Cylinder.h

*/

#pragma once

#include "Circle.h"
#include <cmath>
#include <iostream>

class Cylinder : public Circle {
    
private:

    float height;

public:

    void setHeight(float h);
    float getHeight() const;
    
    float getArea() const override; 
    float getVolume() const;
    
    Cylinder(float r, float h);
    Cylinder();
    
};
