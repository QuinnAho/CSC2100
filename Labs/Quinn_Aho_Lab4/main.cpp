/*

Quinn Aho
1/31/23
CSC 2100
Lab 4
Main.cpp

*/

#include "Cylinder.h"

using namespace std;

int main() {
    cout << "Cylinder App!" << endl;
    cout << "--------------------" << endl;

    Cylinder cylinder;

    double radius, height;

    cout << "Enter radius: ";
    cin >> radius;
    cylinder.setRadius(radius);

    cout << "Enter height: ";
    cin >> height;
    cylinder.setHeight(height);

    cout << "Cylinder area: " << cylinder.getArea() << endl;
    cout << "Cylinder volume: " << cylinder.getVolume() << endl;

    return 0;
}
