#pragma once

#include <string>

class Coin
{
private:
	int type = -1;
public:
	Coin(int _type);
	void setType(int _type);
	virtual float getType();
};