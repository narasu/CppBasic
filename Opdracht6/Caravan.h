#pragma once
#include <string>
#include "Koffer.h"

class Caravan {
private:
	Koffer* koffer = nullptr;
public:
	std::string kleur = "grijs";
	Caravan();
	Caravan(std::string _kleur);
	Caravan(const Caravan& _andereCaravan);
	Caravan& operator=(const Caravan& _andereCaravan);

	void toonInhoud();
	void addKoffer(Koffer* _koffer);

	~Caravan();
};