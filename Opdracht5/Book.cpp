#include "Book.h"

Book::Book()
{
	title = "The Holy Bible";
	author = "Unknown Author";
	std::cout << "default ctor book" << std::endl;
}

Book::Book(std::string _title)
{
	title = _title;
	author = "Unknown Author";
	std::cout << "ctor book" << std::endl;
}

Book::Book(std::string _title, std::string _author)
{
	title = _title;
	author = _author;
	std::cout << "ctor book" << std::endl;
}


std::string Book::getTitle()
{
	return title;
}

std::string Book::getAuthor()
{
	return author;
}

Book::~Book()
{
	std::cout << "default dtor book" << std::endl;
}