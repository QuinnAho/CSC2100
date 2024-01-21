/*
Quinn Aho
Lab 2 
CSC 2100
1/20/23
cpp file
*/

#include "CSCdate.h"
#include <iostream>

using namespace std;

// Constructor
CSCdate::CSCdate() : day(1), month(1), year(1800) {}

// Setters
void CSCdate::setDay(int d) {
    if (d >= 1 && d <= 31) {
        day = d;
    }
}

void CSCdate::setMonth(int m) {
    if (m >= 1 && m <= 12) {
        month = m;
    }
}

void CSCdate::setYear(int y) {
    if (y >= 1800 && y <= 2022) {
        year = y;
    }
}

// Getters
int CSCdate::getDay() const {
    return day;
}

int CSCdate::getMonth() const {
    return month;
}

int CSCdate::getYear() const {
    return year;
}

string CSCdate::getMonthName() const {
    static const string months[] = {"Invalid month", "January", "February", "March",
                                    "April", "May", "June", "July", "August",
                                    "September", "October", "November", "December"};
    return (month >= 1 && month <= 12) ? months[month] : "Invalid month";
}

// main function
int main() {
    CSCdate date;
    cout << "CSCdate app!" << endl;
    cout << "--------------------" << endl;
    
    // Display initial date
    cout << "First CSCdate: " << date.getDay() << "-" << date.getMonth() << "-" << date.getYear() << endl;
    
    // Modify the date
    date.setDay(21);
    date.setMonth(4);
    date.setYear(2005);

    // Display updated date
    cout << "Updated first CSCdate: " << date.getDay() << "-" << date.getMonth() << "-" << date.getYear() << endl;

    return 0;
}
