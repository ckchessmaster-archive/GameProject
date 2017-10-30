#include "Engine.h"

#include <iostream>

namespace Engine {
	Engine::Engine()
	{
	}


	Engine::~Engine()
	{
	}

	void Engine::init(Game* newGame)
	{
		std::cout << "Initializing game...\n";
		game = newGame;
		game->init();
	}

	void Engine::start()
	{
		std::cout << "Starting game...\n";
		game->start();
	}
}