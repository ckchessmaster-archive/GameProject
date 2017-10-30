#include "SpaceShooterGame.h"

#include <iostream>

namespace Game {

	SpaceShooterGame::SpaceShooterGame()
	{
		Super();
	}


	SpaceShooterGame::~SpaceShooterGame()
	{
	}

	void SpaceShooterGame::start()
	{
		Super::start();

		std::cout << "Hello World!\n";
	}
}