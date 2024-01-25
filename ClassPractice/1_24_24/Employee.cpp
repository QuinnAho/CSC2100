#include "Employee.h"
#include <string>

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
