#include "Docent.h"

//assign default values to Docent object
Docent::Docent()
{
	name = "john";
	id = 0;
}

Docent::Docent(std::string name)
{
	this->name = name;
	id = std::rand();
}

//user-specified values
Docent::Docent(std::string name, int id)
{
	this->name = name;
	this->id = id;
}

//return name of Docent
std::string Docent::getName()
{
	return name;
}
