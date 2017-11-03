#include "Component.h"
#include "Object.h"

namespace Engine {
	
	Component::Component(Object* owner)
	{
		this->owner = owner;
	}


	Component::~Component()
	{
	}

	void Component::tick()
	{
	}
}