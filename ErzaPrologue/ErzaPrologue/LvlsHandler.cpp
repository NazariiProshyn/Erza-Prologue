#include "LvlsHandler.h"

enum class EListOfLvls
{
    MENULVL = 0
};
enum class EListOfAction
{
	CONTINUE   = 0,
	SAVEDGAMES = 1,
	NEWGAME    = 2,
	EXIT       = 3
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

void LvlsHandler::eventHandler(const sf::Event& event)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		keyUp();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		keyDown();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
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
	case static_cast<size_t>(EListOfAction::EXIT):
		openWindow = false;
		break;
	default:
		break;
	}
}
