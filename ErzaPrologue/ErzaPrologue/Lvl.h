#pragma once
#include "Textrure.h"
class Lvl
{
public:
	Lvl()  = default;
	~Lvl() = default;
	const sf::Sprite& getSprite() const { return texture.getSprite(); };
protected:
	Textrure texture;
};

