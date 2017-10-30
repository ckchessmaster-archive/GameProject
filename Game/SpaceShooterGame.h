#pragma once
#include "Game.h"

namespace Game {
	class SpaceShooterGame : public Engine::Game
	{
	private:
		typedef Engine::Game Super;

	public:
		SpaceShooterGame();
		~SpaceShooterGame();

		virtual void start();
		virtual void tick();
	};
}
