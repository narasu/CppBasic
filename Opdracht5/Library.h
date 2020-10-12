#pragma once
#include "Book.h"

class Library
{
private:
	Book* theOnlyBook;
	bool inStock;
public:
	Library();
	void borrowBook();
	void returnBook();
	~Library();
};