#pragma once
#include "Game.h"
#include "Engine.h"


namespace Game {
	class MyGame : Engine::Game
	{
	private:

		// dummy variable used to register our class with the Engine
		static int reg;

	public:
		MyGame();
		~MyGame();

		// function used by the engine to make an instance of this class
		static Engine::Game* createNewMyGame();
	};
}