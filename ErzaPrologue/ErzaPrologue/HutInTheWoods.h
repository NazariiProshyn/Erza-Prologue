#pragma once
#include "Lvl.h"
class HutInTheWoods : public Lvl
{
public:
	HutInTheWoods();
	void textSetings() override;
	const sf::Sprite& getBackground(size_t x, size_t y)  override;
	const sf::Sprite& getObjects(size_t x, size_t y);
	const sf::Sprite& getHeroSprite() { return hero.getSprite(); };
	virtual const size_t getRaws()    const override;
	virtual const size_t getColumns() const override;
	bool checkForObjects(size_t x, size_t y);
	void setHeroPosition();

	void move(float gameTime) { hero.move(gameTime); };
	void setWay(const std::string& way) { hero.setWay(way); };

	bool checkPosition(size_t x);
	int getViewX();
	int getViewY();
protected:
	void createTexture()  override;
	void createText()     override;
	void textSetingsAdd() override;
private:
	int tempCoordinate;
};


