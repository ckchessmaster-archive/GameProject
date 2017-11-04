#include "Controller.h"
#include "Object.h"
#include <string>

namespace Engine {

	Controller::Controller(Object* owner) : Component(owner)
	{
	}


	Controller::~Controller()
	{
	}

	void Controller::move(int x, int y)
	{
		// need to initialize curLoc
		Location curLoc = owner->getLocation();
		Location newLoc{};
		newLoc.x += x;
		newLoc.y += y;
		Logger::log("Location: " + std::to_string(curLoc.x));
		owner->setLocation(newLoc);
	}
}