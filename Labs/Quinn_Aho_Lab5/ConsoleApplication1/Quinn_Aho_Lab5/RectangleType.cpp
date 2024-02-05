#include "RectangleType.h"

int RectangleType::getX0() const
{
    return p0.getX();
}

int RectangleType::getY0() const
{
    return p0.getY();
}

int RectangleType::getX1() const
{
    return p1.getX();
}

int RectangleType::getY1() const
{
    return p1.getY();
}

int RectangleType::getWidth() const
{
    return abs(p1.getY() - p0.getY());
}

int RectangleType::getLength() const
{
    return abs(p1.getX() - p0.getX());
}

RectangleType::RectangleType(int ax0, int ay0, int ax1, int ay1)
{
    p0.setX(ax0);
    p0.setY(ay0);
    p1.setX(ax1);
    p1.setY(ay1);
}

int RectangleType::getPerimeter() const
{
    return 2 * (getWidth() + getLength());
}

int RectangleType::getArea() const
{
    return getWidth() * getLength();
}