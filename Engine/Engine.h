#pragma once
#include "Game.h"
#include "Renderer.h"


namespace Engine {
	class Engine
	{
	private:
		Game* game;
		Renderer* renderer;

	public:
		Engine();
		~Engine();

		void init(Game* game);
		void start();
	};
}
