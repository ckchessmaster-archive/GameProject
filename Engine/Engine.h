#pragma once
#include "Game.h"
namespace Engine {
	class Engine
	{
	private:
		static Game* (*createGameInstance)(); // default game creation function

	public:
		Engine();

		static void registerGame(Game* (*createGameInstance)());

		void init();
		void start();
	};
}