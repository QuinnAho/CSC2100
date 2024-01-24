/*
Quinn Aho
Lab 2 
CSC 2100
1/20/23
Header file
*/

#include <string>

using namespace std;

class CSCdate {
private:
    int day;
    int month;
    int year;

public:
    CSCdate();

    void setDay(int d);
    int getDay() const;

    void setMonth(int m);
    int getMonth() const;

    void setYear(int y);
    int getYear() const;

    string getMonthName() const;
};