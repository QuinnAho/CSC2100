/*
Quinn Aho
CSC 2100
1/28/23
Lab 3
CEO.h
*/


#pragma once
#include "Manager.h"

class CEO : public Manager {
private:
    float shares;

public:
    // Setters and getters
    void setShares(float s);
    float getShares();

    // Constructors
    CEO();
    CEO(std::string name, float salary, float bonus, float shares);
};
