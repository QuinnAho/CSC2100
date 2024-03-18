#include <iostream>

using namespace std;

/*
Member Access Specifiers:

Public- accesible outside the class

Private- cannot be accesible outside the class

Protected

*/

class clockType
{
    public: //Access Specifier
    //Class members can be varibles or functions.

    //Mutator Function
    void setTime(int hours, int minutes, int seconds)

    //the & refrences the object that called the function, th econst says it cannont be changed
    //accessor function
    int getTime(int& hours, int& minutes, int& seconds) const

    //Constructors are the same name as the class

    //Parameterized Constructor
    clockType(int hours, int minutes int seconds)
    //Default Constructor
    clockType()
    private:

    int hr, min, sec;
    //private, cannont be accessed outside the class
};