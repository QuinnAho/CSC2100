#pragma once

#include "Manager.h"

class CEO : public Manager
{
private:

float shares;

public:
//setters and getters 

void setShares(float s);
float getShares();
};