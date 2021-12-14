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
        "src/images/side/grassNight.png",
        "src/images/side/grassWithStoneNight.png",
        "src/images/side/pathNight.png",
        "src/images/side/pathStonesNight.png",
        "src/images/side/coniferTreeNight.png",
        "src/images/side/deciduousTreeNight.png",
        "src/images/activeElements/houseNight2.png",
        "src/images/activeElements/pointer.png"
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

    const sf::Color   activeColor = sf::Color::Black;
    const sf::Color   simpleColor = sf::Color::Black;

    const unsigned int activeSize = 12;
    const unsigned int simpleSize = 12;

    const float      activeBorder = 1.0f;
    const float      simpleBorder = 1.0f;

    const float positionX        = 50.0f;
    const float positionY        = 50.0f;
    const float stepBetweenItems = 20.0f;

}

namespace NSMenuAddText
{
    const std::vector<std::string> addText =
    {
        "HutInTheWoods"
    };

    const sf::Color   activeColor = sf::Color::Red;
    const sf::Color   simpleColor = sf::Color::Green;

    const unsigned int activeSize = 18;
    const unsigned int simpleSize = 14;

    const float      activeBorder = 1.2f;
    const float      simpleBorder = 1.2f;

    const float        positionX = 1775.0f;
    const float        positionY = 20.0f;
    const float        stepBetweenItems = 100.0f;

}

namespace NSLvlInfo
{
    const size_t raws = 25;
    const size_t columns = 45;
    const size_t lvl[raws][columns] = 
    { {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
      {1,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,1},
      {1,0,5,0,4,0,0,0,0,0,0,0,0,0,0,0,4,0,0,4,0,0,0,4,0,0,4,0,0,5,0,0,0,0,5,0,0,5,4,0,0,4,0,0,1},
      {1,0,0,0,0,0,4,0,0,5,0,5,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,5,0,0,0,1},
      {1,0,0,0,4,0,0,0,0,0,5,0,4,0,5,0,0,0,0,5,4,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,5,0,0,0,0,0,4,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,7,1},
      {1,0,0,0,5,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,4,0,0,0,0,2,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,5,5,0,4,0,5,4,0,4,0,0,0,0,6,0,0,5,0,0,0,0,0,0,2,0,4,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,4,0,0,4,0,0,0,0,0,0,0,0,1},
      {1,2,2,2,2,2,2,2,2,0,0,4,0,0,2,2,2,0,0,0,0,0,5,0,0,2,0,0,4,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,2,0,0,0,0,5,2,2,2,0,0,0,0,5,0,0,0,2,0,0,0,0,0,0,0,4,0,0,0,4,0,0,0,0,0,0,1},
      {1,0,0,4,0,0,0,0,2,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,2,0,0,4,0,5,4,0,0,5,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,4,0,4,0,2,0,0,5,0,5,0,0,3,0,0,0,0,0,5,0,0,2,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,4,0,0,0,0,0,2,0,0,0,4,0,0,0,3,0,0,4,5,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,4,0,5,0,0,5,0,0,1},
      {1,0,0,4,0,0,5,0,2,0,0,0,0,0,0,0,3,0,0,0,0,0,0,4,0,2,0,0,4,0,4,0,0,5,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,4,0,0,0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,0,0,5,0,0,0,0,0,4,0,0,0,0,0,4,0,0,1},
      {1,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,4,5,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,5,4,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,4,0,0,0,1},
      {1,4,0,0,4,0,0,0,0,0,0,4,0,4,0,0,4,0,4,0,0,0,0,0,0,0,4,0,0,0,0,4,0,0,0,5,0,5,0,4,0,0,0,0,1},
      {1,0,4,0,0,4,4,4,0,0,0,0,0,0,4,0,0,0,0,0,4,0,4,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,5,4,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
      {1,0,4,0,0,4,0,5,0,0,0,0,0,0,4,0,0,0,0,0,4,0,4,0,0,0,0,0,4,0,0,0,0,0,0,5,0,0,0,0,0,5,0,0,1},
      {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}
    };
    // GRASSNIGHT = 0
    // GRASSNIGHTWITHSTONE = 1
    // NIGHTPATH   = 2
    // NIGHTPATHV2 = 3
    // TREE1 = 4
    // TREE2 = 5
    // HOUSE = 6
    // POINTER = 7
}

namespace NSTextureConstants
{
    const size_t height   = 48;
    const size_t width    = 48;
    const size_t heroX = 10;
    const size_t heroY = 1;

    const size_t grass = 0;
    const size_t stone = 1;
    const size_t path1 = 2;
    const size_t path2 = 3;


}

HutInTheWoods::HutInTheWoods()
{
    createTexture();
    createText();
    setHeroPosition();
}

void HutInTheWoods::textSetings()
{
    textHandler.setFont(NSTextPaths::fontPathMain);
    textHandler.setSize(NSMenuText::activeSize, NSMenuText::simpleSize);
    textHandler.setColour(NSMenuText::activeColor, NSMenuText::simpleColor);
    textHandler.setBorder(NSMenuText::activeBorder, NSMenuText::simpleBorder);
    textHandler.setPosition(NSMenuText::positionX, NSMenuText::positionY, NSMenuText::stepBetweenItems);
}

const sf::Sprite& HutInTheWoods::getBackground(size_t x, size_t y)
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
    default:
        break;
    }
    textureHandler.setPosition(NSTextureConstants::grass,x * NSTextureConstants::height,
        y * NSTextureConstants::width);
    return textureHandler.getSprite(NSTextureConstants::grass);
}

const sf::Sprite& HutInTheWoods::getObjects(size_t x, size_t y)
{
        textureHandler.setPosition(NSLvlInfo::lvl[x][y], x * NSTextureConstants::height,
            y * NSTextureConstants::width);
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

bool HutInTheWoods::checkForObjects(size_t x, size_t y)
{
    if (NSLvlInfo::lvl[x][y] <= NSTextureConstants::path2)
    {
        return false;
    }
    return true;
}

void HutInTheWoods::setHeroPosition()
{
    hero.setPosition(NSTextureConstants::heroX * NSTextureConstants::height,
        NSTextureConstants::heroY * NSTextureConstants::width);
}

bool HutInTheWoods::checkPosition(size_t x)
{
    return (hero.getX() / NSTextureConstants::height == x);
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
