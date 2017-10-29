#include <thread>
#include "Engine.h"

namespace Engine {
	Engine::Engine() { }

	int Engine::registerGame(Game* (*createGameInstance)())
	{
		//Engine::createGameInstance = createGameInstance;
		return 0;
	}

	void Engine::init()
	{
		game = createGameInstance();
		game->init();

		renderer.init();
	}

	void Engine::start()
	{
		std::thread gameThread(&game->start);
		std::thread renderThread(&renderer.start);

		// wait until the thread exits
		gameThread.join();
	}

	void Engine::end()
	{
		delete game;
	}
}//end namespace