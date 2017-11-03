#pragma once
#include "Component.h"
#include "Logger.h"
#include <map>

namespace Engine {
	struct Location {
		int x;
		int y;
	};
	class Object
	{
	private:
		std::map<std::string, Component*> components;
		Location location;

	public:
		Object();
		~Object();

		virtual void tick();

		std::map<std::string, Component*> getComponents() const { return components; }
		void addComponent(Component* comp) { components.insert(std::make_pair(comp->getName(), comp)); }
		
		Location getLocation() const { return location; }
		void setLocation(const Location &loc) { location = loc; }
	};
}
