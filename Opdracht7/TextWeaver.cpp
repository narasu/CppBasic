#include "TextWeaver.h"

void TextWeaver::weaveText(std::string _firstIn, std::string _secondIn, std::string _fileOut)
{
	//open 1st file to read from
	std::ifstream firstIn;
	firstIn.open(_firstIn);
	if (!firstIn)
	{
		std::cout << "could not open file: " << _firstIn << std::endl;
		return;
	}
	
	//open 2nd file to read from
	std::ifstream secondIn;
	secondIn.open(_secondIn);
	if (!secondIn)
	{
		std::cout << "could not open file: " << _secondIn << std::endl;
		return;
	}
	
	//open file to write to
	std::ofstream fileOut;
	fileOut.open(_fileOut);
	if (!fileOut)
	{
		std::cout << "could not open file: " << _fileOut << std::endl;
		return;
	}
	
	int lineCount;
	std::string str;
	while (!firstIn.eof() || !secondIn.eof())
	{
		std::getline(firstIn, str);
		//std::cout << str << std::endl;
		fileOut << str << std::endl;
		std::getline(secondIn, str);
		//std::cout << str << std::endl;
		fileOut << str << std::endl;
	}
	

	firstIn.close();
	secondIn.close();
	fileOut.close();
}
