/*

Quinn Aho
Lab 8
2/16/24
Circle.cpp

*/

#include "Circle.h"
#include <cmath> 

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

Circle::Circle(float r) : radius(r) {}

void Circle::setRadius(float r) {
    radius = r;
}

float Circle::getRadius() const {
    return radius;
}

float Circle::getArea() const {
    return M_PI * radius * radius;
}
