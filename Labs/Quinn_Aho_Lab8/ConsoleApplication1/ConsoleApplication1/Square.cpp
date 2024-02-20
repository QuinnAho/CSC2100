/*

Quinn Aho
Lab 8
2/16/24
Square.cpp

*/

#include "Square.h"

Square::Square(float l) : length(l) {}

void Square::setLength(float l) {
    length = l;
}

float Square::getLength() const {
    return length;
}

float Square::getArea() const {
    return length * length;
}
