#pragma once
#include "Employee.h"
class Manager:public Employee 
{
private:
	float bonus; 

public:
	void setBonus(float b);

	float getBonus();

	Manager();

	Manager(string name, float salary, float bonus);




};

