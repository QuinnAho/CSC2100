/*
Quinn Aho
CSC 2100
1/28/23
Lab 3
Employee.cpp
*/

#include "Employee.h"

void Employee::setName(string n)
{
    name = n;
}

string Employee::getName()
{
    return name;
}

void Employee::setSalary(float s)
{
    salary = s;
}

float Employee::getSalary()
{
    return salary;
}

void Employee::PrintInfo()
{
    cout << "Name:" << getName() << endl;
    cout << "Salary:" << getSalary() << endl;

}

Employee::Employee()
{
    setName("not set yet");
    setSalary(1000);

}

Employee::Employee(string n, float s)
{
    setName(n);
    setSalary(s);
}
