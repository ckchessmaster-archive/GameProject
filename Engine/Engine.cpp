#include "Engine.h"

namespace Engine {
	Engine::Engine()
	{
	}

	void Engine::registerGame(Game* (*createGameInstance)())
	{
		Engine::createGameInstance = createGameInstance;
	}
	void Engine::init()
	{
	}

	void Engine::start()
	{
	}
}