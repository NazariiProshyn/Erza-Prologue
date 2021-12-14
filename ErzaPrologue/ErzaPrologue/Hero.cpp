#include "Hero.h"
namespace NSTexturePaths
{
    const std::vector<std::string> texturePaths =
    {
        "src/images/hero/Up0.png",//0
        "src/images/hero/Up1.png",
        "src/images/hero/Up2.png",
        "src/images/hero/Up3.png",
        "src/images/hero/Up4.png",
        "src/images/hero/Down0.png",//5
        "src/images/hero/Down1.png",
        "src/images/hero/Down2.png",
        "src/images/hero/Down3.png",
        "src/images/hero/Down4.png",
        "src/images/hero/Left0.png",//10
        "src/images/hero/Left1.png",
        "src/images/hero/Left2.png",
        "src/images/hero/Left3.png",
        "src/images/hero/Left4.png",
        "src/images/hero/Left5.png",
        "src/images/hero/Left6.png",
        "src/images/hero/Left7.png",
        "src/images/hero/Right0.png",//18
        "src/images/hero/Right1.png",
        "src/images/hero/Right2.png",
        "src/images/hero/Right3.png",
        "src/images/hero/Right4.png",
        "src/images/hero/Right5.png",
        "src/images/hero/Right6.png",
        "src/images/hero/Right7.png"
    };

}


namespace NSTextureConstants
{
    const size_t numOfFrontTexture = 5;
    const size_t numOfBackTextures = 8;
    const size_t minTexture = 0;

    const size_t sizeX = 32;
    const size_t sizeY = 64;

    const std::string LEFT = "LEFT";
    const std::string RIGHT = "RIGHT";
    const std::string UP = "UP";
    const std::string DOWN = "DOWN";
}
enum class EListOfWays
{
    UP    = 0,
    DOWN  = 5,
    LEFT  = 10,
    RIGHT = 18
};

Hero::Hero()
{
    createTexture();
}

const sf::Sprite& Hero::getSprite()
{
    textureHandler.setPosition(currentWay + size_t(currentFrame), X, Y);
    return textureHandler.getSprite(currentWay + size_t(currentFrame));
}

void Hero::move(float gameTime)
{
    time = gameTime;
    switch (currentWay)
    {
    case static_cast<size_t>(EListOfWays::UP):
        return moveUp();
        break;
    case static_cast<size_t>(EListOfWays::DOWN):
        return moveDown();
        break;
    case static_cast<size_t>(EListOfWays::LEFT):
        return moveLeft();
        break;
    case static_cast<size_t>(EListOfWays::RIGHT):
        return moveRight();
        break;
    default:
        break;
    }
}


void Hero::setWay(const std::string& way)
{
    if (way == NSTextureConstants::LEFT)
    {
        currentWay = static_cast<size_t>(EListOfWays::LEFT);
    }
    if (way == NSTextureConstants::RIGHT)
    {
        currentWay = static_cast<size_t>(EListOfWays::RIGHT);
    }
    if (way == NSTextureConstants::UP)
    {
        currentWay = static_cast<size_t>(EListOfWays::UP);
    }
    if (way == NSTextureConstants::DOWN)
    {
        currentWay = static_cast<size_t>(EListOfWays::DOWN);
    }
}

size_t Hero::getX()
{
    return X;
}

size_t Hero::getY()
{
    return Y;
}

void Hero::createTexture()
{
    for (size_t i = 0; i < NSTexturePaths::texturePaths.size(); ++i)
    {
        textureHandler.addTexture(NSTexturePaths::texturePaths[i]);
    }
}

void Hero::moveLeft()
{
    currentFrame += animationSpeed * time;
    if (currentFrame > NSTextureConstants::numOfBackTextures)
    {
        currentFrame = NSTextureConstants::minTexture;
    }
    Y = Y - (speed * time);
}

void Hero::moveRight()
{
    currentFrame += animationSpeed * time;
    if (currentFrame > NSTextureConstants::numOfBackTextures)
    {
        currentFrame = NSTextureConstants::minTexture;
    }
    Y = Y + (speed * time);
}

void Hero::moveUp()
{
    currentFrame += animationSpeed * time;
    if (currentFrame > NSTextureConstants::numOfFrontTexture)
    {
        currentFrame = NSTextureConstants::minTexture;
    }
    X = X - (speed * time);
}

void Hero::moveDown()
{
    currentFrame += animationSpeed * time;
    if (currentFrame > NSTextureConstants::numOfFrontTexture)
    {
        currentFrame = NSTextureConstants::minTexture;
    }
    X = X + (speed * time);
}
