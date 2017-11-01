#pragma once
#include <string>

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

	protected:
		virtual void loadConfig();

		std::string configFile = "defaultGame.cfg";

	public:
		Game();
		~Game();

		static void startThread(Game* game);

		virtual void init();
		virtual void start();
		virtual void tick();
	};
}