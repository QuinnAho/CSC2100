/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Cylinder.cpp

*/

#include "Cylinder.h"
#include <numbers> 

void Cylinder::setHeight(float h) {

    if (h >= 0) {
        height = h;
    } else {
        height = 0;
    }
}

float Cylinder::getHeight() {

    return height;
}

float Cylinder::getArea const () {

    return 2 * std::numbers::pi * getRadius() * height + 2 * std::numbers::pi * getRadius() * getRadius();
}

float Cylinder::getVolume const () {

    return std::numbers::pi * getRadius() * getRadius() * height;
}

Cylinder::Cylinder(float r, float h) : Circle(r), height(h >= 0 ? h : 0) {}
