#ifndef POINT2D_H
#define POINT2D_H

#pragma once
#include <iostream>
#include <cmath>

class Point2D
{

private:

    int x, y;

public:

    int getX() const;
    void setX(int x);

    int getY() const;
    void setY(int y);

    Point2D();
    Point2D(int ax, int ay);
};

#endif