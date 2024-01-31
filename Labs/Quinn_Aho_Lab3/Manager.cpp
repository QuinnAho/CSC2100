/*
Quinn Aho
CSC 2100
1/28/23
Lab 3
Manager.cpp
*/

#include "Manager.h"

void Manager::setBonus(float b) {
    bonus = b;
}

float Manager::getBonus() {
    return bonus;
}

Manager::Manager(): Employee() {
    setBonus(500);
}

Manager::Manager(std::string name, float salary, float bonus)
    : Employee(name, salary), bonus(bonus) {}
