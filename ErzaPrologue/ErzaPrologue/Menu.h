#pragma once
#include "Lvl.h"
class Menu: public Lvl
{
public:
	Menu();
	void textSetings();
private:
	void createTexture();
	void createText();
	void textSetingsAdd();
};

