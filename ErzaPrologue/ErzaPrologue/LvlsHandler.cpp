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

size_t LvlsHandler::getNumOfItems() const
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getNumOfItems();
		break;
	default:
		break;
	}

}

size_t LvlsHandler::getNumOfAddItems() const
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getNumOfAddItems();
		break;
	default:
		break;
	}
}

Text LvlsHandler::getText(size_t num) const
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getText(num);
		break;
	default:
		break;
	}
}

Text LvlsHandler::getAddText(size_t num) const
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getAddText(num);
		break;
	default:
		break;
	}
}

void LvlsHandler::activeLvlMenu()
{
    activeLvl = static_cast<int>(EListOfLvls::MENULVL);
}
