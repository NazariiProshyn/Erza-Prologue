#pragma once
#include "TextureHandler.h"
#include "TextHandler.h"
#include "Hero.h"
class Lvl
{
public:
	Lvl()  = default;
	~Lvl() = default;
	virtual const sf::Sprite& getBackground(size_t x, size_t y) = 0;
	virtual const size_t getRaws()        const = 0;
	virtual const size_t getColumns()     const = 0;

	void setHeroPosition() {};

	Text getText(size_t num)      const { return textHandler.getText(num); };
	Text getAddText(size_t num)   const { return textHandlerAdd.getText(num); };

	size_t getNumOfItems()        const { return textHandler.getNumOfItems(); };
	size_t getNumOfAddItems()     const { return textHandlerAdd.getNumOfItems(); };
	size_t getNumOfActiveText()   const { return textHandler.getNumOfActiveText(); };

	void increaseActiveText() { textHandler.increaseActiveText(); };
	void reduceActiveText() { textHandler.reduceActiveText(); };
protected:
	TextureHandler textureHandler;
	TextHandler textHandler;
	TextHandler textHandlerAdd;
	Hero hero;

	virtual void textSetings()    = 0;
	virtual void createTexture()  = 0;
	virtual void createText()     = 0;
	virtual void textSetingsAdd() = 0;
};

