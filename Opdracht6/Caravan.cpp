#include "Caravan.h"
#include <iostream>

Caravan::Caravan()
{
}

Caravan::Caravan(std::string _kleur)
{
	kleur = _kleur;
}

Caravan::Caravan(const Caravan& _andereCaravan)
{
	std::cout << "De caravan van meneer van Puffelen is gejat! " << std::endl;
	if (this == &_andereCaravan)
		return;
	
	kleur = _andereCaravan.kleur;
	koffer = new Koffer(*_andereCaravan.koffer);
}

Caravan& Caravan::operator=(const Caravan& _andereCaravan)
{
	std::cout << "caravan ass. opt" << this << std::endl;
	if (this == &_andereCaravan)
		return *this;


	kleur = _andereCaravan.kleur;
	koffer = _andereCaravan.koffer;
	return *this;
}

void Caravan::toonInhoud()
{
	std::cout << "Deze caravan met kleur " << kleur << " bevat:" << std::endl;
	if (koffer)
	{
		std::cout << "De koffer in deze caravan heeft de kleur " << koffer->kleur << std::endl;
		std::cout << "De sokken in deze koffer hebben de kleur " << koffer->sokken->kleur << std::endl;
	}
	else
	{
		std::cout << "niets." << std::endl;
	}
}

void Caravan::addKoffer(Koffer* _koffer)
{
	koffer = _koffer;
	//std::cout << "Koffer added in caravan" << &koffer << std::endl;
}

Caravan::~Caravan()
{
	if (koffer)
		delete(koffer);
}
