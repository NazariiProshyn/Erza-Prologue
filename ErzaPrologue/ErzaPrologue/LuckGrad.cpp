#include "LuckGrad.h"
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
        "src/images/side/grassDay.png",
        "src/images/side/grassWithStoneDay.png",
        "src/images/side/pathDay.png",
        "src/images/side/pathStonesNight.png",
        "src/images/side/coniferTree.png",
        "src/images/side/deciduousTree.png",
        "src/images/houses/house2_day.png",
        "src/images/houses/house2_night.png",
        "src/images/activeElements/pointer.png",
        "src/images/side/wall_day.png",
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
    const size_t columns = 44;
    const size_t lvl[raws][columns] =
    { {1,7,0,6,0,7,0,6,0,6,0,7,0,6,0,7,0,6,0,2,2,2,0,7,0,6,0,7,0,6,0,7,0,6,0,7,0,6,0,7,0,6,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,6,0,7,0,6,0,6,0,7,0,7,0,6,0,7,0,6,0,2,2,2,0,6,0,6,0,6,0,7,0,6,0,7,0,7,0,7,0,6,0,7,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,7,0,6,0,7,0,7,0,6,0,7,0,7,0,6,0,7,0,2,2,2,0,6,0,7,0,7,0,6,0,7,0,6,0,6,0,6,0,7,0,6,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,6,0,7,0,6,0,6,0,7,0,7,0,6,0,7,0,6,0,2,2,2,0,7,0,6,0,7,0,6,0,7,0,6,0,7,0,6,0,7,0,6,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,7,0,6,0,6,0,7,0,6,0,6,0,7,0,6,0,7,0,2,2,2,0,6,0,7,0,6,0,7,0,6,0,7,0,6,0,7,0,6,0,7,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,1},
      {1,1,0,0,4,0,0,0,5,1,0,0,0,0,0,0,5,1,0,5,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,5,0,0,1,0,0,1},
      {1,0,0,1,0,1,0,1,0,0,0,0,1,0,4,0,1,0,0,0,0,1,0,0,4,1,0,0,0,0,1,0,1,0,0,4,0,0,1,4,0,5,0,1},
      {1,2,2,2,2,2,0,0,4,4,0,0,0,0,0,1,2,2,2,2,2,2,2,2,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1},
      {1,0,0,0,0,2,0,5,0,0,0,5,0,0,0,0,2,4,5,4,5,4,5,2,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1},
      {1,0,0,0,0,2,0,0,0,1,0,0,4,0,5,0,2,5,1,1,1,1,4,2,0,0,0,0,0,2,0,1,0,4,0,2,2,2,2,2,2,2,2,1},
      {1,2,2,2,2,2,2,2,2,2,2,0,0,0,0,0,2,4,1,0,0,1,5,2,0,0,0,0,0,2,5,0,0,1,0,2,2,1,0,4,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,5,1,0,0,1,4,2,2,2,2,2,2,2,0,4,0,0,0,2,2,0,5,0,5,1,0,1},
      {1,0,1,0,0,0,1,0,1,0,2,0,4,0,4,0,2,4,1,2,2,1,5,2,0,5,0,5,0,2,1,0,1,0,0,2,2,0,1,0,0,0,0,1},
      {1,0,0,1,0,0,0,0,0,0,2,1,4,4,1,4,2,5,1,2,2,1,4,2,5,0,5,0,5,2,0,5,0,4,0,2,2,5,0,4,1,4,0,1},
      {1,0,0,0,1,0,0,1,0,0,2,0,1,0,0,0,2,0,1,2,2,1,0,2,0,0,0,0,0,2,0,1,0,0,0,2,2,0,0,0,0,0,0,1},
      {1,8,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,8,1},
      {1,0,0,0,4,1,0,0,5,2,4,0,0,0,4,0,0,4,0,0,4,0,0,1,5,0,2,0,0,0,0,0,1,0,4,2,2,0,0,4,0,1,0,1},
      {1,4,4,1,1,4,1,0,1,2,0,1,0,5,0,0,1,0,0,1,0,0,4,4,0,4,2,5,0,1,4,0,0,5,0,2,2,0,1,4,4,4,0,1},
      {1,1,1,0,0,0,5,0,0,2,0,0,1,0,1,0,5,0,0,5,0,1,0,0,1,0,2,0,5,0,0,1,0,0,0,2,2,5,0,0,1,0,0,1},
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };
/*        "src/images/side/grassDay.png",0
        "src/images/side/grassWithStoneDay.png",1
        "src/images/side/pathDay.png",2
        "src/images/side/pathStonesNight.png",3
        "src/images/side/coniferTree.png",4
        "src/images/side/deciduousTree.png",5
        "src/images/houses/house2_day.png",6
        "src/images/houses/house2_night.png",7
        "src/images/activeElements/pointer.png",8
        "src/images/side/wall_day.png",9
        "src/images/dialogs/dialog1.png"10  */
}

