#include "SFMLPlayerController.h"
#include "Object.h"
#include "Logger.h"

#include <SFML\Window.hpp>
#include <string>

namespace Engine {
	SFMLPlayerController::SFMLPlayerController()
	{
		this->setName("SFMLPlayerController");
	}


	SFMLPlayerController::~SFMLPlayerController()
	{
	}

	void SFMLPlayerController::tick()
	{
		handleKeyboard();
		handleMouse();

	}//end tick()

	void SFMLPlayerController::handleKeyboard() 
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			Logger::log("Moving up!");
			move(0, -1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			Logger::log("Moving down!");
			move(0, 1);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			Logger::log("Moving left!");
			move(-1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			Logger::log("Moving right!");
			move(1, 0);
		}
	}//end handle keyboard

	void SFMLPlayerController::handleMouse()
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			auto pos = sf::Mouse::getPosition();
			Logger::log("Left Mouse button clicked at position: " + std::to_string(pos.x) + " " + std::to_string(pos.y));
		}
	}//end handleMouse
}