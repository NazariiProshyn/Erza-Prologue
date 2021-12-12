#pragma once
#include "Textrure.h"
class TextureHandler
{
public:
	void addTexture(const std::string& path);
	const sf::Sprite& const getSprite(size_t num);
private:
	std::vector<Textrure> listOfTextures;
};
