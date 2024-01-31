/*
Quinn Aho
CSC 2100
1/28/23
Lab 3
Manager.h
*/

#pragma once
#include "Employee.h"
#include <string> // Include for std::string

class Manager : public Employee {
private:
    float bonus;

public:
    void setBonus(float b);
    float getBonus();

    // Constructors
    Manager();
    Manager(std::string name, float salary, float bonus);
};
