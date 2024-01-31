/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Main.cpp

*/

#include "Cylinder.h"
#include <iostream>

int main() {
    std::cout << "Cylinder App" << std::endl;
    std::cout << "----------------" << std::endl;

    float radius, height;
    std::cout << "Enter a radius: ";
    std::cin >> radius;

    std::cout << "Enter a height: ";
    std::cin >> height;

    Cylinder cylinder(radius, height);

    std::cout << "Cylinder area: " << cylinder.getArea() << std::endl;
    std::cout << "Cylinder volume: " << cylinder.getVolume() << std::endl;

    return 0;
}
