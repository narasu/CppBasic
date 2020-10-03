#pragma once

#include "FiftyCent.h"
#include "Euro.h"
#include "SpecialCoin.h"
#include <string>
class CoffeeMachine
{
private:
	// std::string coffee[3];
public:
	void insertCoin(FiftyCent c); // display coffee1
	void insertCoin(Euro c); // display coffee2
	void insertCoin(SpecialCoin c); // display all coffee
};