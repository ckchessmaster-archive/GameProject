#include "MyGame.h"

namespace Game {

	MyGame::MyGame()
	{
	}


	MyGame::~MyGame()
	{
	}

	Engine::Game* MyGame::createNewMyGame()
	{
		return new MyGame();
	}

	// register our class with the engine as the main game
	int MyGame::reg = Engine::Engine::registerGame(&createNewMyGame);
}