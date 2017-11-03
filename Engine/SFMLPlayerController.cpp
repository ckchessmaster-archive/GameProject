#include "SFMLPlayerController.h"
#include "Object.h"

#include <SFML\Window.hpp>

namespace Engine {
	SFMLPlayerController::SFMLPlayerController(Object* owner) : Controller(owner)
	{
	}


	SFMLPlayerController::~SFMLPlayerController()
	{
	}

	void SFMLPlayerController::tick()
	{
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
			
		}
	}
}