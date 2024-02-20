/*

Quinn Aho
Lab 8
2/16/24
Sqaure.h

*/

#pragma once

#include "Shape.h"

class Square : public Shape {

private:

    float length;

public:

    Square(float l = 0.0);
    void setLength(float l);
    float getLength() const;
    float getArea() const override;
};

