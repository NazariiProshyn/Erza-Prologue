#pragma once
#include "Menu.h"
class LvlsHandler
{
public:
	LvlsHandler() { activeLvlMenu(); };
	~LvlsHandler() = default;
	const sf::Sprite& getSprite() const;
	void activeLvlMenu();
private:
	int activeLvl = 0;
	Menu menu;
};

