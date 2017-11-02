#include "Engine.h"
#include "Logger.h"
#include "SFML2DRenderer.h"

#include <thread>

namespace Engine {
	Engine::Engine()
	{
	}

	Engine::~Engine()
	{
	}

	void Engine::init(Game* newGame)
	{
		Logger::init();
		game = newGame;
		game->init();

		renderer = new SFML2DRenderer();
		renderer->init(game);
	}

	void Engine::start()
	{
		std::thread gameThread (&Game::startThread, game);
		std::thread renderThread(&Renderer::startThread, renderer);

		gameThread.join();
		renderThread.join();
	}
}