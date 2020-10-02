#include "Module.h"

#include<iostream>

//default constructor
Module::Module()
{
	name = "default";
	room = "0.00";
	docent = Docent();
	group = "0x";
	timeslot = Timeslot();
}

//user-assigned values
Module::Module(std::string name, std::string room, Docent docent, std::string group, Timeslot timeslot)
{
	this->name = name;
	this->room = room;
	this->docent = docent;
	this->group = group;
	this->timeslot = timeslot;
}

//set the start and end time for this module
void Module::setTimeslot(time_t timeStart, time_t timeEnd)
{
	timeslot.setTime(timeStart, timeEnd);
}


//print all information of module
void Module::getData()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Room: " << room << std::endl;
	std::cout << "Docent: " << docent.getName() << std::endl;
	std::cout << "Group: " << group << std::endl;
	std::cout << "Time: " << timeslot.getStartTime() << " - " << timeslot.getEndTime() << std::endl;
}
