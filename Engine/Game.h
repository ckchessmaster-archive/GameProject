#pragma once
#include "Scene.h"

#include <string>

namespace Engine {
	enum GameState {
		starting,
		running,
		ending,
		stopped
	};
	class Game
	{
	private:
		int tps = 1; //ticks per second

	protected:
		GameState gameState = stopped;
		Scene scene;
		
		std::string configFile = "defaultGame.cfg";

		virtual void loadConfig();
		virtual void tick();

		

	public:
		Game();
		~Game();

		static void startThread(Game* game);

		virtual void init();
		virtual void start();

		GameState getGameState() const { return gameState; }
		Scene getScene() const { return scene; }
		void setGameState(GameState gameState) { this->gameState = gameState; }
	};
}