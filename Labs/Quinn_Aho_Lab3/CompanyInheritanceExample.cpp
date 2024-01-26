// CompanyInheritanceExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "Employee.h"
#include "Manager.h"
int main()
{
	Employee e1("Peter",2000);

	Manager m1("Mary",3000,500);

	e1.PrintInfo();

	m1.PrintInfo();

    
}

