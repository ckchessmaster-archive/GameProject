#include "Component.h"


namespace Engine {
	Component::Component(Object* owner)
	{
		this->owner = owner;
	}


	Component::~Component()
	{
	}
}