#pragma once
#include <SFML/Graphics.hpp>

class Textrure
{
public:
	Textrure()  = default;
	~Textrure() = default;
	
	void setTexture(const std::string& pathToImage);

	const sf::Sprite& getSprite() const { return sprite; };
private:
	sf::Image image;
	sf::Texture texture;
	sf::Sprite sprite;

};

