#pragma once

#include <string>

class Coin
{
private:
	int type;
public:
	Coin(int _type);
	void setType(int _type);
	float getType();
};