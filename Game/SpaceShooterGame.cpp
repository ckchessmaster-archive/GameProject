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
	}

	void SpaceShooterGame::tick()
	{
		Super::tick();

		// game logic here
	}
}