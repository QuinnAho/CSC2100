#inlcude "clockType.h"


int main() {

/*
Once the class is created, you can create objects of the class
Each object has its own copy of the member variables (hr, min, and sec)
called instance vaiables of the class
*/

clockType myClock;
clockType yourClock;

//Accessing class members
myClock.setTime(5, 4, 30);

// illegal myClock.hr = 5;

    return 0;
}

/*
Abstraction:
Separating design details from usage
Separating the logical properties of an object from the implementation details

Example:
A car is an object
The car has properties such as color, make, model, year, etc.
The car has methods such as start, stop, accelerate, etc.

Abstract data type (ADT):
data type that seperates the logical properties from the implemention details.
ADT has three things associated with it:
the name of the ATD called the type name
The set of values of the type called the domain
the set of operationson the data
*/