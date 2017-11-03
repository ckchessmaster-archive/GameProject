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
		test1.setLocation(Engine::Location{ 10, 10 });
		Engine::SFMLPlayerController* controller = new Engine::SFMLPlayerController(&test1);
		test1.addComponent(controller);
		scene.addObject(test1);

		Engine::Object test2;
		test2.setLocation(Engine::Location{ 50, 50 });
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