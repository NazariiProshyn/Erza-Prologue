#pragma once
#include <fstream>
class Save
{
public:
	void save(size_t lvl, size_t num, size_t x, size_t y, size_t task);
private:
	std::ofstream fin;
	std::ifstream fout;
	const std::string defaultString = "Lvl_";
	std::string tempString = "";

};

