#pragma once
#include <fstream>
class Save
{
public:
	void save(size_t lvl, size_t num);
private:
	std::ofstream fin;
	std::ifstream fout;
	const std::string defaultString = "Lvl_";
	std::string tempString = "";

};

