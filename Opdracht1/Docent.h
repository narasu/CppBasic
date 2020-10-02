#pragma once

#include <string>

class Docent 
{
private:
	std::string name;
	int id;
public:
	Docent();
	Docent(std::string name);
	Docent(std::string name, int id);
	std::string getName();
};