#pragma once
#include <SFML/Graphics.hpp>
class Text
{
public:
	Text()  = default;
	~Text() = default;
	void setSize(int size) { text.setCharacterSize(size); }
	void setBorderColour(const sf::Color& colour) { text.setOutlineColor(colour); };
	void setTextColour(const sf::Color& colour) { text.setFillColor(colour); };
	void setBorderThickness(float size) { text.setOutlineThickness(size); };
	void setFont(const sf::Font& font) { text.setFont(font); }
	void setPosition(float x, float y) { text.setPosition(x, y); }
private:
	sf::Text text;
};

