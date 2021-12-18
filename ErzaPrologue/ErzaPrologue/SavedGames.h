#pragma once
#include "Lvl.h"
#include <fstream>
class SavedGames: public Lvl
{
public:
	SavedGames();
	void textSetings() override;
	const sf::Sprite& getBackground(size_t x, size_t y)  override;
	virtual const size_t getRaws()    const override;
	virtual const size_t getColumns() const override;
	void loadInfo();
	size_t getSave() { return textHandler.getNumOfActiveText(); };

protected:
	void createTexture()  override;
	void createText()     override;
	void textSetingsAdd() override;
	void loadSaves();
	std::ifstream fin;
};

