#include "Menu.h"
namespace NSTextPaths
{
    const std::string fontPathMain = "src/fonts/MainFont.ttf";
    const std::string fontPathAdd = "src/fonts/SecondaryFont.ttf";
};

namespace NSTexturePaths
{
    const std::vector<std::string> texturePaths =
    {
        "src/images/side/menuBack.png"
    };
    const size_t backTexture = 0;

    // MENUPHOTO = 0
}

namespace NSMenuText
{
    const std::vector<std::string> menuItems =
    {
        "CONTINUE",
        "SAVED GAMES",
        "NEW GAME",
        "EXIT"
    };

    const sf::Color   activeColor = sf::Color::Green;
    const sf::Color   simpleColor = sf::Color::Black;

    const unsigned int activeSize = 72;
    const unsigned int simpleSize = 60;

    const float      activeBorder = 4.0f;
    const float      simpleBorder = 2.8f;

    const float        positionX = 800.0f;
    const float        positionY = 400.0f;
    const float        stepBetweenItems = 100.0f;

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
    const size_t raws    = 1;
    const size_t columns = 1;
    const size_t lvl[raws][columns] = { { 0 } };
}

Menu::Menu()
{
    createTexture();
    createText();
}

void Menu::createTexture()
{
    for (size_t i = 0; i < NSTexturePaths::texturePaths.size(); ++i)
    {
        textureHandler.addTexture(NSTexturePaths::texturePaths[i]);
    }
}

void Menu::createText()
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

void Menu::textSetings()
{
    textHandler.setFont(NSTextPaths::fontPathMain);
    textHandler.setSize(NSMenuText::activeSize, NSMenuText::simpleSize);
    textHandler.setColour(NSMenuText::activeColor, NSMenuText::simpleColor);
    textHandler.setBorder(NSMenuText::activeBorder, NSMenuText::simpleBorder);
    textHandler.setPosition(NSMenuText::positionX, NSMenuText::positionY, NSMenuText::stepBetweenItems);
}

const sf::Sprite& Menu::getBackground(size_t x, size_t y)
{

    return textureHandler.getSprite(NSTexturePaths::backTexture);
}

const size_t Menu::getRaws() const
{
    return NSLvlInfo::raws;
}

const size_t Menu::getColumns() const
{
    return NSLvlInfo::columns;
}

void Menu::textSetingsAdd()
{
    textHandlerAdd.setFont(NSTextPaths::fontPathAdd);
    textHandlerAdd.setSize(NSMenuAddText::activeSize, NSMenuAddText::simpleSize);
    textHandlerAdd.setColour(NSMenuAddText::activeColor, NSMenuAddText::simpleColor);
    textHandlerAdd.setBorder(NSMenuAddText::activeBorder, NSMenuAddText::simpleBorder);
    textHandlerAdd.setPosition(NSMenuAddText::positionX, NSMenuAddText::positionY, NSMenuAddText::stepBetweenItems);
}
