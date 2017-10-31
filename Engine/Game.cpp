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
		gameState = starting;
		tps = 1;
	}

	void Game::start()
	{
		int tickTime = 1000;
		gameState = running;
		auto lastTick = std::chrono::system_clock::now();
		while(gameState == running) {
			auto currentTime = std::chrono::system_clock::now();
			// Check if it's time to tick yet
			if ((std::chrono::duration<double>(currentTime - lastTick).count()) >= tickTime) {
				tick();
			}//end tick check
		}//end main game loop
	}//end start()

	void Game::tick()
	{
	}
}