#include "Module.h"
#include "Timeslot.h"



int main()
{
	Module module = Module("name", "room", Docent("Edwin"), "group", Timeslot()); // create new module 
	module.setTimeslot(0, 0); // set timeslot for module
	module.getData();
	return 0;
}