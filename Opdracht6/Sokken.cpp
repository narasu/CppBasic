#include "Sokken.h"
#include <iostream>
Sokken::Sokken()
{
}

Sokken::Sokken(std::string _kleur)
{
	kleur = _kleur;
}

Sokken::Sokken(const Sokken& _andereSokken)
{
	//std::cout << "sokken cctor" << std::endl;
	if (this == &_andereSokken)
		return;

	kleur = _andereSokken.kleur;
}

Sokken& Sokken::operator=(const Sokken& _andereSokken)
{
	if (this == &_andereSokken)
		return *this;

	this->kleur = _andereSokken.kleur;
	return *this;
}