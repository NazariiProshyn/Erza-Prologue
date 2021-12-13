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

const sf::Sprite& LvlsHandler::getSprite(size_t x, size_t y) 
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return menu.getSprite(x,y);
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getSprite(x, y);
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

void LvlsHandler::eventHandler(const sf::Event& event)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || 
		sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || 
		sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || 
		sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		keyUp();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || 
		sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		keyDown();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter) && 
		activeLvl == static_cast<int>(EListOfLvls::MENULVL)) {
		keyEnter(menu.getNumOfActiveText());
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {

	}
}

void LvlsHandler::activeLvlMenu()
{
    activeLvl = static_cast<int>(EListOfLvls::MENULVL);
}

void LvlsHandler::keyUp()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		menu.increaseActiveText();
		menu.textSetings();
		break;
	default:
		break;
	}
}

void LvlsHandler::keyDown()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		menu.reduceActiveText();
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
