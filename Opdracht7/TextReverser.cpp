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
	
	//point at end of file and get length
	fileIn.seekg(0, fileIn.end);
	int length = fileIn.tellg();

	//char *c = new char[1];
	char c;
	int i = length - 1;

	//read through file backwards and write each character in fileOut
	while (i >= 0)
	{
		fileIn.seekg(i, fileIn.beg);
		fileIn.get(c);
		fileOut.put(c);
		std::cout.put(c);
		i--;
	}

	//delete[] c;
	
	fileIn.close();
	fileOut.close();
}
