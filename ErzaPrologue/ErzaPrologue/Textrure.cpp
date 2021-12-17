#include "Textrure.h"
#include <iostream>

void Textrure::setTexture(const std::string& pathToImage)
{
	try
	{
		image.loadFromFile(pathToImage);
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		// log here message about successful texture creation
	}
	catch (...)
	{
		// log here message abount exception
		// throw our exception
	}
}
