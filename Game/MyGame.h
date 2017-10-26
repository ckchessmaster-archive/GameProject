#pragma once
#include "Game.h"



namespace Game {
	class MyGame : Engine::Game
	{
	private:
		static GameRegister<MyGame> reg;
	public:
		MyGame();
		~MyGame();
	};
}