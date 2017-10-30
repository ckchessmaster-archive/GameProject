#include "Engine.h"
#include "SpaceShooterGame.h"

#include <iostream>

int main() {

	Engine::Engine engine;
	engine.init((Engine::Game*) new Game::SpaceShooterGame());
	engine.start();

	system("pause");

	return 0;
}