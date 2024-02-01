/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Cylinder.cpp

*/

#include "Cylinder.h"

void Cylinder::setHeight(float h) {
    if (h >= 0) {
        height = h;
    }
}

float Cylinder::getHeight() const {
    return height;
}

float Cylinder::getArea() const {
    return 2 * M_PI * getRadius() * (getRadius() + height);
}

float Cylinder::getVolume() const {
    return M_PI * getRadius() * getRadius() * height;
}

Cylinder::Cylinder(float r, float h) : Circle(r), height(h > 0 ? h : 0) {

}

Cylinder::Cylinder() : Circle(15), height(15) {

}