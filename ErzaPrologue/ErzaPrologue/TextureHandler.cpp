#include "TextureHandler.h"

void TextureHandler::addTexture(const std::string& path)
{
	listOfTextures.push_back(Textrure(path));
}
