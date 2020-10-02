#pragma once

#include <string>

class Teacher 
{
private:
	std::string name;
	int id;
public:
	Teacher();
	Teacher(std::string name);
	Teacher(std::string name, int id);
	std::string getName();
};