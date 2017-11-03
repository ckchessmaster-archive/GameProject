#include "Object.h"

namespace Engine {

	Object::Object()
	{
	}


	Object::~Object()
	{
	}

	void Object::tick()
	{
		// tick over all components
		for (auto const& x : components) {
			x.second->tick();
		}
	}
}