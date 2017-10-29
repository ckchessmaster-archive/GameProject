#pragma once
#include "Game.h"
#include "Renderer.h"

namespace Engine {
	class Engine
	{
	private:
		static Game* (*createGameInstance)(); // default game creation function

		Game* game;
		Renderer renderer;

	public:
		Engine();

		static int registerGame(Game* (*createGameInstance)());

		void init();
		void start();
		void end();
	};
}