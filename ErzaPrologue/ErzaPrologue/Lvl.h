#pragma once
#include "Textrure.h"
#include "TextHandler.h"
class Lvl
{
public:
	Lvl()  = default;
	~Lvl() = default;
	virtual const sf::Sprite& getSprite() const = 0;

	Text getText(size_t num)      const { return textHandler.getText(num); };
	Text getAddText(size_t num)   const { return textHandlerAdd.getText(num); };

	size_t getNumOfItems()        const { return textHandler.getNumOfItems(); };
	size_t getNumOfAddItems()     const { return textHandlerAdd.getNumOfItems(); };
	size_t getNumOfActiveText()   const { return textHandler.getNumOfActiveText(); };

	void increaseActiveText() { textHandler.increaseActiveText(); };
	void reduceActiveText() { textHandler.reduceActiveText(); };
protected:
	Textrure texture;
	TextHandler textHandler;
	TextHandler textHandlerAdd;

	virtual void createTexture()  = 0;
	virtual void createText()     = 0;
	virtual void textSetingsAdd() = 0;
};

