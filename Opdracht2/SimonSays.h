#pragma once

#include <list>
#include <iterator>

using namespace std;

class SimonSays
{
private:
	list<int> numbers;

public:
	void init(); //set starting values
	void runSequence(); //game loop
	void addNumber(); //add a new number each time the player succeeds
};