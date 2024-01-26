#include "CEO.h"

void CEO::setShares(float s)
{
    shares = s;
}

float CEO::getShares()
{
    return shares;
}

CEO::CEO(): Manager()
{
    // Other initializations if needed
}

CEO::CEO(std::string name, float salary, float bonus, float shares): Manager(name, salary, bonus), shares(shares)
{
    // Other initializations if needed
}
