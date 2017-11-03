#include "Game.h"
#include "Logger.h"

#include <fstream>
#include <chrono>

namespace Engine {
	Game::Game()
	{
	}

	Game::~Game()
	{
	}

	void Game::loadConfig()
	{
		tps = 30;
	}

	void Game::startThread(Game* game)
	{
		game->start();
	}

	void Game::init()
	{
		gameState = starting;
		loadConfig();
	}

	void Game::start()
	{

		int tickTime = 1000 / tps; // in ms
		gameState = running;
		auto lastTick = std::chrono::high_resolution_clock::now();

		// main game loop
		while(gameState == running) {
			// Check if it's time to tick yet
			auto currentTime = std::chrono::high_resolution_clock::now();
			int timeSinceLastTick = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastTick).count();
			if (timeSinceLastTick >= tickTime) {
				tick();
				lastTick = std::chrono::high_resolution_clock::now();
			}//end tick check
		}//end main game loop
	}//end start()

	void Game::tick()
	{
		scene.tick();
	}
}