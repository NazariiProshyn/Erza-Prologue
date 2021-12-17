#include "Textrure.h"

namespace
{
	std::string kFilePath = "log/textureLog.txt";
}

Textrure::Textrure() :mLogger(kFilePath) {};

void Textrure::setTexture(const std::string& pathToImage)
{
	try
	{
		image.loadFromFile(pathToImage);
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		mLogger.logMessage("Texture succesfully loaded form file " + pathToImage);
	}
	catch (...)
	{
		mLogger.logMessage("Exception catched during loading image form file " + pathToImage);
	}
}
