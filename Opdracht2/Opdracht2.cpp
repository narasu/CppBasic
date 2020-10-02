#include "SimonSays.h"
#include <stdlib.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    //instantiate SimonSays class and initialize it
    SimonSays simonSays = SimonSays();
    simonSays.init();


    return 0;
}