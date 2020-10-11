#include "CoffeeMachine.h"
#include <iostream>

void CoffeeMachine::insertCoin(Coin c)
{
	std::cout << "You just inserted a coin with value " << c.getValue();
}
