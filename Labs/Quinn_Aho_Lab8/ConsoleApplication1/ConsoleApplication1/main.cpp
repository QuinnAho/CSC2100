/*

Quinn Aho
Lab 8
2/16/24
main.cpp

*/

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"

using namespace std;

int main() {

    cout << "Circle and Square App!" << endl;
    cout << "-----------------------------" << endl;

    Circle circle(3); // Create a Circle object with radius 3
    Square square(5); // Create a Square object with length 5

    // Display Circle properties
    cout << "Circle" << endl;
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl << endl;

    // Display Square properties
    cout << "Square:" << endl;
    cout << "Length: " << square.getLength() << endl;
    cout << "Area:  " << square.getArea() << endl;

    return 0;
}
