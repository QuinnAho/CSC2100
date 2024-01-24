/*
Quinn Aho
Lab 2 
CSC 2100
1/20/23
main cpp file
*/

#include "CSCdate.h"
#include <iostream>


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

    // Create a second CSCdate object and modify its date
    CSCdate secondDate;
    secondDate.setDay(18);
    secondDate.setMonth(6);
    secondDate.setYear(2021);

    // Display the second date
    cout << "Second CSCdate: " << secondDate.getDay() << "-" << secondDate.getMonthName() << "-" << secondDate.getYear() << endl;

    return 0;
}