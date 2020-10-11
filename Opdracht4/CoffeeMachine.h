#pragma once

#include "Coin.h"
#include <string>

class CoffeeMachine
{
private:
	int currentCoin = -1;
	std::string coffee[3] = { "Espresso", "Cappuccino", "Magic Coffee" };
public:
	void insertCoin(Coin c);
	void showCoffee();
};