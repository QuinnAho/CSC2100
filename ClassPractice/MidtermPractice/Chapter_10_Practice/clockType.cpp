
#include <iostream>
#include "clockType.h"

using namespace std;


void clockType::setTime(int hours, int minutes, int seconds)
{
    if(0 <= hours && hours < 24)
    {
        hr = hours;
    }
    else
    {
        hr = 0;
    }

    if(0 <= minutes && minutes < 60)
    {
        min = minutes;
    }
    else
    {
        min = 0;
    }

    if(0 <= seconds && seconds < 60)
    {
        sec = seconds;
    }
    else
    {
        sec = 0;
    }
}

int clockType::getTime(int& hours, int& minutes, int& seconds) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

//sets the member variables to the values passed in the parameters
clockType::clockType(int hours, int minutes, int seconds)
{
    setTime(hours, minutes, seconds);
}

//sets default values of member variables;
clockType::clockType()
{
    hr = 0;
    min = 0;
    sec = 0;
}

/*
destructor is the character '~' followed by the class name

clockType::~clockType()
{
    cout << "Object is being deleted" << endl;
}

a class only has one destructor
*/