#include <string>
#pragma once

class Employee
{

private:

    string name;
    float salary;

public:

    oid setName(string);
    string getName();

    void setSalary(float);
    float getSalary();

    void PrintInfo();

    Employee();

    Employee(string n, float s);
};
