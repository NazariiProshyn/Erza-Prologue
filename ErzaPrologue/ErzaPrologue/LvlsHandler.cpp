#include "LvlsHandler.h"

enum class EListOfLvls
{
    MENULVL       = 0,
	SAVES         = 1,
	HUTINTHEWOODS = 2,
	LUCKGRAD      = 3,
	ERFIELD       = 4,
	HUMANS        = 5,
	END           = 7
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

bool LvlsHandler::checkForEn()
{
	if (activeLvl == static_cast<int>(EListOfLvls::ERFIELD))
	{
		return true;
	}
	return false;
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getBackground(x, y);
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getBackground(x, y);
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getBackground(x, y);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getObjects(x, y);
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getObjects(x, y);
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getObjects(x, y);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getHeroSprite();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getHeroSprite();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getHeroSprite();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.checkForObjects(x, y);
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.checkForObjects(x, y);
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.checkForObjects(x, y);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getNumOfItems();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getNumOfItems();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getNumOfItems();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getNumOfAddItems();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getNumOfAddItems();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getNumOfAddItems();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getRaws();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getRaws();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getRaws();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getColumns();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getColumns();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getColumns();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.checkPosition(x);
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.checkPosition(x);
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.checkPosition(x);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getText(num);
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getText(num);
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getText(num);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getAddText(num);
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getAddText(num);
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getAddText(num);
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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::RShift) &&
		activeLvl == static_cast<int>(EListOfLvls::MENULVL)) {
		loadLastgame();
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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1)) {
		activeHut();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2)) {
		activeLuck();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3)) {
		activeERF();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4)) {
		activeHUM();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5)) {
		activeEND();
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

void LvlsHandler::activeLuck()
{
	activeLvl = static_cast<int>(EListOfLvls::LUCKGRAD);
}

void LvlsHandler::activeERF()
{
	activeLvl = static_cast<int>(EListOfLvls::ERFIELD);
}

void LvlsHandler::activeHUM()
{
	activeLvl = static_cast<int>(EListOfLvls::HUMANS);
}

void LvlsHandler::activeEND()
{
	activeLvl = static_cast<int>(EListOfLvls::END);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		luckgrad.setHeroPosition(save.getX(),
			save.getY());
		luckgrad.setMisiom(save.getTask());
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		erField.setHeroPosition(save.getX(),
			save.getY());
		erField.setMisiom(save.getTask());
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		humans.setHeroPosition(save.getX(),
			save.getY());
		humans.setMisiom(save.getTask());
		break;
	default:
		break;
	}
}

void LvlsHandler::loadLastgame()
{
	if(savedGames.getNumOfSaves() > 0)
	{
		save.load(savedGames.getNumOfSaves() - 1);
		activeLvl = save.getLvl();
		switch (activeLvl)
		{
		case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
			hutInTheWoods.setHeroPosition(save.getX(),
				save.getY());
			hutInTheWoods.setMisiom(save.getTask());
			break;
		case static_cast<int>(EListOfLvls::LUCKGRAD):
			luckgrad.setHeroPosition(save.getX(),
				save.getY());
			luckgrad.setMisiom(save.getTask());
			break;
		case static_cast<int>(EListOfLvls::ERFIELD):
			erField.setHeroPosition(save.getX(),
				save.getY());
			erField.setMisiom(save.getTask());
			break;
		case static_cast<int>(EListOfLvls::HUMANS):
			humans.setHeroPosition(save.getX(),
				save.getY());
			humans.setMisiom(save.getTask());
			break;
		default:
			break;
		}
	}

}

const sf::Sprite& LvlsHandler::getDialog()
{
	switch (activeLvl)
	{
	case static_cast<int>(EListOfLvls::HUTINTHEWOODS):
		return hutInTheWoods.getDialog();
		break;
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getDialog();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getDialog();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getDialog();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getViewX();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getViewX();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getViewX();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getViewY();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getViewY();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getViewY();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		luckgrad.setWay("UP");
		luckgrad.move(time);
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		erField.setWay("UP");
		erField.move(time);
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		humans.setWay("UP");
		humans.move(time);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		luckgrad.setWay("DOWN");
		luckgrad.move(time);
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		erField.setWay("DOWN");
		erField.move(time);
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		humans.setWay("DOWN");
		humans.move(time);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		luckgrad.setWay("RIGHT");
		luckgrad.move(time);
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		erField.setWay("RIGHT");
		erField.move(time);
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		humans.setWay("RIGHT");
		humans.move(time);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		luckgrad.setWay("LEFT");
		luckgrad.move(time);
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		erField.setWay("LEFT");
		erField.move(time);
		menu.textSetings();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		humans.setWay("LEFT");
		humans.move(time);
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.increaseMission();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.increaseMission();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.increaseMission();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		return luckgrad.getMission();
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		return erField.getMission();
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		return humans.getMission();
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
	case static_cast<int>(EListOfLvls::LUCKGRAD):
		savedGames.loadInfo();
		save.save(static_cast<size_t>(EListOfLvls::LUCKGRAD), savedGames.getNumOfSaves(),
			luckgrad.getX(), luckgrad.getY(), luckgrad.getTask());
		break;
	case static_cast<int>(EListOfLvls::ERFIELD):
		savedGames.loadInfo();
		save.save(static_cast<size_t>(EListOfLvls::ERFIELD), savedGames.getNumOfSaves(),
			erField.getX(), erField.getY(), erField.getTask());
		break;
	case static_cast<int>(EListOfLvls::HUMANS):
		savedGames.loadInfo();
		save.save(static_cast<size_t>(EListOfLvls::HUMANS), savedGames.getNumOfSaves(),
			humans.getX(), humans.getY(), humans.getTask());
		break;
	default:
		break;
	}
}
