#pragma once

#include <string>

class Person {

private:
	std::string name;
	int age;
public:
	Person(std::string n, int a);
	std::string getName();
	int getAge();
};