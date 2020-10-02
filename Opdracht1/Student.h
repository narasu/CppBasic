#pragma once

#include "Module.h"
#include <string>

class Student
{
private:
	std::string name;
	int studentNumber;
	Module modules[];
public:
	Student(std::string name, int studentNumber, Module modules[]);
};