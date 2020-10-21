#pragma once
#include <string>
#include "Sokken.h"

class Koffer {
public:
	std::string kleur = "grijs";
	Sokken* sokken = nullptr;
	Koffer();
	Koffer(std::string _kleur);
	Koffer(const Koffer& _andereKoffer);
	Koffer& operator=(const Koffer& _andereKoffer);

	void toonInhoud();

	~Koffer();
};