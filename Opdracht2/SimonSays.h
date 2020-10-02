#pragma once

#include <list>
#include <iterator>

using namespace std;

class SimonSays
{
private:
	list<int> numbers;

public:
	void init();
	void runSequence();
	void addNumber();
};