#include "Coin.h"

Coin::Coin(int _type)
{
	setType(_type);
}

void Coin::setType(int _type)
{
	type = _type;
}

float Coin::getType()
{
	return type;
}
