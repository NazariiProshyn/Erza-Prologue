#include "Text.h"

void Text::setFont(const std::string& fontString)
{
	font.loadFromFile(fontString); 
	text.setFont(font);
}
