#pragma once
#include <string>
using namespace std;

class Student {
private:
    string id;
    string name;
    string major;
    int year;

public:
    void PrintInfo();
    void ChangeMajor(const string& newMajor);

    void setID(const string& id);
    string getID() const;

    void setYear(int year);
    int getYear() const;

    void setName(const string& name);
    string getName() const;

    void setMajor(const string& major);
    string getMajor() const;


    //Constructors
    //default constructor
    //Constuctors never have a return type
    
    Student();

    //Overloaded constructor
    Student(string i, string n, string m, int y)
    {
        setID(i);
        setName(n);
        setMajor(m);
        setYear(y);
    };
};
