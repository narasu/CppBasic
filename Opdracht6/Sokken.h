#pragma once
#include <string>

class Sokken {
public:
	std::string kleur = "grijs";
	Sokken();
	Sokken(std::string _kleur);
	Sokken(const Sokken& _andereSokken);
	Sokken& operator=(const Sokken& _andereSokken);
};