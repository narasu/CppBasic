#include "Koffer.h"
#include <iostream>

Koffer::Koffer()
{
	//std::cout << "koffer std ctor" << this << std::endl;
	sokken = new Sokken("groen");
}

Koffer::Koffer(std::string _kleur)
{
	//std::cout << "koffer ctor" << this << std::endl;
	kleur = _kleur;
	sokken = new Sokken("groen");
}

Koffer::Koffer(const Koffer& _andereKoffer)
{
	//std::cout << "koffer cctor" << std::endl;
	if (this == &_andereKoffer)
		return;

	kleur = _andereKoffer.kleur;
	sokken = new Sokken(*_andereKoffer.sokken);
}

Koffer& Koffer::operator=(const Koffer& _andereKoffer)
{
	std::cout << "koffer ass. opt" << this << std::endl;
	if (this == &_andereKoffer)
		return *this;
	
	
	kleur = _andereKoffer.kleur;
	sokken = _andereKoffer.sokken;
	return *this;
}

void Koffer::toonInhoud()
{
	//std::cout << "Sokken in koffer" << &sokken << std::endl;
}

Koffer::~Koffer()
{
	if (sokken)
		delete(sokken);
}
