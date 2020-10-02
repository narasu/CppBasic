#pragma once

#include "Person.h"

class Student : public Person
{
private:
	std::string name;
	int age;
	int credits;
public:
	Student(std::string name, int age);
	Student(std::string name, int age, int credits);
	void addCredits(int c);
	int getCredits();
};