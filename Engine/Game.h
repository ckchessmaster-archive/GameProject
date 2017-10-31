#pragma once

#include <chrono>

namespace Engine {
	class Game
	{
		enum GameState {
			starting,
			running,
			ending,
			stopped
		};

	private:
		int tps; //ticks per second

		GameState gameState = stopped;

	public:
		Game();
		~Game();

		static void startThread(Game* game);

		virtual void init();
		virtual void start();
		virtual void tick();
	};
}