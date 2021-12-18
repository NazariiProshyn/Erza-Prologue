#pragma once
#include "Lvl.h"
class SavedGames: public Lvl
{
public:
	SavedGames();
	void textSetings() override;
	const sf::Sprite& getBackground(size_t x, size_t y)  override;
	virtual const size_t getRaws()    const override;
	virtual const size_t getColumns() const override;

protected:
	void createTexture()  override;
	void createText()     override;
	void textSetingsAdd() override;
};

