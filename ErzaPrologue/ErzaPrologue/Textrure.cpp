#include "Textrure.h"
#include <iostream>y
#include "UtilsFunctions.h"

namespace
{
	std::string kFilePath = "log/textureLog.txt";
}

Logger Textrure::mLogger(kFilePath);

void Textrure::setTexture(const std::string& pathToImage)
{
	std::string textureName = UtilsFunctions::getFileName(pathToImage);
	try
	{
		image.loadFromFile(pathToImage);
		texture.loadFromImage(image);
		sprite.setTexture(texture);
		mLogger.logMessage("Texture " + textureName + " succesfully loaded form file " + pathToImage);
	}
	catch (...)
	{
		mLogger.logMessage("Exception catched during loading image " + textureName + " form file " + pathToImage);
	}
}
