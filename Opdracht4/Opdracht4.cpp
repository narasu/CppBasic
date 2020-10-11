#include "CoffeeMachine.h"
#include "Coin.h"
#include "FiftyCent.h"
#include "OneEuro.h"
#include "SpecialCoin.h"
#include <iostream>


int main()
{
    CoffeeMachine* coffeeMachine = new CoffeeMachine();

    std::cout << "DUE TO BUDGET MISMANAGEMENT DURING DEVELOPMENT, THIS MACHINE ONLY ACCEPTS ONE COIN AT A TIME." << std::endl;
    std::cout << "BY USING THIS MACHINE YOU AGREE TO WAIVE ALL OWNERSHIP OF ANY COINS INSERTED IN THIS MACHINE." << std::endl << std::endl;

    

    std::cout << "Please insert a coin. " << std::endl;
    std::cout << "1: Fifty cents" << std::endl;
    std::cout << "2: One euro" << std::endl;
    std::cout << "3: Special coin" << std::endl;
    
    int selection;
    std::cin >> selection;

    FiftyCent fiftyCent;
    OneEuro oneEuro;
    SpecialCoin specialCoin;

    switch (selection)
    {
    case 1:
        coffeeMachine->insertCoin(fiftyCent);
    case 2:
        coffeeMachine->insertCoin(oneEuro);
    case 3:
        coffeeMachine->insertCoin(specialCoin);
    }

    system("CLS");

    coffeeMachine->showCoffee();
    

    delete coffeeMachine;
    return 0;
}