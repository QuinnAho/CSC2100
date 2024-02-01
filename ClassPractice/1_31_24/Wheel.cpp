#include "Wheel.h"

void Wheel::setDiameter(float d)
{

    if (d > 0)
    {
        diameter = d;
    }
    else
    {
        std::cout << "Invalid diameter" << std::endl;
    }

}

float Wheel::getDiameter()
{
    return diameter;
}

Wheel::Wheel()
{

    diameter = 15;
    make = "Not Sure Yet";

}

Wheel::Wheel(string m, float d)
{

    diameter = d;
    make = m;

}