namespace NSTextureConstants
{
    const size_t height = 48;
    const size_t width = 48;
    const size_t heroX = 22;
    const size_t heroY = 4;

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

LuckGrad::LuckGrad()
{
    createTexture();
    createText();
    setHeroPosition();
}

void LuckGrad::textSetings()
{
    textHandler.setFont(NSTextPaths::fontPathMain);
    textHandler.setSize(NSMenuText::activeSize, NSMenuText::simpleSize);
    textHandler.setColour(NSMenuText::activeColor, NSMenuText::simpleColor);
    textHandler.setBorder(NSMenuText::activeBorder, NSMenuText::simpleBorder);
    textHandler.setPosition(NSMenuText::positionX, NSMenuText::positionY, NSMenuText::stepBetweenItems);
}

const sf::Sprite& LuckGrad::getBackground(size_t x, size_t y)
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
        textureHandler.setPosition(NSTextureConstants::path2, x * NSTextureConstants::height,
            y * NSTextureConstants::width);
        return textureHandler.getSprite(NSTextureConstants::path2);
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

const sf::Sprite& LuckGrad::getObjects(size_t x, size_t y)
{
    textureHandler.setPosition(NSLvlInfo::lvl[x][y], x * NSTextureConstants::height,
        y * NSTextureConstants::width);
    return textureHandler.getSprite(NSLvlInfo::lvl[x][y]);
}

const size_t LuckGrad::getRaws() const
{
    return NSLvlInfo::raws;
}

const size_t LuckGrad::getColumns() const
{
    return NSLvlInfo::columns;
}

bool LuckGrad::checkForObjects(size_t x, size_t y)
{
    if (NSLvlInfo::lvl[x][y] <= NSTextureConstants::path2)
    {
        return false;
    }
    return true;
}

void LuckGrad::setHeroPosition()
{
    hero.setPosition(NSTextureConstants::heroX * NSTextureConstants::height,
        NSTextureConstants::heroY * NSTextureConstants::width);
}

void LuckGrad::setHeroPosition(size_t x, size_t y)
{
    hero.setPosition(x, y);
}

void LuckGrad::setMisiom(size_t mision)
{
    currentMission = mision;
}

bool LuckGrad::checkPosition(size_t x)
{
    return (hero.getX() / NSTextureConstants::height == x);
}

int LuckGrad::getViewX()
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

int LuckGrad::getViewY()
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

void LuckGrad::createTexture()
{
    for (size_t i = 0; i < NSTexturePaths::texturePaths.size(); ++i)
    {
        textureHandler.addTexture(NSTexturePaths::texturePaths[i]);
    }
}

void LuckGrad::createText()
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

void LuckGrad::misiisonSettings()
{
    mission.setFont(NSTextPaths::fontPathAdd);
    mission.setSize(NSMenuAddText::activeSize, NSMenuAddText::simpleSize);
    mission.setColour(NSMenuAddText::activeColor, NSMenuAddText::simpleColor);
    mission.setBorder(NSMenuAddText::activeBorder, NSMenuAddText::simpleBorder);
}



void LuckGrad::textSetingsAdd()
{
    textHandlerAdd.setFont(NSTextPaths::fontPathAdd);
    textHandlerAdd.setSize(NSMenuAddText::activeSize, NSMenuAddText::simpleSize);
    textHandlerAdd.setColour(NSMenuAddText::activeColor, NSMenuAddText::simpleColor);
    textHandlerAdd.setBorder(NSMenuAddText::activeBorder, NSMenuAddText::simpleBorder);
    textHandlerAdd.setPosition(NSMenuAddText::positionX, NSMenuAddText::positionY, NSMenuAddText::stepBetweenItems);
}

void LuckGrad::increaseMission()
{
    if (currentMission == 0)
    {
        currentMission = 1;
    }
}

const sf::Sprite& LuckGrad::getDialog()
{
    textureHandler.setPosition(NSTextureConstants::dialog,
        0, getViewX());
    return textureHandler.getSprite(NSTextureConstants::dialog);
}

Text LuckGrad::getMission()
{
    mission.setPosition(getViewX(), getViewY(), NSMenuAddText::stepBetweenItems);
    return mission.getText(currentMission);
}
