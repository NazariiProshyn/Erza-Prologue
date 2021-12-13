#pragma once
#include "Menu.h"
#include "HutInTheWoods.h"
class LvlsHandler
{
public:
	LvlsHandler() { activeLvlMenu(); };
	~LvlsHandler() = default;

	bool isWindowOpen() { return openWindow; }
	bool isrenderWindow() { return renderWindow; }
	void endOfRendering() { renderWindow = false; };

	const sf::Sprite& getSprite(size_t x, size_t y);

	Text getText(size_t num)    const;
	Text getAddText(size_t num) const;

	size_t getNumOfItems()    const;
	size_t getNumOfAddItems() const;

	size_t getRaws()    const;
	size_t getColumns() const;
	
	void eventHandler(const sf::Event& event);
	void activeLvlMenu();
private:
	int activeLvl = 0;
	Menu menu;
	HutInTheWoods hutInTheWoods;
	void keyUp();
	void keyDown();
	void keyEnter(size_t action);

	bool openWindow = true;
	bool renderWindow = false;
};

