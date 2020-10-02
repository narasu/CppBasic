#pragma once

#include <ctime>

class Timeslot {
private:
	std::time_t timeStart, timeEnd;
public:
	Timeslot();
	Timeslot(time_t tStart, time_t tEnd);
	void setTime(time_t tStart, time_t tEnd);
	std::time_t getStartTime();
	std::time_t getEndTime();
};