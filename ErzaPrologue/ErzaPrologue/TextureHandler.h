#pragma once
#include "Textrure.h"
class TextureHandler
{
public:
	TextureHandler() = default;
	~TextureHandler();
	void addTexture(const std::string& path);
	const sf::Sprite& const getSprite(size_t num);
	void setPosition(size_t texture,float x, float y) { listOfTextures[texture]->setPosition(y, x); }
														//we must move x with y to create map, which view 
														//will look like our array map
private:
	std::vector<Textrure*> listOfTextures;
	Textrure* texture;
};
