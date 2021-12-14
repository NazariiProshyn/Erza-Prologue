#include "LvlsHandler.h"

enum class EListOfLvls
{
    MENULVL       = 0,
	HUTINTHEWOODS = 1
};
enum class EListOfAction
{
	CONTINUE   = 0,
	SAVEDGAMES = 1,
	NEWGAME    = 2,
	EXIT       = 3
};

const sf::Sprite& LvlsHandler::getBackground(size_t x, size_t y)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getBackground(x,y);
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getBackground(x, y);
		break;
	default:
		break;
	}
}

const sf::Sprite& LvlsHandler::getObjects(size_t x, size_t y)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getObjects(x, y);
		break;
	default:
		break;
	}
}

const sf::Sprite& LvlsHandler::getHero()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getHeroSprite();
		break;
	default:
		break;
	}
}

bool LvlsHandler::checkForObjects(size_t x, size_t y)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return false;
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.checkForObjects(x, y);
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
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getNumOfItems();
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
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getNumOfAddItems();
		break;
	default:
		break;
	}
}

size_t LvlsHandler::getRaws() const
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getRaws();
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getRaws();
		break;
	default:
		break;
	}
}

size_t LvlsHandler::getColumns() const
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getColumns();
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getColumns();
		break;
	default:
		break;
	}
}

bool LvlsHandler::checkPosition(size_t x, size_t y)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return false;
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.checkPosition(x,y);
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
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getText(num);
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
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getAddText(num);
		break;
	default:
		break;
	}
}

void LvlsHandler::eventHandler(const sf::Event& event, float time)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		keyRight(time);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		keyLeft(time);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		keyDown(time);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) ||
		sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		keyUp(time);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && 
		activeLvl == static_cast<int>(EListOfLvls::MENULVL)) {
		keyEnter(menu.getNumOfActiveText());
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
		activeLvl = static_cast<int>(EListOfLvls::MENULVL);
	}
}

void LvlsHandler::activeLvlMenu()
{
    activeLvl = static_cast<int>(EListOfLvls::MENULVL);
}

void LvlsHandler::keyUp(float time)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		menu.increaseActiveText();
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		hutInTheWoods.setWay("UP");
		hutInTheWoods.move(time);
		menu.textSetings();
		break;
	default:
		break;
	}
}

void LvlsHandler::keyDown(float time)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		menu.reduceActiveText();
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		hutInTheWoods.setWay("DOWN");
		hutInTheWoods.move(time);
		menu.textSetings();
		break;
	default:
		break;
	}
}

void LvlsHandler::keyRight(float time)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		hutInTheWoods.setWay("RIGHT");
		hutInTheWoods.move(time);
		menu.textSetings();
		break;
	default:
		break;
	}
}

void LvlsHandler::keyLeft(float time)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		hutInTheWoods.setWay("LEFT");
		hutInTheWoods.move(time);
		menu.textSetings();
		break;
	default:
		break;
	}
}

void LvlsHandler::keyEnter(size_t action)
{
	switch (action)
	{
	case static_cast<size_t>(EListOfAction::NEWGAME):
		activeLvl = 
			static_cast<int>(EListOfLvls::HUTINTHEWOODS);
		renderWindow = true;
		break;
	case static_cast<size_t>(EListOfAction::EXIT):
		openWindow = false;
		break;
	default:
		break;
	}
}
