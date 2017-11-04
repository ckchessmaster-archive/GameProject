#include "SpaceShooterGame.h"
#include "Logger.h"
#include "Object.h"
#include "SFMLPlayerController.h"

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

		Engine::Object test1;
		Engine::Location loc {};
		loc.x = 10; loc.y = 10;
		test1.setLocation(loc);
		Engine::SFMLPlayerController* controller = new Engine::SFMLPlayerController(&test1);
		test1.addComponent(controller);
		scene.addObject(test1);

		Engine::Object test2;
		Engine::Location loc2 {};
		loc2.x = 50; loc2.y = 50;
		test2.setLocation(loc2);
		scene.addObject(test2);
	}

	void SpaceShooterGame::start()
	{
		Engine::Logger::log("Starting SpaceShooterGame...");
		Super::start();
	}

	void SpaceShooterGame::tick()
	{
		Super::tick();
		//std::cout << "tick!\n";
		// game logic here
	}
}