#include "SFMLPlayerController.h"
#include "Object.h"
#include "Logger.h"

#include <SFML\Window.hpp>

namespace Engine {
	SFMLPlayerController::SFMLPlayerController(Object* owner) : Controller(owner)
	{
		this->setName("SFMLPlayerController");
	}


	SFMLPlayerController::~SFMLPlayerController()
	{
	}

	void SFMLPlayerController::tick()
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
			//Logger::log("Moving up!");
			move(0, 1);
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
			//Logger::log("Moving down!");
			move(0, -1);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			//Logger::log("Moving left!");
			move(-1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
			//Logger::log("Moving right!");
			move(1, 0);
		}
	}
}