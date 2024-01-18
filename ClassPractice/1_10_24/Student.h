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
};
