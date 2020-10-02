#pragma once

#include "Module.h"
#include <string>

class Cursist
{
private:
	std::string name;
	int studentNumber;
	Module modules[];
public:
	Cursist(std::string name, int studentNumber);
	void assignModule(Module m);
};