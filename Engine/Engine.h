#pragma once
#include "Game.h"

namespace Engine {
	class Engine
	{
	private:
		Game* game;

	public:
		Engine();
		~Engine();

		void init(Game* game);
		void start();
	};
}
