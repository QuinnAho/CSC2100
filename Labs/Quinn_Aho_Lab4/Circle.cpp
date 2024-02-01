/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Circle.cpp

*/


#include "Circle.h"

void Circle::setRadius(float r) {
    if (r >= 0) {
        radius = r;
    }
}

float Circle::getRadius() const {
    return radius;
}

float Circle::getPerimeter() const {
    return 2 * M_PI * radius;
}

float Circle::getArea() const {
    return M_PI * radius * radius;
}

Circle::Circle(float r) {
    setRadius(r);
}

Circle::Circle() : radius(5) {
    
}