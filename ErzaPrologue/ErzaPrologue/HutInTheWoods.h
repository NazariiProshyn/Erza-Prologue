#pragma once
#include "Lvl.h"
class HutInTheWoods : public Lvl
{
public:
	HutInTheWoods();
	void textSetings() override;
	const sf::Sprite& getBackground(size_t x, size_t y)  override;
	const sf::Sprite& getObjects(size_t x, size_t y);
	virtual const size_t getRaws()    const override;
	virtual const size_t getColumns() const override;
	bool checkForObjects(size_t x, size_t y);
protected:
	void createTexture()  override;
	void createText()     override;
	void textSetingsAdd() override;
};


