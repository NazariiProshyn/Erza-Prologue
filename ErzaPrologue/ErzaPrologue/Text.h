#pragma once
#include <SFML/Graphics.hpp>
#include "Logger.h"

class Text
{
public:
	Text() = default;
	~Text() = default;
	void setSize(int size) { text.setCharacterSize(size); }
	void setBorderColour(const sf::Color& colour) { text.setOutlineColor(colour); };
	//void setTextColour(const sf::Color& colour) { text.setFillColor(colour); };
	void setBorderThickness(float size) { text.setOutlineThickness(size); };
	void setFont(const std::string& fontString);
	void setPosition(float x, float y) { text.setPosition(x, y); };
	void setText(const std::string& infoText) { text.setString(infoText); };

	sf::Text getString() { return text; }
private:
	sf::Text text;
	sf::Font font;
	static Logger mLogger;
};

