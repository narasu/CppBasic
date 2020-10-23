#include "TextReverser.h"

void TextReverser::reverseText(std::string _fileIn, std::string _fileOut)
{
	
	//open file to read from
	std::ifstream fileIn;
	fileIn.open(_fileIn);
	if (!fileIn)
	{
		std::cout << "could not open file: " << _fileIn << std::endl;
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

	int length = fileIn.gcount();

	for (int i = length; i > 0; i--)
	{
		std::cout << fileIn.get();

	}

	

	fileIn.close();
	fileOut.close();
}
