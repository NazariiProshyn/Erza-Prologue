#pragma once
#include "TextureHandler.h"
class Creature
{
public:
	Creature() = default;
	~Creature() = default;
	virtual const sf::Sprite& getSprite() = 0;

	virtual void move(float gameTime) = 0;
	virtual void setWay(const std::string& way) = 0;
	virtual void setPosition(size_t x, size_t y) { X = x; Y = y; };

	virtual size_t getX() = 0;
	virtual size_t getY() = 0;
protected:
	virtual void createTexture() = 0;
	virtual void moveLeft() = 0;
	virtual void moveRight() = 0;
	virtual void moveUp() = 0;
	virtual void moveDown() = 0;
	
	TextureHandler textureHandler;
	float currentFrame = 0;
	float time = 0;
	size_t  currentWay = 0;
	size_t X;
	size_t Y;
	const float speed = 0.12;
	const float animationSpeed = 0.005;
};

