#include "Text.h"

namespace {
	std::string kFilePath = "log/fontLog.txt";
}

Text::Text() : mLogger(kFilePath) {};

void Text::setFont(const std::string& fontString)
{
	try
	{
		font.loadFromFile(fontString);
		text.setFont(font);
		mLogger.logMessage("Font successfully loaded from " + fontString);
	}
	catch (...)
	{
		mLogger.logMessage("Exception during font loading form " + fontString);
	}
}
