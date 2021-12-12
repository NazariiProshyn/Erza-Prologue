#pragma once
#include "Textrure.h"
class TextureHandler
{
public:
	void addTexture(const std::string& path);
private:
	std::vector<Textrure> listOfTextures;
};

