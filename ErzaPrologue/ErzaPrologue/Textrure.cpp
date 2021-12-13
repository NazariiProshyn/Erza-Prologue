#include "Textrure.h"
#include <iostream>

void Textrure::setTexture(const std::string& pathToImage)
{
	image.loadFromFile(pathToImage);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
}
