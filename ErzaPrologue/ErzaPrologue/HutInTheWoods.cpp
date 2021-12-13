#include "HutInTheWoods.h"
namespace NSTextPaths
{
    const std::string fontPathMain = "src/fonts/MainFont.ttf";
    const std::string fontPathAdd = "src/fonts/SecondaryFont.ttf";
};

namespace NSTexturePaths
{
    const std::vector<std::string> texturePaths =
    {
        "src/images/side/coniferTree.png",
        "src/images/side/grassDay.png",
        "src/images/side/pathStonesDay.png"
    };
}

namespace NSMenuText
{
    const std::vector<std::string> menuItems =
    {
        "HEALTH:",
        "SHIELD:",
        "DAMAGE:"
    };

    const sf::Color   activeColor = sf::Color::Red;
    const sf::Color   simpleColor = sf::Color::Red;

    const unsigned int activeSize = 12;
    const unsigned int simpleSize = 12;

    const float      activeBorder = 1.0f;
    const float      simpleBorder = 1.0f;

    const float        positionX = 80.0f;
    const float        positionY = 80.0f;
    const float        stepBetweenItems = 20.0f;

}

namespace NSMenuAddText
{
    const std::vector<std::string> addText =
    {
        "ERZA:prologue"
    };

    const sf::Color   activeColor = sf::Color::Red;
    const sf::Color   simpleColor = sf::Color::Green;

    const unsigned int activeSize = 100;
    const unsigned int simpleSize = 100;

    const float      activeBorder = 4.0f;
    const float      simpleBorder = 2.8f;

    const float        positionX = 700.0f;
    const float        positionY = 250.0f;
    const float        stepBetweenItems = 100.0f;

}

namespace NSLvlInfo
{
    const size_t raws = 1;
    const size_t columns = 2;
    const size_t lvl[raws][columns] = { 0,1 };
    // GRASSNIGHT = 0
    //
}

HutInTheWoods::HutInTheWoods()
{
    createTexture();
    createText();
}

void HutInTheWoods::textSetings()
{
    textHandler.setFont(NSTextPaths::fontPathMain);
    textHandler.setSize(NSMenuText::activeSize, NSMenuText::simpleSize);
    textHandler.setColour(NSMenuText::activeColor, NSMenuText::simpleColor);
    textHandler.setBorder(NSMenuText::activeBorder, NSMenuText::simpleBorder);
    textHandler.setPosition(NSMenuText::positionX, NSMenuText::positionY, NSMenuText::stepBetweenItems);
}

const sf::Sprite& HutInTheWoods::getSprite(size_t x, size_t y)
{
    return textureHandler.getSprite(NSLvlInfo::lvl[x][y]);
}

const size_t HutInTheWoods::getRaws() const
{
    return NSLvlInfo::raws;
}

const size_t HutInTheWoods::getColumns() const
{
    return NSLvlInfo::columns;
}

void HutInTheWoods::createTexture()
{
    for (size_t i = 0; i < NSTexturePaths::texturePaths.size(); ++i)
    {
        textureHandler.addTexture(NSTexturePaths::texturePaths[i]);
    }
}

void HutInTheWoods::createText()
{
    for (size_t i = 0; i < NSMenuText::menuItems.size(); ++i)
    {
        textHandler.addTextItem(NSMenuText::menuItems[i]);
    }

    for (size_t i = 0; i < NSMenuAddText::addText.size(); ++i)
    {
        textHandlerAdd.addTextItem(NSMenuAddText::addText[i]);
    }

    textSetingsAdd();
    textSetings();
}

void HutInTheWoods::textSetingsAdd()
{
    textHandlerAdd.setFont(NSTextPaths::fontPathAdd);
    textHandlerAdd.setSize(NSMenuAddText::activeSize, NSMenuAddText::simpleSize);
    textHandlerAdd.setColour(NSMenuAddText::activeColor, NSMenuAddText::simpleColor);
    textHandlerAdd.setBorder(NSMenuAddText::activeBorder, NSMenuAddText::simpleBorder);
    textHandlerAdd.setPosition(NSMenuAddText::positionX, NSMenuAddText::positionY, NSMenuAddText::stepBetweenItems);
}
