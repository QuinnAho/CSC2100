#include "Manager.h"

void Manager::setBonus(float b)
{
    bonus = b;
}

float Manager::getBonus()
{
    return bonus;
}

Manager::Manager():Employee()
{
   
    setBonus(500);
}

Manager::Manager(string name, float salary, float bonus):Employee(name,salary)
{

    setBonus(bonus);
}
