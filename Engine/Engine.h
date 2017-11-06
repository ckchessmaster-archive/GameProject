#pragma once
#include "Game.h"
#include "Renderer.h"


namespace Engine {
	class Engine
	{
	private:
		//static Engine* engine;

		Game* game;
		Renderer* renderer;

	public:
		Engine();
		~Engine();

		void init(Game* game);
		void start();

		Renderer* getRenderer() { return renderer; }
		//static Engine* getEngine() { return engine; }
	};
}
