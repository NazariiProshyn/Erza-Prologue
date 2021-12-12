#pragma once
#include "Menu.h"
class LvlsHandler
{
public:
	LvlsHandler() { activeLvlMenu(); };
	~LvlsHandler() = default;

	bool isWindowOpen() { return openWindow; }

	const sf::Sprite& getSprite() const;

	Text getText(size_t num) const;
	Text getAddText(size_t num) const;

	size_t getNumOfItems() const;
	size_t getNumOfAddItems() const;
	
	void eventHandler(const sf::Event& event);
	void activeLvlMenu();
private:
	int activeLvl = 0;
	Menu menu;

	void keyUp();
	void keyDown();
	void keyEnter(size_t action);

	bool openWindow = true;
};

