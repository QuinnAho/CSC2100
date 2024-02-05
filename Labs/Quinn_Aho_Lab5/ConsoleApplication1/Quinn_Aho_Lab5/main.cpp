#include "RectangleType.h"
#include "Point2D.h"

#include <iostream>
using namespace std;

int main()
{
    int x0, y0, x1, y1;

    cout << "Rectangle App!" << endl;
    cout << "-----------------" << endl;

    cout << "Enter x0 and y0: ";
    cin >> x0 >> y0;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;


    RectangleType rectangle(x0, y0, x1, y1);

    cout << "Rectangle information: " << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Length: " << rectangle.getLength() << endl;
    cout << "Perimeter: " << rectangle.getPerimeter() << endl;
    cout << "Area: " << rectangle.getArea() << endl;
    return 0;
};
