#include "Text.h"
#include "UtilsFunctions.h"

namespace 
{
	std::string kFilePath = "log/fontLog.txt";
}

Logger Text::mLogger(kFilePath);

void Text::setFont(const std::string& fontString)
{
	std::string fontName = UtilsFunctions::getFileName(fontString);
	try
	{
		font.loadFromFile(fontString);
		text.setFont(font);
		mLogger.logMessage("Font " + fontName + " successfully loaded from " + fontString);
	}
	catch (...)
	{
		mLogger.logMessage("Exception during font " + fontName + " loading form " + fontString);
	}
}
