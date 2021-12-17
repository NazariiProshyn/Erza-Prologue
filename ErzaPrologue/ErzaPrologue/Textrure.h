#pragma once
#include <SFML/Graphics.hpp>
#include "Logger.h"

namespace 
{
	std::string kFilePath = "log/textureLog.txt";
}

class Textrure
{
public:
	Textrure() :mLogger(kFilePath) {};
	~Textrure() = default;
	
	void setTexture(const std::string& pathToImage);
	void setPosition(float x, float y) { sprite.setPosition(x, y); }

	const sf::Sprite& getSprite() const { return sprite; };
private:
	sf::Image image;
	sf::Texture texture;
	sf::Sprite sprite;
	Logger mLogger;

};

