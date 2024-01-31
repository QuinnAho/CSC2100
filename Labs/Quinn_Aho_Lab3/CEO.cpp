/*
Quinn Aho
CSC 2100
1/28/23
Lab 3
CEO.cpp
*/

#include "CEO.h"

void CEO::setShares(float s) {
    shares = s;
}

float CEO::getShares() {
    return shares;
}

CEO::CEO(): Manager() {}

CEO::CEO(std::string name, float salary, float bonus, float shares)
    : Manager(name, salary, bonus), shares(shares) {}
