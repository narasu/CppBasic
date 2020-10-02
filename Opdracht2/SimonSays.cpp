#include "SimonSays.h"
#include <stdlib.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <list>
#include <iterator>

void SimonSays::init()
{
    numbers.clear();
    numbers = { rand() % 10, rand() % 10, rand() % 10 };
    runSequence();
}

void SimonSays::runSequence()
{
    //iterate through the list from first to last item, print each value
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << endl;
    }

    //wait, clear screen
    this_thread::sleep_for(2s);
    system("CLS");

    //run through the list again, this time checking it against user input
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        int input;
        cout << "Enter number:" << endl;
        cin >> input;


        //if the user answers wrong, make sure they know it.
        //then reset program
        if (input != *it)
        {
            system("CLS");
            cout << "WRONG!";
            this_thread::sleep_for(0.5s);
            system("CLS");
            init();
            return;
        }
    }
    addNumber();
    system("CLS");
    this_thread::sleep_for(0.5s);
    runSequence();
}

void SimonSays::addNumber()
{
    numbers.push_back(rand() % 10);
}
