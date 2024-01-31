/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Circle.cpp

*/

#include "Circle.h"
#include <numbers> 

void Circle::setRadius(float r) {

    if (r >= 0) {
        radius = r;
    } else {
        radius = 0;
    }
}

float Circle::getRadius() {

    return radius;
}

float Circle::getPerimeter() {

    return 2 * std::numbers::pi * radius;
}

float Circle::getArea() {
    
    return std::numbers::pi * radius * radius;
}

Circle::Circle(float r) : radius(r >= 0 ? r : 0) {}
