#include "Teacher.h"

//assign default values to teacher object
Teacher::Teacher()
{
	name = "john";
	id = 0;
}

Teacher::Teacher(std::string name)
{
	this->name = name;
	id = std::rand();
}

//user-specified values
Teacher::Teacher(std::string name, int id)
{
	this->name = name;
	this->id = id;
}

//return name of teacher
std::string Teacher::getName()
{
	return name;
}
