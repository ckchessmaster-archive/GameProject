#include "SpaceShooterGame.h"
#include "Logger.h"

#include <iostream>

namespace Game {

	SpaceShooterGame::SpaceShooterGame()
	{
		Super();
	}


	SpaceShooterGame::~SpaceShooterGame()
	{
	}

	void SpaceShooterGame::init() 
	{
		Super::init();

		Engine::Logger::log("Initializing SpaceShooterGame...");
	}

	void SpaceShooterGame::start()
	{
		Super::start();

		Engine::Logger::log("Starting SpaceShooterGame...");
	}

	void SpaceShooterGame::tick()
	{
		Super::tick();
		std::cout << "tick!";
		// game logic here
	}
}