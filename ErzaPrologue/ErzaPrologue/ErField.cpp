#include "ErField.h"
#include <iostream>
namespace NSTextPaths
{
    const std::string fontPathMain = "src/fonts/MainFont.ttf";
    const std::string fontPathAdd = "src/fonts/SecondaryFont.ttf";
};

namespace NSTexturePaths
{
    const std::vector<std::string> texturePaths =
    {
        "src/images/side/pathNight.png",
        "src/images/side/grassWithStoneNight.png",
        "src/images/side/pathNight.png",
        "src/images/side/pathStonesNight.png",
        "src/images/side/coniferTreeNight.png",
        "src/images/side/deciduousTreeNight.png",
        "src/images/activeElements/houseNight2.png",
        "src/images/activeElements/pointer.png",
        "src/images/side/fence.png",
        "src/images/side/fence2.png",
        "src/images/dialogs/dialog1.png"
    };


}

namespace NSMenuText
{
    const std::vector<std::string> menuItems =
    {
        //  "HEALTH:",
        //   "SHIELD:",
        //  "DAMAGE:"
    };
    const std::vector<std::string> misisions =
    {
        "Find a hut in the woods",
        "Find way to Luckgrad"
    };

    const sf::Color   activeColor = sf::Color::Black;
    const sf::Color   simpleColor = sf::Color::Black;

    const unsigned int activeSize = 24;
    const unsigned int simpleSize = 24;

    const float      activeBorder = 1.0f;
    const float      simpleBorder = 1.0f;

    const float positionX = 50.0f;
    const float positionY = 50.0f;
    const float stepBetweenItems = 20.0f;

}

namespace NSMenuAddText
{
    const std::vector<std::string> addText =
    {
        // "HutInTheWoods"
    };

    const sf::Color   activeColor = sf::Color::Red;
    const sf::Color   simpleColor = sf::Color::Green;

    const unsigned int activeSize = 24;
    const unsigned int simpleSize = 24;

    const float      activeBorder = 1.2f;
    const float      simpleBorder = 1.2f;

    const float        positionX = 1775.0f;
    const float        positionY = 20.0f;
    const float        stepBetweenItems = 100.0f;

}

namespace NSLvlInfo
{
    const size_t raws = 27;
    const size_t columns = 45;
    const size_t lvl[raws][columns] =
    { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };
/*        "src/images/side/pathNight.png",
        "src/images/side/grassWithStoneNight.png",
        "src/images/side/pathNight.png",
        "src/images/side/pathStonesNight.png",
        "src/images/side/coniferTreeNight.png",
        "src/images/side/deciduousTreeNight.png",
        "src/images/activeElements/houseNight2.png",
        "src/images/activeElements/pointer.png",
        "src/images/side/fence.png",
        "src/images/side/fence2.png",
        "src/images/dialogs/dialog1.png"*/
}

namespace NSTextureConstants
{
    const size_t height = 48;
    const size_t width = 48;
    const size_t heroX = 10;
    const size_t heroY = 1;

    const size_t grass = 0;
    const size_t stone = 1;
    const size_t path1 = 2;
    const size_t path2 = 3;
    const size_t fence = 8;
    const size_t fenc2 = 9;
    const size_t dialog = 10;


}

namespace NSViewCoordinates
{
    const unsigned int windowHeight = 1080;
    const unsigned int windowWidth = 1920;
    const unsigned int centr = 2;
    const unsigned int coef = 3;
}

ErField::ErField()
{
    createTexture();
    createText();
    setHeroPosition();
}

void ErField::textSetings()
{
    textHandler.setFont(NSTextPaths::fontPathMain);
    textHandler.setSize(NSMenuText::activeSize, NSMenuText::simpleSize);
    textHandler.setColour(NSMenuText::activeColor, NSMenuText::simpleColor);
    textHandler.setBorder(NSMenuText::activeBorder, NSMenuText::simpleBorder);
    textHandler.setPosition(NSMenuText::positionX, NSMenuText::positionY, NSMenuText::stepBetweenItems);
}

const sf::Sprite& ErField::getBackground(size_t x, size_t y)
{
    switch (NSLvlInfo::lvl[x][y])
    {
    case NSTextureConstants::grass:
        textureHandler.setPosition(NSTextureConstants::grass, x * NSTextureConstants::height,
            y * NSTextureConstants::width);
        return textureHandler.getSprite(NSTextureConstants::grass);
        break;
    case NSTextureConstants::stone:
        textureHandler.setPosition(NSTextureConstants::stone, x * NSTextureConstants::height,
            y * NSTextureConstants::width);
        return textureHandler.getSprite(NSTextureConstants::stone);
        break;
    case NSTextureConstants::path1:
        textureHandler.setPosition(NSTextureConstants::path1, x * NSTextureConstants::height,
            y * NSTextureConstants::width);
        return textureHandler.getSprite(NSTextureConstants::path1);
        break;
    case NSTextureConstants::path2:
        textureHandler.setPosition(NSTextureConstants::path2, x * NSTextureConstants::height,
            y * NSTextureConstants::width);
        return textureHandler.getSprite(NSTextureConstants::path2);
        break;
    case NSTextureConstants::fence:
        textureHandler.setPosition(NSTextureConstants::path1, x * NSTextureConstants::height,
            y * NSTextureConstants::width);
        return textureHandler.getSprite(NSTextureConstants::path1);
        break;
    case NSTextureConstants::fenc2:
        textureHandler.setPosition(NSTextureConstants::path1, x * NSTextureConstants::height,
            y * NSTextureConstants::width);
        return textureHandler.getSprite(NSTextureConstants::path1);
        break;
    default:
        break;
    }
    textureHandler.setPosition(NSTextureConstants::grass, x * NSTextureConstants::height,
        y * NSTextureConstants::width);
    return textureHandler.getSprite(NSTextureConstants::grass);
}

