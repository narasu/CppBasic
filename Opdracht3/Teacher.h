#pragma once

#include "Person.h"

class Teacher : public Person
{
private:
	std::string name;
	int age;
	float salary;
public:
	Teacher(std::string name, int age);
	Teacher(std::string name, int age, float salary);
	void setSalary(float salary);
	float getSalary();
};