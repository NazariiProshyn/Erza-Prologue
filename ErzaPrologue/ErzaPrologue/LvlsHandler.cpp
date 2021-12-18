#include "LvlsHandler.h"

enum class EListOfLvls
{
    MENULVL       = 0,
	SAVES         = 1,
	HUTINTHEWOODS = 2
};
enum class EListOfAction
{
	CONTINUE   = 0,
	SAVEDGAMES = 1,
	NEWGAME    = 2,
	EXIT       = 3
};

namespace NSViewCoordinates
{
	const unsigned int windowHeight = 1080;
	const unsigned int windowWidth = 1920;
	const unsigned int centr = 2;
}

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
	case static_cast<int>(EListOfLvls::SAVES):
		return savedGames.getBackground(x, y);
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
	case static_cast<int>(EListOfLvls::SAVES):
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
	case static_cast<int>(EListOfLvls::SAVES):
		return savedGames.getNumOfItems();
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
	case static_cast<int>(EListOfLvls::SAVES):
		return savedGames.getNumOfAddItems();
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
	case static_cast<int>(EListOfLvls::SAVES):
		return savedGames.getRaws();
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
	case static_cast<int>(EListOfLvls::SAVES):
		return savedGames.getColumns();
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getColumns();
		break;
	default:
		break;
	}
}

bool LvlsHandler::checkPosition(size_t x)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return false;
		break;
	case static_cast<int>(EListOfLvls::SAVES):
		return false;
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.checkPosition(x);
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
	case static_cast<int>(EListOfLvls::SAVES):
		return savedGames.getText(num);
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
	case static_cast<int>(EListOfLvls::SAVES):
		return savedGames.getAddText(num);
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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::RShift) &&
		activeLvl == static_cast<int>(EListOfLvls::SAVES)) {
		loadgame();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::M)) {
		activeLvlMenu();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::T)) {
		keyT();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::F5)) {
		keyF5();
	}
}

void LvlsHandler::activeLvlMenu()
{
    activeLvl = static_cast<int>(EListOfLvls::MENULVL);
}

void LvlsHandler::activeHut()
{
	activeLvl = static_cast<int>(EListOfLvls::HUTINTHEWOODS);
}

void LvlsHandler::activeSaves()
{
	activeLvl = static_cast<int>(EListOfLvls::SAVES);
}

void LvlsHandler::loadgame()
{
	save.load(savedGames.getSave());
	activeLvl = save.getLvl();
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		hutInTheWoods.setHeroPosition(save.getX(),
			save.getY());
		hutInTheWoods.setMisiom(save.getTask());
		break;
	default:
		break;
	}
}

const sf::Sprite& LvlsHandler::getDialog()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getDialog();
		break;
	default:
		break;
	}
}

int LvlsHandler::getViewX()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return NSViewCoordinates::windowWidth
			/ NSViewCoordinates::centr;
		break;
	case static_cast<int>(EListOfLvls::SAVES):
		return NSViewCoordinates::windowWidth
			/ NSViewCoordinates::centr;
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getViewX();
		break;
	default:
		break;
	}
}

int LvlsHandler::getViewY()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		return NSViewCoordinates::windowHeight
			/ NSViewCoordinates::centr;
		break;
	case static_cast<int>(EListOfLvls::SAVES):
		return NSViewCoordinates::windowHeight
			/ NSViewCoordinates::centr;
		break;
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getViewY();
		break;
	default:
		break;
	}
}

void LvlsHandler::keyUp(float time)
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::MENULVL):
		menu.increaseActiveText();
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::SAVES):
		savedGames.increaseActiveText();
		savedGames.textSetings();
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
	case static_cast<int>(EListOfLvls::SAVES):
		savedGames.reduceActiveText();
		savedGames.textSetings();
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
		activeHut();
		hutInTheWoods.setHeroPosition();
		renderWindow = true;
		break;
	case static_cast<size_t>(EListOfAction::SAVEDGAMES):
		activeSaves();
		savedGames.loadInfo();
		break;
	case static_cast<size_t>(EListOfAction::EXIT):
		openWindow = false;
		break;
	default:
		break;
	}
}

void LvlsHandler::keyT()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.increaseMission();
		break;
	default:
		break;
	}
}

Text LvlsHandler::keyTab()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getMission();
		break;
	default:
		break;
	}
	return Text();
}

void LvlsHandler::keyF5()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		savedGames.loadInfo();
		 save.save(static_cast<size_t>(EListOfLvls::HUTINTHEWOODS),savedGames.getNumOfSaves(),
			 hutInTheWoods.getX(), hutInTheWoods.getY(), hutInTheWoods.getTask());
		break;
	default:
		break;
	}
}
