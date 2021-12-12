#include "TextureHandler.h"

void TextureHandler::addTexture(const std::string& path)
{
	listOfTextures.push_back(Textrure());
	listOfTextures[listOfTextures.size() - 1].setTexture(path);
}

const sf::Sprite& const TextureHandler::getSprite(size_t num)
{
	return listOfTextures[num].getSprite();
}
