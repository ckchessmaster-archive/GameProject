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

		test1 = new Engine::Object;
		Engine::Transform trans {};
		trans.position.x = 10; trans.position.y = 10;
		test1->setTransform(trans);
		test1->setName("testObject1");
		Engine::SFMLPlayerController* controller = new Engine::SFMLPlayerController(test1);
		test1->addComponent(controller);
		scene.addObject(*test1);
		

		Engine::Object test2;
		Engine::Transform trans2 {};
		trans2.position.x = 50; trans2.position.y = 50;
		test2.setTransform(trans2);
		test2.setName("testObject2");
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