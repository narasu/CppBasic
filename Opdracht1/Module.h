#pragma once

#include "Timeslot.h"
#include "Teacher.h"
#include <string>
#include <list>
#include <ctime>

class Module
{
	private:
		std::string name, room;
		Teacher teacher;
		std::string group;
		Timeslot timeslot;
	public:
		Module();
		Module(std::string name, 
			std::string room, 
			Teacher teacher, 
			std::string group, 
			Timeslot timeslot);
		void setTimeslot(std::time_t timeStart, std::time_t timeEnd);
		void getData();

};