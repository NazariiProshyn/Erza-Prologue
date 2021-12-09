#include "Textrure.h"

void Textrure::setTexture(const std::string& pathToImage)
{
	image.loadFromFile(pathToImage);
	texture.loadFromImage(image);
	sprite.setTexture(texture);
}
