#include "Student.h"

Student::Student(std::string n, int a) : Person(n, a)
{
	name = n;
	age = a;
	credits = 0;
}

Student::Student(std::string n, int a, int c) : Person(n, a), credits(c)
{
	name = n;
	age = a;
	credits = c;
}

void Student::addCredits(int c)
{
	credits += c;
}

int Student::getCredits()
{
	return credits;
}
