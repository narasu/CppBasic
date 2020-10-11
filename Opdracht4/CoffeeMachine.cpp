#include "CoffeeMachine.h"
#include <iostream>
#include <typeinfo>

void CoffeeMachine::insertCoin(Coin c)
{
	
	currentCoin = c.getType();
}

void CoffeeMachine::showCoffee()
{
	std::cout << "You may buy the following coffee:" << std::endl;
	
	for (int i = 0; i <= currentCoin; i++)
	{
		std::cout << coffee[i] << std::endl;
	}
}
