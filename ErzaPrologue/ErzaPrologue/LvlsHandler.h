#pragma once
#include "Menu.h"
class LvlsHandler
{
public:
	LvlsHandler() { activeLvlMenu(); };
	~LvlsHandler() = default;

	const sf::Sprite& getSprite() const;

	Text getText(size_t num) const;
	Text getAddText(size_t num) const;

	size_t getNumOfItems() const;
	size_t getNumOfAddItems() const;
	

	void activeLvlMenu();
private:
	int activeLvl = 0;
	Menu menu;
};

