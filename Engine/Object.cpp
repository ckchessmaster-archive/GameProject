#include "Object.h"
#include "Logger.h"

#include <string>

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
		Logger::log("object cur location: " + std::to_string(location.x));
		
	}

	void Object::setLocation(const Location loc)
	{
		//Logger::log("object cur location: " + std::to_string(location.x));
		location.x = loc.x;
		location.y = loc.y;
		//Logger::log("object new location: " + std::to_string(location.x));
	}

	
}