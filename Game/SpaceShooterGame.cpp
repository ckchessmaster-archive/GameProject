#include "SpaceShooterGame.h"
#include "Logger.h"
#include "Object.h"
#include "SFMLPlayerController.h"

#include <iostream>

using namespace Engine;
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

		
		std::shared_ptr<Object> test1(new Object());
		Engine::Transform trans{};
		trans.position.x = 10; trans.position.y = 10;
		test1->setTransform(trans);
		test1->setName("testObject1");
		std::unique_ptr<Engine::SFMLPlayerController> controller(new Engine::SFMLPlayerController());
		test1->addComponent(std::move(controller));
		scene.addObject(std::move(test1));

		std::shared_ptr<Object> test2(new Object());
		Engine::Transform trans2 {};
		trans2.position.x = 50; trans2.position.y = 50;
		test2->setTransform(trans2);
		test2->setName("testObject2");
		scene.addObject(std::move(test2));
	}

	void SpaceShooterGame::start()
	{
		Engine::Logger::log("Starting SpaceShooterGame...");
		Super::start();
	}

	void SpaceShooterGame::tick()
	{
		Super::tick();

		// game logic here
	}
}