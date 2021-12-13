#include "TextureHandler.h"

TextureHandler::~TextureHandler()
{
	//while (!listOfTextures.empty())
	//{
	//	delete listOfTextures[listOfTextures.size() - 1];
	//}
	delete texture;
}

void TextureHandler::addTexture(const std::string& path)
{
	texture = new Textrure();
	texture->setTexture(path);
	listOfTextures.push_back(texture);
	
	//listOfTextures[listOfTextures.size() - 1].setTexture(path);
}

const sf::Sprite& const TextureHandler::getSprite(size_t num)
{
	return listOfTextures[num]->getSprite();
}
