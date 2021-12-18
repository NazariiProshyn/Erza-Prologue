#pragma once
#include "Menu.h"
#include "HutInTheWoods.h"
#include "SavedGames.h"
class LvlsHandler
{
public:
	LvlsHandler() { activeLvlMenu(); };
	~LvlsHandler() = default;

	bool isWindowOpen() { return openWindow; }
	bool isrenderWindow() { return renderWindow; }
	void endOfRendering() { renderWindow = false; };

	const sf::Sprite& getBackground(size_t x, size_t y);
	const sf::Sprite& getObjects(size_t x, size_t y);
	const sf::Sprite& getHero();
	bool checkForObjects(size_t x, size_t y);

	Text getText(size_t num)    const;
	Text getAddText(size_t num) const;

	size_t getNumOfItems()    const;
	size_t getNumOfAddItems() const;

	size_t getRaws()    const;
	size_t getColumns() const;

	bool checkPosition(size_t x);

	
	void eventHandler(const sf::Event& event,float time);
	
	const sf::Sprite& getDialog();
	int getViewX();
	int getViewY();
	Text keyTab();
private:
	int activeLvl = 0;
	Menu menu;
	HutInTheWoods hutInTheWoods;
	SavedGames savedGames;
	void keyUp(float time);
	void keyDown(float time);
	void keyRight(float time);
	void keyLeft(float time);
	void keyEnter(size_t action);
	void keyT();
	void activeLvlMenu();
	void activeHut();
	void activeSaves();
	bool openWindow = true;
	bool renderWindow = false;
};

