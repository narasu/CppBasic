#include "Timeslot.h"

//default to 0 - 0 if time isn't specified
Timeslot::Timeslot()
{
	timeStart = 0;
	timeEnd = 0;
}

//user defined time
Timeslot::Timeslot(time_t tStart, time_t tEnd)
{
	timeStart = tStart;
	timeEnd = tEnd;
}

//allow user to set time if not defined when object is instantiated
void Timeslot::setTime(time_t tStart, time_t tEnd)
{
	timeStart = tStart;
	timeEnd = tEnd;
}

std::time_t Timeslot::getStartTime()
{
	return timeStart; //still needs to be converted into something human-readable
}

std::time_t Timeslot::getEndTime()
{
	return timeEnd; //still needs to be converted into something human-readable
}

