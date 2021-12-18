#pragma once
#include <fstream>
class Save
{
public:
	void save(size_t lvl, size_t num, size_t x, size_t y, size_t task);
	void load(size_t num);
	size_t getLvl() const { return lvl; };
	size_t getX() const { return y; };
	size_t getY() const { return x; };
	size_t getTask() const { return task; };
private:
	std::ofstream fin;
	std::ifstream fout;
	const std::string defaultString = "Lvl_";
	std::string tempString = "";
	size_t lvl = 0;
	size_t x = 0;
	size_t y = 0;
	size_t task = 0;

};

