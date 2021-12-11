#pragma once
#include "Lvl.h"
class Menu: public Lvl
{
public:
	Menu();
private:
	void createTexture();
	void createText();
	void textSetings();
	void textSetingsAdd();
};

