#pragma once
#include "LvlsHandler.h"

class Game
{
public:
	Game()  = default;
	~Game() = default;
	void Run();
private:
	LvlsHandler lvlsHandler; 
	float time = 0;
};

