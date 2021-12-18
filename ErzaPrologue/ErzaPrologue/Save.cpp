#include "Save.h"
#include <string>
#include <iostream>
namespace NSTextPaths
{
	const std::string savesPath = "src/saves/listOfSaves.txt";
	const std::string path = "src/saves/";
};

void Save::save(size_t lvl, size_t num,size_t x , size_t y, size_t task)
{
	std::cout << "save";
	tempString = defaultString;
	tempString += std::to_string(lvl);
	tempString += "_";
	tempString += std::to_string(num);
	tempString += "\n";
	fin.open(NSTextPaths::savesPath, std::ios_base::app);
	fin << tempString;
	fin.close();
	tempString = NSTextPaths::path;
	tempString += std::to_string(num);
	tempString += ".txt";
	fin.open(tempString, std::ios_base::app);
	fin << lvl << "\n" << x << " " << y << "\n" << task;
	fin.close();
}
