#pragma once
#include "Lvl.h"
class Menu: public Lvl
{
public:
	Menu();
	void textSetings();
	const sf::Sprite& getSprite() const override { return texture.getSprite(); };
	
private:
	void createTexture()  override;
	void createText()     override;
	void textSetingsAdd() override;
};

