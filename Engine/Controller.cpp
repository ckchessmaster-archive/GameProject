#include "Controller.h"
#include "Object.h"
#include <string>

namespace Engine {

	Controller::Controller()
	{
	}


	Controller::~Controller()
	{
	}

	void Controller::move(int x, int y)
	{
		std::shared_ptr<Object> own = owner.lock();
		Transform trans = own->getTransform();
		trans.position.x += x;
		trans.position.y += y;

		own->setTransform(trans);
	}
}