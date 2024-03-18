#include "Square.h"

Square::Square(float l) : length(l) {}

void Square::setLength(float l) {
    this->length = l;
}

float Square::getLength() const {
    return length;
}

float Square::getArea() const {
    return length * length;
}

Square Square::operator+(const Square& other) const {
    return Square(this->length + other.length);
}

Square Square::operator*(const Square& other) const {
    return Square(this->length * other.length);
}