const sf::Sprite& ErField::getObjects(size_t x, size_t y)
{
    textureHandler.setPosition(NSLvlInfo::lvl[x][y], x * NSTextureConstants::height,
        y * NSTextureConstants::width);
    return textureHandler.getSprite(NSLvlInfo::lvl[x][y]);
}

const size_t ErField::getRaws() const
{
    return NSLvlInfo::raws;
}

const size_t ErField::getColumns() const
{
    return NSLvlInfo::columns;
}

bool ErField::checkForObjects(size_t x, size_t y)
{
    if (NSLvlInfo::lvl[x][y] <= NSTextureConstants::path2)
    {
        return false;
    }
    return true;
}

void ErField::setHeroPosition()
{
    hero.setPosition(NSTextureConstants::heroX * NSTextureConstants::height,
        NSTextureConstants::heroY * NSTextureConstants::width);
}

void ErField::setHeroPosition(size_t x, size_t y)
{
    hero.setPosition(x, y);
}

void ErField::setMisiom(size_t mision)
{
    currentMission = mision;
}

bool ErField::checkPosition(size_t x)
{
    return (hero.getX() / NSTextureConstants::height == x);
}

int ErField::getViewX()
{
    tempCoordinate = hero.getY();
    if (tempCoordinate > NSTextureConstants::width
        * NSLvlInfo::columns - NSViewCoordinates::windowWidth
        / NSViewCoordinates::centr)
    {
        return NSTextureConstants::width
            * NSLvlInfo::columns - NSViewCoordinates::windowWidth
            / NSViewCoordinates::centr;
    }
    if (tempCoordinate < NSViewCoordinates::windowWidth
        / NSViewCoordinates::centr)
    {
        return NSViewCoordinates::windowWidth
            / NSViewCoordinates::centr;
    }

    return tempCoordinate;
}

int ErField::getViewY()
{
    tempCoordinate = hero.getX();

    if (tempCoordinate > NSTextureConstants::height
        * NSLvlInfo::raws - NSViewCoordinates::windowHeight
        / NSViewCoordinates::centr)
    {
        return NSTextureConstants::height
            * NSLvlInfo::raws - NSViewCoordinates::windowHeight
            / NSViewCoordinates::centr;
    }

    if (tempCoordinate < NSViewCoordinates::windowHeight
        / NSViewCoordinates::centr)
    {
        return NSViewCoordinates::windowHeight
            / NSViewCoordinates::centr;
    }
    return tempCoordinate;
}

void ErField::createTexture()
{
    for (size_t i = 0; i < NSTexturePaths::texturePaths.size(); ++i)
    {
        textureHandler.addTexture(NSTexturePaths::texturePaths[i]);
    }
}

void ErField::createText()
{
    for (size_t i = 0; i < NSMenuText::menuItems.size(); ++i)
    {
        textHandler.addTextItem(NSMenuText::menuItems[i]);
    }

    for (size_t i = 0; i < NSMenuAddText::addText.size(); ++i)
    {
        textHandlerAdd.addTextItem(NSMenuAddText::addText[i]);
    }
    for (size_t i = 0; i < NSMenuText::misisions.size(); ++i)
    {
        mission.addTextItem(NSMenuText::misisions[i]);
    }

    textSetingsAdd();
    textSetings();
    misiisonSettings();
}

void ErField::misiisonSettings()
{
    mission.setFont(NSTextPaths::fontPathAdd);
    mission.setSize(NSMenuAddText::activeSize, NSMenuAddText::simpleSize);
    mission.setColour(NSMenuAddText::activeColor, NSMenuAddText::simpleColor);
    mission.setBorder(NSMenuAddText::activeBorder, NSMenuAddText::simpleBorder);
}



void ErField::textSetingsAdd()
{
    textHandlerAdd.setFont(NSTextPaths::fontPathAdd);
    textHandlerAdd.setSize(NSMenuAddText::activeSize, NSMenuAddText::simpleSize);
    textHandlerAdd.setColour(NSMenuAddText::activeColor, NSMenuAddText::simpleColor);
    textHandlerAdd.setBorder(NSMenuAddText::activeBorder, NSMenuAddText::simpleBorder);
    textHandlerAdd.setPosition(NSMenuAddText::positionX, NSMenuAddText::positionY, NSMenuAddText::stepBetweenItems);
}

void ErField::increaseMission()
{
    if (currentMission == 0)
    {
        currentMission = 1;
    }
}

const sf::Sprite& ErField::getDialog()
{
    textureHandler.setPosition(NSTextureConstants::dialog,
        0, getViewX());
    return textureHandler.getSprite(NSTextureConstants::dialog);
}

Text ErField::getMission()
{
    mission.setPosition(getViewX(), getViewY(), NSMenuAddText::stepBetweenItems);
    return mission.getText(currentMission);
}
