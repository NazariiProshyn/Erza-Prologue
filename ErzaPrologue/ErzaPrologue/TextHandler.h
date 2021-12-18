#pragma once
#include "Text.h"
class TextHandler
{
public:
	TextHandler() = default;
	Text getText(size_t num)    const { return textList[num]; };
	size_t getNumOfItems()      const { return textList.size(); }
	size_t getNumOfActiveText() const { return activeText; }

	void setFont(const std::string& font);
	void setSize(unsigned int active, unsigned int simple);
	void setColour(const sf::Color& active, const sf::Color& simple);
	void setBorder(float active, float simple);
	void setPosition(float X, float Y, float step);
	

	void addTextItem(const std::string& item);
	void increaseActiveText();
	void reduceActiveText();
	void clear() { textList.clear(); }
	~TextHandler() = default;
	size_t getSize() { return textList.size(); }
private:
	size_t activeText = 0;
	const size_t minSizeOfText = 0;
	std::vector<Text> textList;
};

