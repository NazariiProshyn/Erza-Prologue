#pragma once
#include "Creature.h"
class Hero: public Creature
{
public:
	Hero();
	const sf::Sprite& getSprite()  override;
	 void move(float gameTime) override;
	 void setWay(const std::string& way) override;
	 size_t getX() override;
	 size_t getY() override;
protected:
	void createTexture()     override;
	virtual void moveLeft()  override;
	virtual void moveRight() override;
	virtual void moveUp()    override;
	virtual void moveDown()  override;

};

