#include "CoffeeMachine.h"
#include "FiftyCent.h"
#include <iostream>


int main()
{
    std::cout << "DUE TO A GLARING DESIGN OVERSIGHT, THIS MACHINE ONLY ACCEPTS ONE COIN AT A TIME." << std::endl;
    std::cout << "BY USING THIS MACHINE YOU AGREE TO WAIVE ALL OWNERSHIP OF ANY COINS INSERTED IN THIS MACHINE." << std::endl;

    FiftyCent fiftyCent;
    std::cout << fiftyCent.getValue();

    return 0;
}