#include "Game.h"

#include <iostream>

namespace Engine {
	Game::Game()
	{
	}


	Game::~Game()
	{
	}

	void Game::startThread(Game* game)
	{
		game->start();
	}

	void Game::init()
	{
		tps = 60;
	}

	void Game::start()
	{
	}

	void Game::tick()
	{
	}
}