#include "Controller.h"
#include "Object.h"

namespace Engine {

	Controller::Controller(Object* owner) : Component(owner)
	{
	}


	Controller::~Controller()
	{
	}

	void Controller::move(int x, int y)
	{
		Location curLoc = owner->getLocation();
		owner->setLocation(Location{ (curLoc.x + x), (curLoc.y + y) });
	}
}