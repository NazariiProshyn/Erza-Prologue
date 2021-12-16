#include "TextHandler.h"
#include <iostream>
void TextHandler::setFont(const std::string& font)
{
	for(size_t i = 0; i < textList.size(); ++i)
	{
		textList[i].setFont(font);
	}
}

void TextHandler::addTextItem(const std::string& item)
{
	textList.push_back(Text());
	textList[textList.size() - 1].setText(item);
	std::cout << item << '\n';
}

void TextHandler::setSize(unsigned int active, unsigned int simple)
{
	for (size_t i = 0; i < textList.size(); ++i)
	{
		if (i == activeText) 
		{
			textList[i].setSize(active);
		}
		else
		{
			textList[i].setSize(simple);
		}
	}
}

void TextHandler::setColour(const sf::Color& active, const sf::Color& simple)
{
	for (size_t i = 0; i < textList.size(); ++i)
	{
		if (i == activeText)
		{
			textList[i].setBorderColour(active);
		}
		else
		{
			textList[i].setBorderColour(simple);
		}
	}
}

void TextHandler::setBorder(float active, float simple)
{
	for (size_t i = 0; i < textList.size(); ++i)
	{
		if (i == activeText)
		{
			textList[i].setBorderThickness(active);
		}
		else
		{
			textList[i].setBorderThickness(simple);
		}
	}
}

void TextHandler::setPosition(float X, float Y, float step)
{
	for (size_t i = 0; i < textList.size(); ++i)
	{
		textList[i].setPosition(X,Y + step * i);
	}
}

void TextHandler::increaseActiveText()
{
	if (activeText <= minSizeOfText)
	{
		activeText = textList.size() - 1;
	}
	else
	{
		--activeText;
	}
}

void TextHandler::reduceActiveText()
{
	++activeText;
	if (activeText >= textList.size())
	{
		activeText = minSizeOfText;
	}
}
