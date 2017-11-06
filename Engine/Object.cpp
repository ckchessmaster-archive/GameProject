#include "Object.h"
#include "Logger.h"

#include <string>

namespace Engine {

	Object::Object()
	{
	}


	Object::~Object()
	{
		// need to delete all components
	}

	void Object::tick()
	{
		// tick over all components
		for (auto const& x : components) {
			x.second->tick();
		}
		//Logger::log("object cur location: " + std::to_string(transform.position.x));
		
	}

	void Object::addComponent(std::unique_ptr<Component> comp)
	{
		components.emplace(comp.get()->getName(), std::move(comp));
	}

	void Object::setTransform(Transform trans)
	{
		//Logger::log("object cur location: " + std::to_string(location.x));
		transform.position.x = trans.position.x;
		transform.position.y = trans.position.y;
		//Logger::log("object new location: " + std::to_string(location.x));
	}

	void Object::setName(std::string name)
	{
		this->name = name;
	}

	
}