#include "LvlsHandler.h"

enum class EListOfLvls
{
    MENULVL = 0
};

const sf::Sprite& LvlsHandler::getSprite() const
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getSprite();
		break;
	default:
		break;
	}
}

void LvlsHandler::activeLvlMenu()
{
    activeLvl = static_cast<int>(EListOfLvls::MENULVL);
}
