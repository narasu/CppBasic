#include "Library.h"

Library::Library()
{
	theOnlyBook = new Book("Who Is This God Person Anyway?", "Dog");
	inStock = true;
}

void Library::borrowBook()
{
	if (inStock)
	{
		std::cout << "You have borrowed \"" << theOnlyBook->getTitle() << "\" by " << theOnlyBook->getAuthor() << std::endl;
		inStock = false;
		return;
	}
	else
	{
		std::cout << "Sorry, this book is out of stock!" << std::endl;
	}
}

void Library::returnBook()
{
	if (!inStock)
	{
		std::cout << "Thank you for returning \"" << theOnlyBook->getTitle() << "\"" << std::endl;
		inStock = true;
		return;
	}
	else
	{
		std::cout << "This book has already been returned!" << std::endl;
	}
}

Library::~Library()
{
	delete(theOnlyBook);
}
