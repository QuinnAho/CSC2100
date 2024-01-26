#pragma once
#include <string>
#include <iostream>
using namespace std;
class Employee
{
private: 
	string name;
	float salary; 

public:
	// set, get
	// functions
	// constructors 

	void setName(string n);
	string getName();

	void setSalary(float s);
	float getSalary();

	void PrintInfo();

	Employee();
	Employee(string n, float s);



};

