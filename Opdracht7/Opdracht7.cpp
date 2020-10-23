#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>

#include "TextReverser.h"

//namespace fs = std::filesystem;
int main()
{
	//std::cout << fs::current_path();

	TextReverser textReverser;
	textReverser.reverseText("jabberwocky.txt", "ykcowrebbaj.txt");
	return(0);
}