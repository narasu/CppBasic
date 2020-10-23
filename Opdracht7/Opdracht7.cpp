#include <iostream>
#include <filesystem>

#include "TextReverser.h"
#include "TextWeaver.h"

//namespace fs = std::filesystem;
int main()
{
	//std::cout << fs::current_path();
	
	TextReverser textReverser;
	textReverser.reverseText("jabberwocky.txt", "ykcowrebbaj.txt");
	
	TextWeaver textWeaver;
	textWeaver.weaveText("jabberwocky.txt", "jabberwocky_lat.txt", "jabberbocchum.txt");
	
	return(0);
}