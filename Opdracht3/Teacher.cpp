#include "Teacher.h"
#include <stdio.h>

Teacher::Teacher(std::string n, int a) : Person(n, a)
{
	name = n;
	age = a;
	salary = 0; //might be time to unionize
}

Teacher::Teacher(std::string n, int a, float s) : Person(n, a), salary(s)
{
	name = n;
	age = a;
	setSalary(s);
}


void Teacher::setSalary(float s)
{
	//round to two decimal places
	float val = (int)(s * 100 + .5);
	salary = val/100;
}

float Teacher::getSalary()
{
	return salary;
}
