#pragma once
#include <iostream>

class Book {
private:
	std::string title;
	std::string author;
public:
	Book();
	Book(std::string _title);
	Book(std::string _title, std::string _author);
	std::string getTitle();
	std::string getAuthor();
	~Book();
};