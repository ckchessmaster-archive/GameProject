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
		game = newGame;
		game->init();
	}

	void Engine::start()
	{
		game->start();
	}
}